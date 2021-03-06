// vim: ts=4:sw=4:et:sta
#ifndef Branches_h
#define Branches_h

#include <map>
#include <string>
#include <vector>

#include "Math/LorentzVector.h"
#include "TChain.h"

#include "CutFlow.h"
#include "HWrapper.h"

namespace roast {
    class Branches {
        protected:
            void SetUp(std::map<std::string,std::string> const &, std::vector<std::string> const &);
            virtual void Null();
            virtual void Delete();
            virtual void Clear();
            virtual void SetBranchAddresses();
            virtual void SetChain(TChain*);

            std::map<std::string,std::string>		params;
            TChain* fChain;

        public:
            Branches();
            Branches(const std::vector<std::string>&);
            virtual ~Branches();

            bool IsCached(const std::string&) const;
            float GetCached(const std::string&) const;
            void SetCached(const std::string&, const float);

            void GetEntry(double);
            Long64_t GetEntries();
            unsigned int GetNumCombos() { return NumCombos; };
            virtual bool IsGoodGenMatch(const int&) const = 0;

            std::string GetCurrentFilename();

            unsigned int TranslateMatchIndex(int, int=-99) const;
            unsigned int TranslateJetMatchIndex(int) const;

            // >>> Begin declarations <<<
            std::vector<float>* CSVeventWeight;
            std::vector<float>* CSVeventWeightCErr1down;
            std::vector<float>* CSVeventWeightCErr1up;
            std::vector<float>* CSVeventWeightCErr2down;
            std::vector<float>* CSVeventWeightCErr2up;
            std::vector<float>* CSVeventWeightHFStats1down;
            std::vector<float>* CSVeventWeightHFStats1up;
            std::vector<float>* CSVeventWeightHFStats2down;
            std::vector<float>* CSVeventWeightHFStats2up;
            std::vector<float>* CSVeventWeightHFdown;
            std::vector<float>* CSVeventWeightHFup;
            std::vector<float>* CSVeventWeightLFStats1down;
            std::vector<float>* CSVeventWeightLFStats1up;
            std::vector<float>* CSVeventWeightLFStats2down;
            std::vector<float>* CSVeventWeightLFStats2up;
            std::vector<float>* CSVeventWeightLFdown;
            std::vector<float>* CSVeventWeightLFup;
            std::vector<float>* GJ_Eta;
            std::vector<bool>* GJ_IsBjet;
            std::vector<float>* GJ_MomentumRank;
            std::vector<float>* GJ_Phi;
            std::vector<float>* GJ_Pt;
            std::vector<float>* GT_Eta;
            std::vector<float>* GT_MomentumRank;
            std::vector<float>* GT_ParentEta;
            std::vector<int>* GT_ParentId;
            std::vector<float>* GT_ParentP;
            std::vector<float>* GT_ParentPhi;
            std::vector<float>* GT_ParentPt;
            std::vector<float>* GT_Phi;
            std::vector<float>* GT_Pt;
            std::vector<bool>* GT_ToElectron;
            std::vector<bool>* GT_ToHadrons;
            std::vector<bool>* GT_ToMuon;
            std::vector<float>* GT_VisEta;
            std::vector<float>* GT_VisPhi;
            std::vector<float>* GT_VisPt;
            std::vector<float>* HT;
            Bool_t IsTauEvent;
            std::vector<std::vector<float> >* J_Charge;
            std::vector<std::vector<float> >* J_MomentumRank;
            std::vector<int>* J_NumJets;
            std::vector<std::vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > >* J_P;
            std::vector<std::vector<int> >* J_PartonGrandParentId;
            std::vector<std::vector<int> >* J_PartonGrandmother00Id;
            std::vector<std::vector<int> >* J_PartonGrandmother00Status;
            std::vector<std::vector<int> >* J_PartonGrandmother01Id;
            std::vector<std::vector<int> >* J_PartonGrandmother01Status;
            std::vector<std::vector<int> >* J_PartonGrandmother10Id;
            std::vector<std::vector<int> >* J_PartonGrandmother10Status;
            std::vector<std::vector<int> >* J_PartonGrandmother11Id;
            std::vector<std::vector<int> >* J_PartonGrandmother11Status;
            std::vector<std::vector<int> >* J_PartonId;
            std::vector<std::vector<int> >* J_PartonMother0Id;
            std::vector<std::vector<int> >* J_PartonMother0Status;
            std::vector<std::vector<int> >* J_PartonMother1Id;
            std::vector<std::vector<int> >* J_PartonMother1Status;
            std::vector<std::vector<int> >* J_PartonParentId;
            std::vector<std::vector<int> >* J_PartonStatus;
            std::vector<std::vector<float> >* J_combSecVtxBTag;
            std::vector<std::vector<bool> >* J_combSecVtxLooseBTag;
            std::vector<std::vector<bool> >* J_combSecVtxMediumBTag;
            std::vector<std::vector<bool> >* J_combSecVtxTightBTag;
            std::vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >* MET_P;
            std::vector<float>* MHT;
            std::vector<int>* MomentumRank;
            Int_t NTruePV;
            std::vector<unsigned int>* NumCSVLbtagJets;
            std::vector<unsigned int>* NumCSVMbtagJets;
            std::vector<unsigned int>* NumCSVTbtagJets;
            std::vector<unsigned int>* NumCleanCSVLbtagJets;
            std::vector<unsigned int>* NumCleanCSVMbtagJets;
            std::vector<unsigned int>* NumCleanCSVTbtagJets;
            std::vector<unsigned int>* NumCleanNonCSVLbtagJets;
            std::vector<unsigned int>* NumCleanNonCSVMbtagJets;
            std::vector<unsigned int>* NumCleanNonCSVTbtagJets;
            UInt_t NumCombos;
            std::vector<unsigned int>* NumExLooseElectrons;
            std::vector<unsigned int>* NumExLooseMuons;
            Int_t NumGenJets;
            Int_t NumGenTaus;
            Double_t NumInteractionsBX0;
            Double_t NumInteractionsBXm1;
            Double_t NumInteractionsBXp1;
            std::vector<unsigned int>* NumLooseElectrons;
            std::vector<unsigned int>* NumLooseMuons;
            std::vector<unsigned int>* NumNonCSVLbtagJets;
            std::vector<unsigned int>* NumNonCSVMbtagJets;
            std::vector<unsigned int>* NumNonCSVTbtagJets;
            UInt_t NumTaus;
            std::vector<unsigned int>* NumTightElectrons;
            std::vector<unsigned int>* NumTightMuons;
            Int_t NumVertices;
            std::vector<float>* TriggerEventWeight;
            std::vector<float>* V_NormChiSquared;
            std::vector<float>* V_NumDOF;
            std::vector<float>* V_Rho;
            std::vector<float>* V_Xcoord;
            std::vector<float>* V_XcoordErr;
            std::vector<float>* V_Ycoord;
            std::vector<float>* V_YcoordErr;
            std::vector<float>* V_Zcoord;
            std::vector<float>* V_ZcoordErr;
            Int_t bQuarkCount;
            Int_t cQuarkCount;
            Double_t event;
            Int_t higgsDecayMode;
            Double_t lumi;
            Double_t puWeight;
            Double_t puWeightDown;
            Double_t puWeightUp;
            Double_t q2WeightDown;
            Double_t q2WeightUp;
            Double_t run;
            Double_t topPtWeight;
            Double_t topPtWeightDown;
            Double_t topPtWeightUp;
            // >>> End declarations <<<

        ClassDef(Branches, 1);
    };
}

#endif
