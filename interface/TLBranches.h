// vim: ts=4:sw=4:et:sta
#ifndef TLBranches_h
#define TLBranches_h

#include "Math/LorentzVector.h"

#include "Branches.h"

namespace roast {
    namespace tl {
        class Branches : public roast::Branches {
            private:
                void	Null();
                void	Delete();
                void	Clear();
                void	SetBranchAddresses();

            public:
                Branches();
                Branches(const std::vector<std::string>&);
                ~Branches();

                virtual bool IsGoodGenMatch(const int&) const;

                unsigned int GetTauIsolationIndex(const unsigned int) const;
                unsigned int GetTauIsolationIndexMVA(const unsigned int) const;
                unsigned int GetTauIsolationIndexMVA2(const unsigned int) const;
                unsigned int GetTauIsolationIndex3Hits(const unsigned int) const;
                unsigned int GetTauAntiElectronIndex(const unsigned int) const;
                unsigned int GetTauAntiElectronIndexMVA2(const unsigned int) const;
                unsigned int GetTauAntiElectronIndexMVA3(const unsigned int) const;
                unsigned int GetTauAntiMuonIndex(const unsigned int) const;
                unsigned int GetTauAntiMuonIndex2(const unsigned int) const;

                // >>> Begin declarations <<<
                std::vector<float>* L_Charge;
                std::vector<float>* L_CorrectedD0;
                std::vector<float>* L_CorrectedDZ;
                std::vector<float>* L_EventWeight;
                std::vector<int>* L_GenMatchDaughter0Id;
                std::vector<int>* L_GenMatchDaughter0Status;
                std::vector<int>* L_GenMatchDaughter1Id;
                std::vector<int>* L_GenMatchDaughter1Status;
                std::vector<int>* L_GenMatchGrandmother00Id;
                std::vector<int>* L_GenMatchGrandmother00Status;
                std::vector<int>* L_GenMatchGrandmother01Id;
                std::vector<int>* L_GenMatchGrandmother01Status;
                std::vector<int>* L_GenMatchGrandmother10Id;
                std::vector<int>* L_GenMatchGrandmother10Status;
                std::vector<int>* L_GenMatchGrandmother11Id;
                std::vector<int>* L_GenMatchGrandmother11Status;
                std::vector<int>* L_GenMatchId;
                std::vector<int>* L_GenMatchMother0Id;
                std::vector<int>* L_GenMatchMother0Status;
                std::vector<int>* L_GenMatchMother1Id;
                std::vector<int>* L_GenMatchMother1Status;
                std::vector<int>* L_GenMatchStatus;
                std::vector<float>* L_ImpactParameter;
                std::vector<float>* L_IsElectron;
                std::vector<bool>* L_IsLoose;
                std::vector<float>* L_IsMuon;
                std::vector<bool>* L_IsTight;
                std::vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >* L_P;
                std::vector<float>* L_RelIso;
                std::vector<float>* T_Charge;
                std::vector<unsigned int>* T_DecayMode;
                std::vector<float>* T_EmFraction;
                std::vector<int>* T_GenMatchDaughter0Id;
                std::vector<int>* T_GenMatchDaughter0Status;
                std::vector<int>* T_GenMatchDaughter1Id;
                std::vector<int>* T_GenMatchDaughter1Status;
                std::vector<int>* T_GenMatchGrandmother00Id;
                std::vector<int>* T_GenMatchGrandmother00Status;
                std::vector<int>* T_GenMatchGrandmother01Id;
                std::vector<int>* T_GenMatchGrandmother01Status;
                std::vector<int>* T_GenMatchGrandmother10Id;
                std::vector<int>* T_GenMatchGrandmother10Status;
                std::vector<int>* T_GenMatchGrandmother11Id;
                std::vector<int>* T_GenMatchGrandmother11Status;
                std::vector<int>* T_GenMatchId;
                std::vector<int>* T_GenMatchMother0Id;
                std::vector<int>* T_GenMatchMother0Status;
                std::vector<int>* T_GenMatchMother1Id;
                std::vector<int>* T_GenMatchMother1Status;
                std::vector<int>* T_GenMatchStatus;
                std::vector<bool>* T_HPSagainstElectronDeadECAL;
                std::vector<bool>* T_HPSagainstElectronLoose;
                std::vector<bool>* T_HPSagainstElectronLooseMVA2;
                std::vector<bool>* T_HPSagainstElectronLooseMVA3;
                std::vector<bool>* T_HPSagainstElectronMVA;
                std::vector<bool>* T_HPSagainstElectronMVA2category;
                std::vector<float>* T_HPSagainstElectronMVA2raw;
                std::vector<bool>* T_HPSagainstElectronMVA3category;
                std::vector<float>* T_HPSagainstElectronMVA3raw;
                std::vector<bool>* T_HPSagainstElectronMedium;
                std::vector<bool>* T_HPSagainstElectronMediumMVA2;
                std::vector<bool>* T_HPSagainstElectronMediumMVA3;
                std::vector<bool>* T_HPSagainstElectronTight;
                std::vector<bool>* T_HPSagainstElectronTightMVA2;
                std::vector<bool>* T_HPSagainstElectronTightMVA3;
                std::vector<bool>* T_HPSagainstElectronVLooseMVA2;
                std::vector<bool>* T_HPSagainstElectronVTightMVA3;
                std::vector<bool>* T_HPSagainstMuonLoose;
                std::vector<bool>* T_HPSagainstMuonLoose2;
                std::vector<bool>* T_HPSagainstMuonMedium;
                std::vector<bool>* T_HPSagainstMuonMedium2;
                std::vector<bool>* T_HPSagainstMuonTight;
                std::vector<bool>* T_HPSagainstMuonTight2;
                std::vector<float>* T_HPSbyCombinedIsolationDeltaBetaCorrRaw;
                std::vector<float>* T_HPSbyCombinedIsolationDeltaBetaCorrRaw3Hits;
                std::vector<float>* T_HPSbyIsolationMVA2raw;
                std::vector<float>* T_HPSbyIsolationMVAraw;
                std::vector<bool>* T_HPSbyLooseCombinedIsolationDeltaBetaCorr;
                std::vector<bool>* T_HPSbyLooseCombinedIsolationDeltaBetaCorr3Hits;
                std::vector<bool>* T_HPSbyLooseIsolationMVA;
                std::vector<bool>* T_HPSbyLooseIsolationMVA2;
                std::vector<bool>* T_HPSbyMediumCombinedIsolationDeltaBetaCorr;
                std::vector<bool>* T_HPSbyMediumCombinedIsolationDeltaBetaCorr3Hits;
                std::vector<bool>* T_HPSbyMediumIsolationMVA;
                std::vector<bool>* T_HPSbyMediumIsolationMVA2;
                std::vector<bool>* T_HPSbyTightCombinedIsolationDeltaBetaCorr;
                std::vector<bool>* T_HPSbyTightCombinedIsolationDeltaBetaCorr3Hits;
                std::vector<bool>* T_HPSbyTightIsolationMVA;
                std::vector<bool>* T_HPSbyTightIsolationMVA2;
                std::vector<bool>* T_HPSbyVLooseCombinedIsolationDeltaBetaCorr;
                std::vector<bool>* T_HPSdecayModeFinding;
                std::vector<bool>* T_IsInTheCracks;
                std::vector<float>* T_JetCSV;
                std::vector<float>* T_LTIpVtdxy;
                std::vector<float>* T_LTIpVtdxyError;
                std::vector<float>* T_LTIpVtdz;
                std::vector<float>* T_LTIpVtdzError;
                std::vector<float>* T_LTNormChiSqrd;
                std::vector<float>* T_LTPt;
                std::vector<unsigned int>* T_LTValidHits;
                std::vector<bool>* T_LTvalid;
                std::vector<float>* T_LTvx;
                std::vector<float>* T_LTvy;
                std::vector<float>* T_LTvz;
                std::vector<int>* T_MomentumRank;
                std::vector<unsigned int>* T_NProngs;
                std::vector<unsigned int>* T_NSignalGammas;
                std::vector<unsigned int>* T_NSignalNeutrals;
                std::vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >* T_P;
                // >>> End declarations <<<

                ClassDef(Branches, 1);
        };
    }
}

#endif
