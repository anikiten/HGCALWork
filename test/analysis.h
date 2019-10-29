//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Oct 18 16:23:16 2019 by ROOT version 6.14/09
// from TTree hgc/hgc
// found on file: hgcalNtuple.root
//////////////////////////////////////////////////////////

#ifndef analysis_h
#define analysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "Math/GenVector/Cartesian3D.h"

class analysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxpfclusterFromMultiCl_pos = 10;
   static constexpr Int_t kMaxecalDrivenGsfele_scpos = 1;
   static constexpr Int_t kMaxecalDrivenGsfele_seedpos = 1;

   // Declaration of leaf types
   ULong64_t       event;
   UInt_t          lumi;
   UInt_t          run;
   Float_t         vtx_x;
   Float_t         vtx_y;
   Float_t         vtx_z;
   vector<float>   *genpart_eta;
   vector<float>   *genpart_phi;
   vector<float>   *genpart_pt;
   vector<float>   *genpart_energy;
   vector<float>   *genpart_dvx;
   vector<float>   *genpart_dvy;
   vector<float>   *genpart_dvz;
   vector<float>   *genpart_ovx;
   vector<float>   *genpart_ovy;
   vector<float>   *genpart_ovz;
   vector<int>     *genpart_mother;
   vector<float>   *genpart_exphi;
   vector<float>   *genpart_exeta;
   vector<float>   *genpart_exx;
   vector<float>   *genpart_exy;
   vector<float>   *genpart_fbrem;
   vector<int>     *genpart_pid;
   vector<int>     *genpart_gen;
   vector<int>     *genpart_reachedEE;
   vector<bool>    *genpart_fromBeamPipe;
   vector<vector<float> > *genpart_posx;
   vector<vector<float> > *genpart_posy;
   vector<vector<float> > *genpart_posz;
   vector<float>   *gen_eta;
   vector<float>   *gen_phi;
   vector<float>   *gen_pt;
   vector<float>   *gen_energy;
   vector<int>     *gen_charge;
   vector<int>     *gen_pdgid;
   vector<int>     *gen_status;
   vector<vector<int> > *gen_daughters;
   vector<float>   *rechit_eta;
   vector<float>   *rechit_phi;
   vector<float>   *rechit_pt;
   vector<float>   *rechit_energy;
   vector<float>   *rechit_x;
   vector<float>   *rechit_y;
   vector<float>   *rechit_z;
   vector<float>   *rechit_time;
   vector<float>   *rechit_thickness;
   vector<int>     *rechit_layer;
   vector<int>     *rechit_wafer_u;
   vector<int>     *rechit_wafer_v;
   vector<int>     *rechit_cell_u;
   vector<int>     *rechit_cell_v;
   vector<unsigned int> *rechit_detid;
   vector<bool>    *rechit_isHalf;
   vector<int>     *rechit_flags;
   vector<int>     *rechit_cluster2d;
   vector<float>   *rechit_radius;
   vector<float>   *cluster2d_eta;
   vector<float>   *cluster2d_phi;
   vector<float>   *cluster2d_pt;
   vector<float>   *cluster2d_energy;
   vector<float>   *cluster2d_x;
   vector<float>   *cluster2d_y;
   vector<float>   *cluster2d_z;
   vector<int>     *cluster2d_layer;
   vector<int>     *cluster2d_nhitCore;
   vector<int>     *cluster2d_nhitAll;
   vector<int>     *cluster2d_multicluster;
   vector<vector<unsigned int> > *cluster2d_rechits;
   vector<int>     *cluster2d_rechitSeed;
   vector<float>   *multiclus_eta;
   vector<float>   *multiclus_phi;
   vector<float>   *multiclus_pt;
   vector<float>   *multiclus_energy;
   vector<float>   *multiclus_z;
   vector<float>   *multiclus_slopeX;
   vector<float>   *multiclus_slopeY;
   vector<vector<unsigned int> > *multiclus_cluster2d;
   vector<int>     *multiclus_cl2dSeed;
   vector<int>     *multiclus_firstLay;
   vector<int>     *multiclus_lastLay;
   vector<int>     *multiclus_NLay;
   vector<float>   *simcluster_eta;
   vector<float>   *simcluster_phi;
   vector<float>   *simcluster_pt;
   vector<float>   *simcluster_energy;
   vector<float>   *simcluster_simEnergy;
   vector<vector<unsigned int> > *simcluster_hits;
   vector<vector<int> > *simcluster_hits_indices;
   vector<vector<float> > *simcluster_fractions;
   vector<vector<unsigned int> > *simcluster_layers;
   vector<vector<int> > *simcluster_wafers_u;
   vector<vector<int> > *simcluster_wafers_v;
   vector<vector<int> > *simcluster_cells_u;
   vector<vector<int> > *simcluster_cells_v;
   vector<float>   *pfcluster_eta;
   vector<float>   *pfcluster_phi;
   vector<float>   *pfcluster_pt;
   vector<float>   *pfcluster_energy;
   vector<float>   *pfcluster_correctedEnergy;
   vector<vector<unsigned int> > *pfcluster_hits;
   vector<vector<float> > *pfcluster_fractions;
   Int_t           pfclusterFromMultiCl_pos_;
   Double_t        pfclusterFromMultiCl_pos_fCoordinates_fX[kMaxpfclusterFromMultiCl_pos];   //[pfclusterFromMultiCl_pos_]
   Double_t        pfclusterFromMultiCl_pos_fCoordinates_fY[kMaxpfclusterFromMultiCl_pos];   //[pfclusterFromMultiCl_pos_]
   Double_t        pfclusterFromMultiCl_pos_fCoordinates_fZ[kMaxpfclusterFromMultiCl_pos];   //[pfclusterFromMultiCl_pos_]
   vector<float>   *pfclusterFromMultiCl_eta;
   vector<float>   *pfclusterFromMultiCl_phi;
   vector<float>   *pfclusterFromMultiCl_pt;
   vector<float>   *pfclusterFromMultiCl_energy;
   vector<float>   *pfclusterFromMultiCl_energyEE;
   vector<float>   *pfclusterFromMultiCl_energyFH;
   vector<float>   *pfclusterFromMultiCl_energyBH;
   vector<float>   *pfclusterFromMultiCl_correctedEnergy;
   vector<vector<unsigned int> > *pfclusterFromMultiCl_hits;
   vector<vector<float> > *pfclusterFromMultiCl_fractions;
   vector<vector<unsigned int> > *pfclusterFromMultiCl_rechits;
   vector<float>   *ecalDrivenGsfele_charge;
   vector<float>   *ecalDrivenGsfele_eta;
   vector<float>   *ecalDrivenGsfele_phi;
   vector<float>   *ecalDrivenGsfele_pt;
   Int_t           ecalDrivenGsfele_scpos_;
   Double_t        ecalDrivenGsfele_scpos_fCoordinates_fX[kMaxecalDrivenGsfele_scpos];   //[ecalDrivenGsfele_scpos_]
   Double_t        ecalDrivenGsfele_scpos_fCoordinates_fY[kMaxecalDrivenGsfele_scpos];   //[ecalDrivenGsfele_scpos_]
   Double_t        ecalDrivenGsfele_scpos_fCoordinates_fZ[kMaxecalDrivenGsfele_scpos];   //[ecalDrivenGsfele_scpos_]
   vector<float>   *ecalDrivenGsfele_sceta;
   vector<float>   *ecalDrivenGsfele_scphi;
   vector<unsigned int> *ecalDrivenGsfele_seedlayer;
   Int_t           ecalDrivenGsfele_seedpos_;
   Double_t        ecalDrivenGsfele_seedpos_fCoordinates_fX[kMaxecalDrivenGsfele_seedpos];   //[ecalDrivenGsfele_seedpos_]
   Double_t        ecalDrivenGsfele_seedpos_fCoordinates_fY[kMaxecalDrivenGsfele_seedpos];   //[ecalDrivenGsfele_seedpos_]
   Double_t        ecalDrivenGsfele_seedpos_fCoordinates_fZ[kMaxecalDrivenGsfele_seedpos];   //[ecalDrivenGsfele_seedpos_]
   vector<float>   *ecalDrivenGsfele_seedeta;
   vector<float>   *ecalDrivenGsfele_seedphi;
   vector<float>   *ecalDrivenGsfele_seedenergy;
   vector<float>   *ecalDrivenGsfele_energy;
   vector<float>   *ecalDrivenGsfele_energyEE;
   vector<float>   *ecalDrivenGsfele_energyFH;
   vector<float>   *ecalDrivenGsfele_energyBH;
   vector<float>   *ecalDrivenGsfele_isEB;
   vector<float>   *ecalDrivenGsfele_hoe;
   vector<float>   *ecalDrivenGsfele_numClinSC;
   vector<float>   *ecalDrivenGsfele_track_dxy;
   vector<float>   *ecalDrivenGsfele_track_dz;
   vector<float>   *ecalDrivenGsfele_track_simdxy;
   vector<float>   *ecalDrivenGsfele_track_simdz;
   vector<float>   *ecalDrivenGsfele_deltaEtaSuperClusterTrackAtVtx;
   vector<float>   *ecalDrivenGsfele_deltaPhiSuperClusterTrackAtVtx;
   vector<float>   *ecalDrivenGsfele_deltaEtaEleClusterTrackAtCalo;
   vector<float>   *ecalDrivenGsfele_deltaPhiEleClusterTrackAtCalo;
   vector<float>   *ecalDrivenGsfele_deltaEtaSeedClusterTrackAtCalo;
   vector<float>   *ecalDrivenGsfele_deltaPhiSeedClusterTrackAtCalo;
   vector<float>   *ecalDrivenGsfele_eSuperClusterOverP;
   vector<float>   *ecalDrivenGsfele_eSeedClusterOverP;
   vector<float>   *ecalDrivenGsfele_eSeedClusterOverPout;
   vector<float>   *ecalDrivenGsfele_eEleClusterOverPout;
   vector<vector<unsigned int> > *ecalDrivenGsfele_pfClusterIndex;
   vector<float>   *calopart_eta;
   vector<float>   *calopart_phi;
   vector<float>   *calopart_pt;
   vector<float>   *calopart_energy;
   vector<float>   *calopart_simEnergy;
   vector<vector<unsigned int> > *calopart_simClusterIndex;
   vector<float>   *track_eta;
   vector<float>   *track_phi;
   vector<float>   *track_pt;
   vector<float>   *track_energy;
   vector<int>     *track_charge;
   vector<vector<float> > *track_posx;
   vector<vector<float> > *track_posy;
   vector<vector<float> > *track_posz;
   vector<float>   *pfcandidate_eta;
   vector<float>   *pfcandidate_phi;
   vector<float>   *pfcandidate_pt;
   vector<float>   *pfcandidate_energy;
   vector<int>     *pfcandidate_pdgid;
   vector<vector<int> > *gunparticle_id;
   vector<vector<float> > *gunparticle_energy;
   vector<vector<float> > *gunparticle_pt;
   vector<vector<float> > *gunparticle_eta;
   vector<vector<float> > *gunparticle_phi;

   // List of branches
   TBranch        *b_event;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_run;   //!
   TBranch        *b_vtx_x;   //!
   TBranch        *b_vtx_y;   //!
   TBranch        *b_vtx_z;   //!
   TBranch        *b_genpart_eta;   //!
   TBranch        *b_genpart_phi;   //!
   TBranch        *b_genpart_pt;   //!
   TBranch        *b_genpart_energy;   //!
   TBranch        *b_genpart_dvx;   //!
   TBranch        *b_genpart_dvy;   //!
   TBranch        *b_genpart_dvz;   //!
   TBranch        *b_genpart_ovx;   //!
   TBranch        *b_genpart_ovy;   //!
   TBranch        *b_genpart_ovz;   //!
   TBranch        *b_genpart_mother;   //!
   TBranch        *b_genpart_exphi;   //!
   TBranch        *b_genpart_exeta;   //!
   TBranch        *b_genpart_exx;   //!
   TBranch        *b_genpart_exy;   //!
   TBranch        *b_genpart_fbrem;   //!
   TBranch        *b_genpart_pid;   //!
   TBranch        *b_genpart_gen;   //!
   TBranch        *b_genpart_reachedEE;   //!
   TBranch        *b_genpart_fromBeamPipe;   //!
   TBranch        *b_genpart_posx;   //!
   TBranch        *b_genpart_posy;   //!
   TBranch        *b_genpart_posz;   //!
   TBranch        *b_gen_eta;   //!
   TBranch        *b_gen_phi;   //!
   TBranch        *b_gen_pt;   //!
   TBranch        *b_gen_energy;   //!
   TBranch        *b_gen_charge;   //!
   TBranch        *b_gen_pdgid;   //!
   TBranch        *b_gen_status;   //!
   TBranch        *b_gen_daughters;   //!
   TBranch        *b_rechit_eta;   //!
   TBranch        *b_rechit_phi;   //!
   TBranch        *b_rechit_pt;   //!
   TBranch        *b_rechit_energy;   //!
   TBranch        *b_rechit_x;   //!
   TBranch        *b_rechit_y;   //!
   TBranch        *b_rechit_z;   //!
   TBranch        *b_rechit_time;   //!
   TBranch        *b_rechit_thickness;   //!
   TBranch        *b_rechit_layer;   //!
   TBranch        *b_rechit_wafer_u;   //!
   TBranch        *b_rechit_wafer_v;   //!
   TBranch        *b_rechit_cell_u;   //!
   TBranch        *b_rechit_cell_v;   //!
   TBranch        *b_rechit_detid;   //!
   TBranch        *b_rechit_isHalf;   //!
   TBranch        *b_rechit_flags;   //!
   TBranch        *b_rechit_cluster2d;   //!
   TBranch        *b_rechit_radius;   //!
   TBranch        *b_cluster2d_eta;   //!
   TBranch        *b_cluster2d_phi;   //!
   TBranch        *b_cluster2d_pt;   //!
   TBranch        *b_cluster2d_energy;   //!
   TBranch        *b_cluster2d_x;   //!
   TBranch        *b_cluster2d_y;   //!
   TBranch        *b_cluster2d_z;   //!
   TBranch        *b_cluster2d_layer;   //!
   TBranch        *b_cluster2d_nhitCore;   //!
   TBranch        *b_cluster2d_nhitAll;   //!
   TBranch        *b_cluster2d_multicluster;   //!
   TBranch        *b_cluster2d_rechits;   //!
   TBranch        *b_cluster2d_rechitSeed;   //!
   TBranch        *b_multiclus_eta;   //!
   TBranch        *b_multiclus_phi;   //!
   TBranch        *b_multiclus_pt;   //!
   TBranch        *b_multiclus_energy;   //!
   TBranch        *b_multiclus_z;   //!
   TBranch        *b_multiclus_slopeX;   //!
   TBranch        *b_multiclus_slopeY;   //!
   TBranch        *b_multiclus_cluster2d;   //!
   TBranch        *b_multiclus_cl2dSeed;   //!
   TBranch        *b_multiclus_firstLay;   //!
   TBranch        *b_multiclus_lastLay;   //!
   TBranch        *b_multiclus_NLay;   //!
   TBranch        *b_simcluster_eta;   //!
   TBranch        *b_simcluster_phi;   //!
   TBranch        *b_simcluster_pt;   //!
   TBranch        *b_simcluster_energy;   //!
   TBranch        *b_simcluster_simEnergy;   //!
   TBranch        *b_simcluster_hits;   //!
   TBranch        *b_simcluster_hits_indices;   //!
   TBranch        *b_simcluster_fractions;   //!
   TBranch        *b_simcluster_layers;   //!
   TBranch        *b_simcluster_wafers_u;   //!
   TBranch        *b_simcluster_wafers_v;   //!
   TBranch        *b_simcluster_cells_u;   //!
   TBranch        *b_simcluster_cells_v;   //!
   TBranch        *b_pfcluster_eta;   //!
   TBranch        *b_pfcluster_phi;   //!
   TBranch        *b_pfcluster_pt;   //!
   TBranch        *b_pfcluster_energy;   //!
   TBranch        *b_pfcluster_correctedEnergy;   //!
   TBranch        *b_pfcluster_hits;   //!
   TBranch        *b_pfcluster_fractions;   //!
   TBranch        *b_pfclusterFromMultiCl_pos_;   //!
   TBranch        *b_pfclusterFromMultiCl_pos_fCoordinates_fX;   //!
   TBranch        *b_pfclusterFromMultiCl_pos_fCoordinates_fY;   //!
   TBranch        *b_pfclusterFromMultiCl_pos_fCoordinates_fZ;   //!
   TBranch        *b_pfclusterFromMultiCl_eta;   //!
   TBranch        *b_pfclusterFromMultiCl_phi;   //!
   TBranch        *b_pfclusterFromMultiCl_pt;   //!
   TBranch        *b_pfclusterFromMultiCl_energy;   //!
   TBranch        *b_pfclusterFromMultiCl_energyEE;   //!
   TBranch        *b_pfclusterFromMultiCl_energyFH;   //!
   TBranch        *b_pfclusterFromMultiCl_energyBH;   //!
   TBranch        *b_pfclusterFromMultiCl_correctedEnergy;   //!
   TBranch        *b_pfclusterFromMultiCl_hits;   //!
   TBranch        *b_pfclusterFromMultiCl_fractions;   //!
   TBranch        *b_pfclusterFromMultiCl_rechits;   //!
   TBranch        *b_ecalDrivenGsfele_charge;   //!
   TBranch        *b_ecalDrivenGsfele_eta;   //!
   TBranch        *b_ecalDrivenGsfele_phi;   //!
   TBranch        *b_ecalDrivenGsfele_pt;   //!
   TBranch        *b_ecalDrivenGsfele_scpos_;   //!
   TBranch        *b_ecalDrivenGsfele_scpos_fCoordinates_fX;   //!
   TBranch        *b_ecalDrivenGsfele_scpos_fCoordinates_fY;   //!
   TBranch        *b_ecalDrivenGsfele_scpos_fCoordinates_fZ;   //!
   TBranch        *b_ecalDrivenGsfele_sceta;   //!
   TBranch        *b_ecalDrivenGsfele_scphi;   //!
   TBranch        *b_ecalDrivenGsfele_seedlayer;   //!
   TBranch        *b_ecalDrivenGsfele_seedpos_;   //!
   TBranch        *b_ecalDrivenGsfele_seedpos_fCoordinates_fX;   //!
   TBranch        *b_ecalDrivenGsfele_seedpos_fCoordinates_fY;   //!
   TBranch        *b_ecalDrivenGsfele_seedpos_fCoordinates_fZ;   //!
   TBranch        *b_ecalDrivenGsfele_seedeta;   //!
   TBranch        *b_ecalDrivenGsfele_seedphi;   //!
   TBranch        *b_ecalDrivenGsfele_seedenergy;   //!
   TBranch        *b_ecalDrivenGsfele_energy;   //!
   TBranch        *b_ecalDrivenGsfele_energyEE;   //!
   TBranch        *b_ecalDrivenGsfele_energyFH;   //!
   TBranch        *b_ecalDrivenGsfele_energyBH;   //!
   TBranch        *b_ecalDrivenGsfele_isEB;   //!
   TBranch        *b_ecalDrivenGsfele_hoe;   //!
   TBranch        *b_ecalDrivenGsfele_numClinSC;   //!
   TBranch        *b_ecalDrivenGsfele_track_dxy;   //!
   TBranch        *b_ecalDrivenGsfele_track_dz;   //!
   TBranch        *b_ecalDrivenGsfele_track_simdxy;   //!
   TBranch        *b_ecalDrivenGsfele_track_simdz;   //!
   TBranch        *b_ecalDrivenGsfele_deltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_ecalDrivenGsfele_deltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_ecalDrivenGsfele_deltaEtaEleClusterTrackAtCalo;   //!
   TBranch        *b_ecalDrivenGsfele_deltaPhiEleClusterTrackAtCalo;   //!
   TBranch        *b_ecalDrivenGsfele_deltaEtaSeedClusterTrackAtCalo;   //!
   TBranch        *b_ecalDrivenGsfele_deltaPhiSeedClusterTrackAtCalo;   //!
   TBranch        *b_ecalDrivenGsfele_eSuperClusterOverP;   //!
   TBranch        *b_ecalDrivenGsfele_eSeedClusterOverP;   //!
   TBranch        *b_ecalDrivenGsfele_eSeedClusterOverPout;   //!
   TBranch        *b_ecalDrivenGsfele_eEleClusterOverPout;   //!
   TBranch        *b_ecalDrivenGsfele_pfClusterIndex;   //!
   TBranch        *b_calopart_eta;   //!
   TBranch        *b_calopart_phi;   //!
   TBranch        *b_calopart_pt;   //!
   TBranch        *b_calopart_energy;   //!
   TBranch        *b_calopart_simEnergy;   //!
   TBranch        *b_calopart_simClusterIndex;   //!
   TBranch        *b_track_eta;   //!
   TBranch        *b_track_phi;   //!
   TBranch        *b_track_pt;   //!
   TBranch        *b_track_energy;   //!
   TBranch        *b_track_charge;   //!
   TBranch        *b_track_posx;   //!
   TBranch        *b_track_posy;   //!
   TBranch        *b_track_posz;   //!
   TBranch        *b_pfcandidate_eta;   //!
   TBranch        *b_pfcandidate_phi;   //!
   TBranch        *b_pfcandidate_pt;   //!
   TBranch        *b_pfcandidate_energy;   //!
   TBranch        *b_pfcandidate_pdgid;   //!
   TBranch        *b_gunparticle_id;   //!
   TBranch        *b_gunparticle_energy;   //!
   TBranch        *b_gunparticle_pt;   //!
   TBranch        *b_gunparticle_eta;   //!
   TBranch        *b_gunparticle_phi;   //!

   analysis(TTree *tree=0);
   virtual ~analysis();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
  //
   virtual Double_t deltaEta(Double_t phi1, Double_t phi2);
   virtual Double_t deltaPhi(Double_t phi1, Double_t phi2);
   virtual Double_t deltaR(Double_t eta1, Double_t phi1, Double_t eta2, Double_t phi2);
};

#endif

#ifdef analysis_cxx
analysis::analysis(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("hgcalNtuple_pione50eta20.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("hgcalNtuple_pione50eta20.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("hgcalNtuple_pione50eta20.root:/ana");
      dir->GetObject("hgc",tree);

   }
   Init(tree);
}

analysis::~analysis()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t analysis::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t analysis::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void analysis::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   genpart_eta = 0;
   genpart_phi = 0;
   genpart_pt = 0;
   genpart_energy = 0;
   genpart_dvx = 0;
   genpart_dvy = 0;
   genpart_dvz = 0;
   genpart_ovx = 0;
   genpart_ovy = 0;
   genpart_ovz = 0;
   genpart_mother = 0;
   genpart_exphi = 0;
   genpart_exeta = 0;
   genpart_exx = 0;
   genpart_exy = 0;
   genpart_fbrem = 0;
   genpart_pid = 0;
   genpart_gen = 0;
   genpart_reachedEE = 0;
   genpart_fromBeamPipe = 0;
   genpart_posx = 0;
   genpart_posy = 0;
   genpart_posz = 0;
   gen_eta = 0;
   gen_phi = 0;
   gen_pt = 0;
   gen_energy = 0;
   gen_charge = 0;
   gen_pdgid = 0;
   gen_status = 0;
   gen_daughters = 0;
   rechit_eta = 0;
   rechit_phi = 0;
   rechit_pt = 0;
   rechit_energy = 0;
   rechit_x = 0;
   rechit_y = 0;
   rechit_z = 0;
   rechit_time = 0;
   rechit_thickness = 0;
   rechit_layer = 0;
   rechit_wafer_u = 0;
   rechit_wafer_v = 0;
   rechit_cell_u = 0;
   rechit_cell_v = 0;
   rechit_detid = 0;
   rechit_isHalf = 0;
   rechit_flags = 0;
   rechit_cluster2d = 0;
   rechit_radius = 0;
   cluster2d_eta = 0;
   cluster2d_phi = 0;
   cluster2d_pt = 0;
   cluster2d_energy = 0;
   cluster2d_x = 0;
   cluster2d_y = 0;
   cluster2d_z = 0;
   cluster2d_layer = 0;
   cluster2d_nhitCore = 0;
   cluster2d_nhitAll = 0;
   cluster2d_multicluster = 0;
   cluster2d_rechits = 0;
   cluster2d_rechitSeed = 0;
   multiclus_eta = 0;
   multiclus_phi = 0;
   multiclus_pt = 0;
   multiclus_energy = 0;
   multiclus_z = 0;
   multiclus_slopeX = 0;
   multiclus_slopeY = 0;
   multiclus_cluster2d = 0;
   multiclus_cl2dSeed = 0;
   multiclus_firstLay = 0;
   multiclus_lastLay = 0;
   multiclus_NLay = 0;
   simcluster_eta = 0;
   simcluster_phi = 0;
   simcluster_pt = 0;
   simcluster_energy = 0;
   simcluster_simEnergy = 0;
   simcluster_hits = 0;
   simcluster_hits_indices = 0;
   simcluster_fractions = 0;
   simcluster_layers = 0;
   simcluster_wafers_u = 0;
   simcluster_wafers_v = 0;
   simcluster_cells_u = 0;
   simcluster_cells_v = 0;
   pfcluster_eta = 0;
   pfcluster_phi = 0;
   pfcluster_pt = 0;
   pfcluster_energy = 0;
   pfcluster_correctedEnergy = 0;
   pfcluster_hits = 0;
   pfcluster_fractions = 0;
   pfclusterFromMultiCl_eta = 0;
   pfclusterFromMultiCl_phi = 0;
   pfclusterFromMultiCl_pt = 0;
   pfclusterFromMultiCl_energy = 0;
   pfclusterFromMultiCl_energyEE = 0;
   pfclusterFromMultiCl_energyFH = 0;
   pfclusterFromMultiCl_energyBH = 0;
   pfclusterFromMultiCl_correctedEnergy = 0;
   pfclusterFromMultiCl_hits = 0;
   pfclusterFromMultiCl_fractions = 0;
   pfclusterFromMultiCl_rechits = 0;
   ecalDrivenGsfele_charge = 0;
   ecalDrivenGsfele_eta = 0;
   ecalDrivenGsfele_phi = 0;
   ecalDrivenGsfele_pt = 0;
   ecalDrivenGsfele_sceta = 0;
   ecalDrivenGsfele_scphi = 0;
   ecalDrivenGsfele_seedlayer = 0;
   ecalDrivenGsfele_seedeta = 0;
   ecalDrivenGsfele_seedphi = 0;
   ecalDrivenGsfele_seedenergy = 0;
   ecalDrivenGsfele_energy = 0;
   ecalDrivenGsfele_energyEE = 0;
   ecalDrivenGsfele_energyFH = 0;
   ecalDrivenGsfele_energyBH = 0;
   ecalDrivenGsfele_isEB = 0;
   ecalDrivenGsfele_hoe = 0;
   ecalDrivenGsfele_numClinSC = 0;
   ecalDrivenGsfele_track_dxy = 0;
   ecalDrivenGsfele_track_dz = 0;
   ecalDrivenGsfele_track_simdxy = 0;
   ecalDrivenGsfele_track_simdz = 0;
   ecalDrivenGsfele_deltaEtaSuperClusterTrackAtVtx = 0;
   ecalDrivenGsfele_deltaPhiSuperClusterTrackAtVtx = 0;
   ecalDrivenGsfele_deltaEtaEleClusterTrackAtCalo = 0;
   ecalDrivenGsfele_deltaPhiEleClusterTrackAtCalo = 0;
   ecalDrivenGsfele_deltaEtaSeedClusterTrackAtCalo = 0;
   ecalDrivenGsfele_deltaPhiSeedClusterTrackAtCalo = 0;
   ecalDrivenGsfele_eSuperClusterOverP = 0;
   ecalDrivenGsfele_eSeedClusterOverP = 0;
   ecalDrivenGsfele_eSeedClusterOverPout = 0;
   ecalDrivenGsfele_eEleClusterOverPout = 0;
   ecalDrivenGsfele_pfClusterIndex = 0;
   calopart_eta = 0;
   calopart_phi = 0;
   calopart_pt = 0;
   calopart_energy = 0;
   calopart_simEnergy = 0;
   calopart_simClusterIndex = 0;
   track_eta = 0;
   track_phi = 0;
   track_pt = 0;
   track_energy = 0;
   track_charge = 0;
   track_posx = 0;
   track_posy = 0;
   track_posz = 0;
   pfcandidate_eta = 0;
   pfcandidate_phi = 0;
   pfcandidate_pt = 0;
   pfcandidate_energy = 0;
   pfcandidate_pdgid = 0;
   gunparticle_id = 0;
   gunparticle_energy = 0;
   gunparticle_pt = 0;
   gunparticle_eta = 0;
   gunparticle_phi = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("vtx_x", &vtx_x, &b_vtx_x);
   fChain->SetBranchAddress("vtx_y", &vtx_y, &b_vtx_y);
   fChain->SetBranchAddress("vtx_z", &vtx_z, &b_vtx_z);
   fChain->SetBranchAddress("genpart_eta", &genpart_eta, &b_genpart_eta);
   fChain->SetBranchAddress("genpart_phi", &genpart_phi, &b_genpart_phi);
   fChain->SetBranchAddress("genpart_pt", &genpart_pt, &b_genpart_pt);
   fChain->SetBranchAddress("genpart_energy", &genpart_energy, &b_genpart_energy);
   fChain->SetBranchAddress("genpart_dvx", &genpart_dvx, &b_genpart_dvx);
   fChain->SetBranchAddress("genpart_dvy", &genpart_dvy, &b_genpart_dvy);
   fChain->SetBranchAddress("genpart_dvz", &genpart_dvz, &b_genpart_dvz);
   fChain->SetBranchAddress("genpart_ovx", &genpart_ovx, &b_genpart_ovx);
   fChain->SetBranchAddress("genpart_ovy", &genpart_ovy, &b_genpart_ovy);
   fChain->SetBranchAddress("genpart_ovz", &genpart_ovz, &b_genpart_ovz);
   fChain->SetBranchAddress("genpart_mother", &genpart_mother, &b_genpart_mother);
   fChain->SetBranchAddress("genpart_exphi", &genpart_exphi, &b_genpart_exphi);
   fChain->SetBranchAddress("genpart_exeta", &genpart_exeta, &b_genpart_exeta);
   fChain->SetBranchAddress("genpart_exx", &genpart_exx, &b_genpart_exx);
   fChain->SetBranchAddress("genpart_exy", &genpart_exy, &b_genpart_exy);
   fChain->SetBranchAddress("genpart_fbrem", &genpart_fbrem, &b_genpart_fbrem);
   fChain->SetBranchAddress("genpart_pid", &genpart_pid, &b_genpart_pid);
   fChain->SetBranchAddress("genpart_gen", &genpart_gen, &b_genpart_gen);
   fChain->SetBranchAddress("genpart_reachedEE", &genpart_reachedEE, &b_genpart_reachedEE);
   fChain->SetBranchAddress("genpart_fromBeamPipe", &genpart_fromBeamPipe, &b_genpart_fromBeamPipe);
   fChain->SetBranchAddress("genpart_posx", &genpart_posx, &b_genpart_posx);
   fChain->SetBranchAddress("genpart_posy", &genpart_posy, &b_genpart_posy);
   fChain->SetBranchAddress("genpart_posz", &genpart_posz, &b_genpart_posz);
   fChain->SetBranchAddress("gen_eta", &gen_eta, &b_gen_eta);
   fChain->SetBranchAddress("gen_phi", &gen_phi, &b_gen_phi);
   fChain->SetBranchAddress("gen_pt", &gen_pt, &b_gen_pt);
   fChain->SetBranchAddress("gen_energy", &gen_energy, &b_gen_energy);
   fChain->SetBranchAddress("gen_charge", &gen_charge, &b_gen_charge);
   fChain->SetBranchAddress("gen_pdgid", &gen_pdgid, &b_gen_pdgid);
   fChain->SetBranchAddress("gen_status", &gen_status, &b_gen_status);
   fChain->SetBranchAddress("gen_daughters", &gen_daughters, &b_gen_daughters);
   fChain->SetBranchAddress("rechit_eta", &rechit_eta, &b_rechit_eta);
   fChain->SetBranchAddress("rechit_phi", &rechit_phi, &b_rechit_phi);
   fChain->SetBranchAddress("rechit_pt", &rechit_pt, &b_rechit_pt);
   fChain->SetBranchAddress("rechit_energy", &rechit_energy, &b_rechit_energy);
   fChain->SetBranchAddress("rechit_x", &rechit_x, &b_rechit_x);
   fChain->SetBranchAddress("rechit_y", &rechit_y, &b_rechit_y);
   fChain->SetBranchAddress("rechit_z", &rechit_z, &b_rechit_z);
   fChain->SetBranchAddress("rechit_time", &rechit_time, &b_rechit_time);
   fChain->SetBranchAddress("rechit_thickness", &rechit_thickness, &b_rechit_thickness);
   fChain->SetBranchAddress("rechit_layer", &rechit_layer, &b_rechit_layer);
   fChain->SetBranchAddress("rechit_wafer_u", &rechit_wafer_u, &b_rechit_wafer_u);
   fChain->SetBranchAddress("rechit_wafer_v", &rechit_wafer_v, &b_rechit_wafer_v);
   fChain->SetBranchAddress("rechit_cell_u", &rechit_cell_u, &b_rechit_cell_u);
   fChain->SetBranchAddress("rechit_cell_v", &rechit_cell_v, &b_rechit_cell_v);
   fChain->SetBranchAddress("rechit_detid", &rechit_detid, &b_rechit_detid);
   fChain->SetBranchAddress("rechit_isHalf", &rechit_isHalf, &b_rechit_isHalf);
   fChain->SetBranchAddress("rechit_flags", &rechit_flags, &b_rechit_flags);
   fChain->SetBranchAddress("rechit_cluster2d", &rechit_cluster2d, &b_rechit_cluster2d);
   fChain->SetBranchAddress("rechit_radius", &rechit_radius, &b_rechit_radius);
   fChain->SetBranchAddress("cluster2d_eta", &cluster2d_eta, &b_cluster2d_eta);
   fChain->SetBranchAddress("cluster2d_phi", &cluster2d_phi, &b_cluster2d_phi);
   fChain->SetBranchAddress("cluster2d_pt", &cluster2d_pt, &b_cluster2d_pt);
   fChain->SetBranchAddress("cluster2d_energy", &cluster2d_energy, &b_cluster2d_energy);
   fChain->SetBranchAddress("cluster2d_x", &cluster2d_x, &b_cluster2d_x);
   fChain->SetBranchAddress("cluster2d_y", &cluster2d_y, &b_cluster2d_y);
   fChain->SetBranchAddress("cluster2d_z", &cluster2d_z, &b_cluster2d_z);
   fChain->SetBranchAddress("cluster2d_layer", &cluster2d_layer, &b_cluster2d_layer);
   fChain->SetBranchAddress("cluster2d_nhitCore", &cluster2d_nhitCore, &b_cluster2d_nhitCore);
   fChain->SetBranchAddress("cluster2d_nhitAll", &cluster2d_nhitAll, &b_cluster2d_nhitAll);
   fChain->SetBranchAddress("cluster2d_multicluster", &cluster2d_multicluster, &b_cluster2d_multicluster);
   fChain->SetBranchAddress("cluster2d_rechits", &cluster2d_rechits, &b_cluster2d_rechits);
   fChain->SetBranchAddress("cluster2d_rechitSeed", &cluster2d_rechitSeed, &b_cluster2d_rechitSeed);
   fChain->SetBranchAddress("multiclus_eta", &multiclus_eta, &b_multiclus_eta);
   fChain->SetBranchAddress("multiclus_phi", &multiclus_phi, &b_multiclus_phi);
   fChain->SetBranchAddress("multiclus_pt", &multiclus_pt, &b_multiclus_pt);
   fChain->SetBranchAddress("multiclus_energy", &multiclus_energy, &b_multiclus_energy);
   fChain->SetBranchAddress("multiclus_z", &multiclus_z, &b_multiclus_z);
   fChain->SetBranchAddress("multiclus_slopeX", &multiclus_slopeX, &b_multiclus_slopeX);
   fChain->SetBranchAddress("multiclus_slopeY", &multiclus_slopeY, &b_multiclus_slopeY);
   fChain->SetBranchAddress("multiclus_cluster2d", &multiclus_cluster2d, &b_multiclus_cluster2d);
   fChain->SetBranchAddress("multiclus_cl2dSeed", &multiclus_cl2dSeed, &b_multiclus_cl2dSeed);
   fChain->SetBranchAddress("multiclus_firstLay", &multiclus_firstLay, &b_multiclus_firstLay);
   fChain->SetBranchAddress("multiclus_lastLay", &multiclus_lastLay, &b_multiclus_lastLay);
   fChain->SetBranchAddress("multiclus_NLay", &multiclus_NLay, &b_multiclus_NLay);
   fChain->SetBranchAddress("simcluster_eta", &simcluster_eta, &b_simcluster_eta);
   fChain->SetBranchAddress("simcluster_phi", &simcluster_phi, &b_simcluster_phi);
   fChain->SetBranchAddress("simcluster_pt", &simcluster_pt, &b_simcluster_pt);
   fChain->SetBranchAddress("simcluster_energy", &simcluster_energy, &b_simcluster_energy);
   fChain->SetBranchAddress("simcluster_simEnergy", &simcluster_simEnergy, &b_simcluster_simEnergy);
   fChain->SetBranchAddress("simcluster_hits", &simcluster_hits, &b_simcluster_hits);
   fChain->SetBranchAddress("simcluster_hits_indices", &simcluster_hits_indices, &b_simcluster_hits_indices);
   fChain->SetBranchAddress("simcluster_fractions", &simcluster_fractions, &b_simcluster_fractions);
   fChain->SetBranchAddress("simcluster_layers", &simcluster_layers, &b_simcluster_layers);
   fChain->SetBranchAddress("simcluster_wafers_u", &simcluster_wafers_u, &b_simcluster_wafers_u);
   fChain->SetBranchAddress("simcluster_wafers_v", &simcluster_wafers_v, &b_simcluster_wafers_v);
   fChain->SetBranchAddress("simcluster_cells_u", &simcluster_cells_u, &b_simcluster_cells_u);
   fChain->SetBranchAddress("simcluster_cells_v", &simcluster_cells_v, &b_simcluster_cells_v);
   fChain->SetBranchAddress("pfcluster_eta", &pfcluster_eta, &b_pfcluster_eta);
   fChain->SetBranchAddress("pfcluster_phi", &pfcluster_phi, &b_pfcluster_phi);
   fChain->SetBranchAddress("pfcluster_pt", &pfcluster_pt, &b_pfcluster_pt);
   fChain->SetBranchAddress("pfcluster_energy", &pfcluster_energy, &b_pfcluster_energy);
   fChain->SetBranchAddress("pfcluster_correctedEnergy", &pfcluster_correctedEnergy, &b_pfcluster_correctedEnergy);
   fChain->SetBranchAddress("pfcluster_hits", &pfcluster_hits, &b_pfcluster_hits);
   fChain->SetBranchAddress("pfcluster_fractions", &pfcluster_fractions, &b_pfcluster_fractions);
   fChain->SetBranchAddress("pfclusterFromMultiCl_pos", &pfclusterFromMultiCl_pos_, &b_pfclusterFromMultiCl_pos_);
   fChain->SetBranchAddress("pfclusterFromMultiCl_pos.fCoordinates.fX", pfclusterFromMultiCl_pos_fCoordinates_fX, &b_pfclusterFromMultiCl_pos_fCoordinates_fX);
   fChain->SetBranchAddress("pfclusterFromMultiCl_pos.fCoordinates.fY", pfclusterFromMultiCl_pos_fCoordinates_fY, &b_pfclusterFromMultiCl_pos_fCoordinates_fY);
   fChain->SetBranchAddress("pfclusterFromMultiCl_pos.fCoordinates.fZ", pfclusterFromMultiCl_pos_fCoordinates_fZ, &b_pfclusterFromMultiCl_pos_fCoordinates_fZ);
   fChain->SetBranchAddress("pfclusterFromMultiCl_eta", &pfclusterFromMultiCl_eta, &b_pfclusterFromMultiCl_eta);
   fChain->SetBranchAddress("pfclusterFromMultiCl_phi", &pfclusterFromMultiCl_phi, &b_pfclusterFromMultiCl_phi);
   fChain->SetBranchAddress("pfclusterFromMultiCl_pt", &pfclusterFromMultiCl_pt, &b_pfclusterFromMultiCl_pt);
   fChain->SetBranchAddress("pfclusterFromMultiCl_energy", &pfclusterFromMultiCl_energy, &b_pfclusterFromMultiCl_energy);
   fChain->SetBranchAddress("pfclusterFromMultiCl_energyEE", &pfclusterFromMultiCl_energyEE, &b_pfclusterFromMultiCl_energyEE);
   fChain->SetBranchAddress("pfclusterFromMultiCl_energyFH", &pfclusterFromMultiCl_energyFH, &b_pfclusterFromMultiCl_energyFH);
   fChain->SetBranchAddress("pfclusterFromMultiCl_energyBH", &pfclusterFromMultiCl_energyBH, &b_pfclusterFromMultiCl_energyBH);
   fChain->SetBranchAddress("pfclusterFromMultiCl_correctedEnergy", &pfclusterFromMultiCl_correctedEnergy, &b_pfclusterFromMultiCl_correctedEnergy);
   fChain->SetBranchAddress("pfclusterFromMultiCl_hits", &pfclusterFromMultiCl_hits, &b_pfclusterFromMultiCl_hits);
   fChain->SetBranchAddress("pfclusterFromMultiCl_fractions", &pfclusterFromMultiCl_fractions, &b_pfclusterFromMultiCl_fractions);
   fChain->SetBranchAddress("pfclusterFromMultiCl_rechits", &pfclusterFromMultiCl_rechits, &b_pfclusterFromMultiCl_rechits);
   fChain->SetBranchAddress("ecalDrivenGsfele_charge", &ecalDrivenGsfele_charge, &b_ecalDrivenGsfele_charge);
   fChain->SetBranchAddress("ecalDrivenGsfele_eta", &ecalDrivenGsfele_eta, &b_ecalDrivenGsfele_eta);
   fChain->SetBranchAddress("ecalDrivenGsfele_phi", &ecalDrivenGsfele_phi, &b_ecalDrivenGsfele_phi);
   fChain->SetBranchAddress("ecalDrivenGsfele_pt", &ecalDrivenGsfele_pt, &b_ecalDrivenGsfele_pt);
   fChain->SetBranchAddress("ecalDrivenGsfele_scpos", &ecalDrivenGsfele_scpos_, &b_ecalDrivenGsfele_scpos_);
   fChain->SetBranchAddress("ecalDrivenGsfele_scpos.fCoordinates.fX", &ecalDrivenGsfele_scpos_fCoordinates_fX, &b_ecalDrivenGsfele_scpos_fCoordinates_fX);
   fChain->SetBranchAddress("ecalDrivenGsfele_scpos.fCoordinates.fY", &ecalDrivenGsfele_scpos_fCoordinates_fY, &b_ecalDrivenGsfele_scpos_fCoordinates_fY);
   fChain->SetBranchAddress("ecalDrivenGsfele_scpos.fCoordinates.fZ", &ecalDrivenGsfele_scpos_fCoordinates_fZ, &b_ecalDrivenGsfele_scpos_fCoordinates_fZ);
   fChain->SetBranchAddress("ecalDrivenGsfele_sceta", &ecalDrivenGsfele_sceta, &b_ecalDrivenGsfele_sceta);
   fChain->SetBranchAddress("ecalDrivenGsfele_scphi", &ecalDrivenGsfele_scphi, &b_ecalDrivenGsfele_scphi);
   fChain->SetBranchAddress("ecalDrivenGsfele_seedlayer", &ecalDrivenGsfele_seedlayer, &b_ecalDrivenGsfele_seedlayer);
   fChain->SetBranchAddress("ecalDrivenGsfele_seedpos", &ecalDrivenGsfele_seedpos_, &b_ecalDrivenGsfele_seedpos_);
   fChain->SetBranchAddress("ecalDrivenGsfele_seedpos.fCoordinates.fX", &ecalDrivenGsfele_seedpos_fCoordinates_fX, &b_ecalDrivenGsfele_seedpos_fCoordinates_fX);
   fChain->SetBranchAddress("ecalDrivenGsfele_seedpos.fCoordinates.fY", &ecalDrivenGsfele_seedpos_fCoordinates_fY, &b_ecalDrivenGsfele_seedpos_fCoordinates_fY);
   fChain->SetBranchAddress("ecalDrivenGsfele_seedpos.fCoordinates.fZ", &ecalDrivenGsfele_seedpos_fCoordinates_fZ, &b_ecalDrivenGsfele_seedpos_fCoordinates_fZ);
   fChain->SetBranchAddress("ecalDrivenGsfele_seedeta", &ecalDrivenGsfele_seedeta, &b_ecalDrivenGsfele_seedeta);
   fChain->SetBranchAddress("ecalDrivenGsfele_seedphi", &ecalDrivenGsfele_seedphi, &b_ecalDrivenGsfele_seedphi);
   fChain->SetBranchAddress("ecalDrivenGsfele_seedenergy", &ecalDrivenGsfele_seedenergy, &b_ecalDrivenGsfele_seedenergy);
   fChain->SetBranchAddress("ecalDrivenGsfele_energy", &ecalDrivenGsfele_energy, &b_ecalDrivenGsfele_energy);
   fChain->SetBranchAddress("ecalDrivenGsfele_energyEE", &ecalDrivenGsfele_energyEE, &b_ecalDrivenGsfele_energyEE);
   fChain->SetBranchAddress("ecalDrivenGsfele_energyFH", &ecalDrivenGsfele_energyFH, &b_ecalDrivenGsfele_energyFH);
   fChain->SetBranchAddress("ecalDrivenGsfele_energyBH", &ecalDrivenGsfele_energyBH, &b_ecalDrivenGsfele_energyBH);
   fChain->SetBranchAddress("ecalDrivenGsfele_isEB", &ecalDrivenGsfele_isEB, &b_ecalDrivenGsfele_isEB);
   fChain->SetBranchAddress("ecalDrivenGsfele_hoe", &ecalDrivenGsfele_hoe, &b_ecalDrivenGsfele_hoe);
   fChain->SetBranchAddress("ecalDrivenGsfele_numClinSC", &ecalDrivenGsfele_numClinSC, &b_ecalDrivenGsfele_numClinSC);
   fChain->SetBranchAddress("ecalDrivenGsfele_track_dxy", &ecalDrivenGsfele_track_dxy, &b_ecalDrivenGsfele_track_dxy);
   fChain->SetBranchAddress("ecalDrivenGsfele_track_dz", &ecalDrivenGsfele_track_dz, &b_ecalDrivenGsfele_track_dz);
   fChain->SetBranchAddress("ecalDrivenGsfele_track_simdxy", &ecalDrivenGsfele_track_simdxy, &b_ecalDrivenGsfele_track_simdxy);
   fChain->SetBranchAddress("ecalDrivenGsfele_track_simdz", &ecalDrivenGsfele_track_simdz, &b_ecalDrivenGsfele_track_simdz);
   fChain->SetBranchAddress("ecalDrivenGsfele_deltaEtaSuperClusterTrackAtVtx", &ecalDrivenGsfele_deltaEtaSuperClusterTrackAtVtx, &b_ecalDrivenGsfele_deltaEtaSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("ecalDrivenGsfele_deltaPhiSuperClusterTrackAtVtx", &ecalDrivenGsfele_deltaPhiSuperClusterTrackAtVtx, &b_ecalDrivenGsfele_deltaPhiSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("ecalDrivenGsfele_deltaEtaEleClusterTrackAtCalo", &ecalDrivenGsfele_deltaEtaEleClusterTrackAtCalo, &b_ecalDrivenGsfele_deltaEtaEleClusterTrackAtCalo);
   fChain->SetBranchAddress("ecalDrivenGsfele_deltaPhiEleClusterTrackAtCalo", &ecalDrivenGsfele_deltaPhiEleClusterTrackAtCalo, &b_ecalDrivenGsfele_deltaPhiEleClusterTrackAtCalo);
   fChain->SetBranchAddress("ecalDrivenGsfele_deltaEtaSeedClusterTrackAtCalo", &ecalDrivenGsfele_deltaEtaSeedClusterTrackAtCalo, &b_ecalDrivenGsfele_deltaEtaSeedClusterTrackAtCalo);
   fChain->SetBranchAddress("ecalDrivenGsfele_deltaPhiSeedClusterTrackAtCalo", &ecalDrivenGsfele_deltaPhiSeedClusterTrackAtCalo, &b_ecalDrivenGsfele_deltaPhiSeedClusterTrackAtCalo);
   fChain->SetBranchAddress("ecalDrivenGsfele_eSuperClusterOverP", &ecalDrivenGsfele_eSuperClusterOverP, &b_ecalDrivenGsfele_eSuperClusterOverP);
   fChain->SetBranchAddress("ecalDrivenGsfele_eSeedClusterOverP", &ecalDrivenGsfele_eSeedClusterOverP, &b_ecalDrivenGsfele_eSeedClusterOverP);
   fChain->SetBranchAddress("ecalDrivenGsfele_eSeedClusterOverPout", &ecalDrivenGsfele_eSeedClusterOverPout, &b_ecalDrivenGsfele_eSeedClusterOverPout);
   fChain->SetBranchAddress("ecalDrivenGsfele_eEleClusterOverPout", &ecalDrivenGsfele_eEleClusterOverPout, &b_ecalDrivenGsfele_eEleClusterOverPout);
   fChain->SetBranchAddress("ecalDrivenGsfele_pfClusterIndex", &ecalDrivenGsfele_pfClusterIndex, &b_ecalDrivenGsfele_pfClusterIndex);
   fChain->SetBranchAddress("calopart_eta", &calopart_eta, &b_calopart_eta);
   fChain->SetBranchAddress("calopart_phi", &calopart_phi, &b_calopart_phi);
   fChain->SetBranchAddress("calopart_pt", &calopart_pt, &b_calopart_pt);
   fChain->SetBranchAddress("calopart_energy", &calopart_energy, &b_calopart_energy);
   fChain->SetBranchAddress("calopart_simEnergy", &calopart_simEnergy, &b_calopart_simEnergy);
   fChain->SetBranchAddress("calopart_simClusterIndex", &calopart_simClusterIndex, &b_calopart_simClusterIndex);
   fChain->SetBranchAddress("track_eta", &track_eta, &b_track_eta);
   fChain->SetBranchAddress("track_phi", &track_phi, &b_track_phi);
   fChain->SetBranchAddress("track_pt", &track_pt, &b_track_pt);
   fChain->SetBranchAddress("track_energy", &track_energy, &b_track_energy);
   fChain->SetBranchAddress("track_charge", &track_charge, &b_track_charge);
   fChain->SetBranchAddress("track_posx", &track_posx, &b_track_posx);
   fChain->SetBranchAddress("track_posy", &track_posy, &b_track_posy);
   fChain->SetBranchAddress("track_posz", &track_posz, &b_track_posz);
   fChain->SetBranchAddress("pfcandidate_eta", &pfcandidate_eta, &b_pfcandidate_eta);
   fChain->SetBranchAddress("pfcandidate_phi", &pfcandidate_phi, &b_pfcandidate_phi);
   fChain->SetBranchAddress("pfcandidate_pt", &pfcandidate_pt, &b_pfcandidate_pt);
   fChain->SetBranchAddress("pfcandidate_energy", &pfcandidate_energy, &b_pfcandidate_energy);
   fChain->SetBranchAddress("pfcandidate_pdgid", &pfcandidate_pdgid, &b_pfcandidate_pdgid);
   fChain->SetBranchAddress("gunparticle_id", &gunparticle_id, &b_gunparticle_id);
   fChain->SetBranchAddress("gunparticle_energy", &gunparticle_energy, &b_gunparticle_energy);
   fChain->SetBranchAddress("gunparticle_pt", &gunparticle_pt, &b_gunparticle_pt);
   fChain->SetBranchAddress("gunparticle_eta", &gunparticle_eta, &b_gunparticle_eta);
   fChain->SetBranchAddress("gunparticle_phi", &gunparticle_phi, &b_gunparticle_phi);
   Notify();
}

Bool_t analysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void analysis::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t analysis::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}

Double_t analysis::deltaPhi(Double_t phi1, Double_t phi2)
{
  Double_t pi = 3.1415927;
  Double_t dphi = fabs(phi1 - phi2);
  if(dphi >= pi) dphi = 2. * pi - dphi; 
  return dphi;
}

Double_t analysis::deltaEta(Double_t eta1, Double_t eta2)
{
  Double_t deta = fabs(eta1 - eta2);
  return deta;
}

Double_t analysis::deltaR(Double_t eta1, Double_t phi1, Double_t eta2, Double_t phi2)
{
  Double_t deta = deltaEta(eta1, eta2);
  Double_t dphi = deltaPhi(phi1, phi2);
  Double_t dr = sqrt(deta*deta + dphi*dphi);
  return dr;
}

#endif // #ifdef analysis_cxx
