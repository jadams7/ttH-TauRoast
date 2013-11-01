// vim: ts=4:sw=4:et:sta
/*
    Author:			Nil Valls <nil.valls@cern.ch>
    Date:			11 Jun 2011
    Description:	Plot stacking class.
    Notes:

*/

#include "TFile.h"

#include "../interface/Branches.h"

using namespace std;
using namespace roast;

// Default constructor
Branches::Branches() : fChain(0), caches_dirty(true)
{
    Null();
    SetBranchAddresses();
}

Branches::Branches(vector<string> const & iPath) :
    caches_dirty(true)
{
    fChain = new TChain("TTbarHTauTau");
    for (const auto& p: iPath)
        fChain->Add(p.c_str());

    // Set branch addresses and branch pointers
    if (!fChain){ cerr << "ERROR: Trying to initialize NULL TChain" << endl; exit(1); }
    fChain->SetMakeClass(1);
    Init();

    Null();
    SetBranchAddresses();
}

// Default destructor
Branches::~Branches()
{
    if (fChain) {
        fChain->ResetBranchAddresses();
        delete fChain->GetCurrentFile();
    }
    delete fChain;
}

void Branches::SetChain(TChain* iChain){ fChain = iChain; } 

void Branches::Init()
{
	// Set branch addresses and branch pointers
	fChain->SetMakeClass(1);
	fChain->ResetBranchAddresses();

	//Clear();
}

void
Branches::GetEntry(double iEntry)
{
    caches_dirty = true;
    fChain->GetEntry(iEntry);
}

Long64_t Branches::GetEntries(){
	if(fChain == NULL){ cerr << "ERROR: Trying to GetEntries() from a NULL TChain." << endl; exit(1); }
	return fChain->GetEntries();
}

unsigned int
Branches::TranslateMatchIndex(int idx, int pidx) const
{
    if (idx == -99)
        return 0; // no match

    switch (abs(idx)) {
        case 15:
            return 2; // tau
        case 13:
            return 3; // muon
        case 11:
            return 4; // electron
        case 22:
            return 5; // photon
        case 23:
            return 6; // Z
        case 24:
            if (abs(pidx) == 25)
                return 10; // W from H
            else if (abs(pidx) == 6)
                return 9; // W from t
            else
                return 8; // other W
        case 25:
            return 7; // Higgs
        default:
            return 1; // hadronic
    }
}

unsigned int
Branches::TranslateJetMatchIndex(int idx) const
{
    if (idx == -99)
        return 0; // no match

    switch (abs(idx)) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            return idx + 1; // quarks
        case 11:
            return 8; // electron
        case 13:
            return 9; // muon
        case 15:
            return 10; // tau
        case 21:
            return 11; // gluon
        case 24:
            return 12; // W
        default:
            return 1;
    }
}

ClassImp(roast::Branches)
