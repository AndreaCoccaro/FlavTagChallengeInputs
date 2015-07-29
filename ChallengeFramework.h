//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jul  7 11:10:51 2015 by ROOT version 6.02/08
// from TTree bTag_AntiKt4EMTopoJets/bTagAntiKt4EMTopoJets
// found on file: group.perf-flavtag.5747336.BTAGSTREAM._000001.root
//////////////////////////////////////////////////////////

#ifndef ChallengeFramework_h
#define ChallengeFramework_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TSelector.h>

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Header file for the classes stored in the TTree if any.
#include "vector"

class ChallengeFramework : public TSelector {
public :

  TString inputFile;
  TString outputString;
  bool firstEvent;
  int n_events;

  TFile* output;
  TTree* tree;

  //* MC truth *//
  int m_jet_truthflav;

  //* MV2c20 inputs - IP taggers *//
  float m_jet_ip2d_pb;
  float m_jet_ip2d_pc;
  float m_jet_ip2d_pu;
  float m_jet_ip3d_pb;
  float m_jet_ip3d_pc;
  float m_jet_ip3d_pu;

  //* MV2c20 inputs - SV reco *//
  int m_jet_sv1_ntrkj;
  int m_jet_sv1_ntrkv;
  int m_jet_sv1_n2t;
  int m_jet_sv1_Nvtx;
  float m_jet_sv1_m;
  float m_jet_sv1_efc;
  float m_jet_sv1_normdist;
  float m_jet_sv1_sig3d;

  //* MV2c20 inputs - JF reco *//
  int m_jet_jf_n2t;
  int m_jet_jf_nvtx;
  int m_jet_jf_nvtx1t;
  float m_jet_jf_m;
  float m_jet_jf_efc;
  float m_jet_jf_deta;
  float m_jet_jf_dphi;
  float m_jet_jf_ntrkAtVx;
  float m_jet_jf_sig3d;

  float m_jet_pt;
  float m_jet_eta;
  float m_jet_phi;

  //* MV2 outputs
  float m_jet_mv2c20;

  // track info
  int m_jet_ip3d_ntrk;

  std::vector<float> *m_jet_trk_pt;
  std::vector<float> *m_jet_trk_phi;
  std::vector<float> *m_jet_trk_eta;
  std::vector<float> *m_jet_trk_d0;
  std::vector<float> *m_jet_trk_z0;
  std::vector<float> *m_jet_trk_ip3d_d0sig;
  std::vector<float> *m_jet_trk_ip3d_z0sig;

  std::vector<float> *m_jet_trk_chi2;

  std::vector<int> *m_jet_trk_nInnHits;
  std::vector<int> *m_jet_trk_nNextToInnHits;
  std::vector<int> *m_jet_trk_nBLHits;
  std::vector<int> *m_jet_trk_nsharedBLHits;
  std::vector<int> *m_jet_trk_nsplitBLHits;
  std::vector<int> *m_jet_trk_nPixHits;
  std::vector<int> *m_jet_trk_nsharedPixHits;
  std::vector<int> *m_jet_trk_nsplitPixHits;
  std::vector<int> *m_jet_trk_nSCTHits;
  std::vector<int> *m_jet_trk_nsharedSCTHits;
  std::vector<int> *m_jet_trk_expectBLayerHit;

  void clear();

  TTree          *fChain;   //!pointer to the analyzed TTree or TChain

  // Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           runnb;
   Int_t           eventnb;
   Int_t           mcchan;
   Double_t        mcwg;
   Int_t           lbn;
   Int_t           coreFlag;
   Int_t           larError;
   Int_t           tileError;
   Int_t           nPV;
   Double_t        avgmu;
   Double_t        PVx;
   Double_t        PVy;
   Double_t        PVz;
   Double_t        truth_PVx;
   Double_t        truth_PVy;
   Double_t        truth_PVz;
   Float_t         truth_LeadJet_pt;
   Int_t           njets;
   Int_t           nbjets;
   Int_t           nbjets_q;
   Int_t           nbjets_HadI;
   Int_t           nbjets_HadF;
   vector<float>   *jet_pt;
   vector<float>   *jet_eta;
   vector<float>   *jet_phi;
   vector<float>   *jet_pt_orig;
   vector<float>   *jet_eta_orig;
   vector<float>   *jet_phi_orig;
   vector<float>   *jet_E_orig;
   vector<float>   *jet_sumtrkS_pt;
   vector<float>   *jet_sumtrkV_pt;
   vector<float>   *jet_sumtrkV_eta;
   vector<int>     *jet_sumtrk_ntrk;
   vector<float>   *jet_E;
   vector<float>   *jet_m;
   vector<int>     *jet_truthflav;
   vector<int>     *jet_nBHadr;
   vector<int>     *jet_GhostL_q;
   vector<int>     *jet_GhostL_HadI;
   vector<int>     *jet_GhostL_HadF;
   vector<int>     *jet_LabDr_HadF;
   vector<int>     *jet_aliveAfterOR;
   vector<int>     *jet_truthMatch;
   vector<int>     *jet_isPU;
   vector<int>     *jet_isBadMedium;
   vector<float>   *jet_truthPt;
   vector<float>   *jet_dRiso;
   vector<float>   *jet_JVT;
   vector<float>   *jet_JVF;
   vector<float>   *jet_dRminToB;
   vector<float>   *jet_dRminToC;
   vector<float>   *jet_dRminToT;
   vector<float>   *jet_ip2d_pb;
   vector<float>   *jet_ip2d_pc;
   vector<float>   *jet_ip2d_pu;
   vector<float>   *jet_ip2d_llr;
   vector<float>   *jet_ip3d_pb;
   vector<float>   *jet_ip3d_pc;
   vector<float>   *jet_ip3d_pu;
   vector<float>   *jet_ip3d_llr;
   vector<float>   *jet_sv0_sig3d;
   vector<int>     *jet_sv0_ntrkj;
   vector<int>     *jet_sv0_ntrkv;
   vector<int>     *jet_sv0_n2t;
   vector<float>   *jet_sv0_m;
   vector<float>   *jet_sv0_efc;
   vector<float>   *jet_sv0_normdist;
   vector<int>     *jet_sv0_Nvtx;
   vector<vector<float> > *jet_sv0_vtx_x;
   vector<vector<float> > *jet_sv0_vtx_y;
   vector<vector<float> > *jet_sv0_vtx_z;
   vector<int>     *jet_sv1_ntrkj;
   vector<int>     *jet_sv1_ntrkv;
   vector<int>     *jet_sv1_n2t;
   vector<float>   *jet_sv1_m;
   vector<float>   *jet_sv1_efc;
   vector<float>   *jet_sv1_normdist;
   vector<float>   *jet_sv1_pb;
   vector<float>   *jet_sv1_pc;
   vector<float>   *jet_sv1_pu;
   vector<float>   *jet_sv1_llr;
   vector<int>     *jet_sv1_Nvtx;
   vector<float>   *jet_sv1_sig3d;
   vector<vector<float> > *jet_sv1_vtx_x;
   vector<vector<float> > *jet_sv1_vtx_y;
   vector<vector<float> > *jet_sv1_vtx_z;
   Float_t         PV_jf_x;
   Float_t         PV_jf_y;
   Float_t         PV_jf_z;
   vector<float>   *jet_jf_pb;
   vector<float>   *jet_jf_pc;
   vector<float>   *jet_jf_pu;
   vector<float>   *jet_jf_llr;
   vector<float>   *jet_jf_m;
   vector<float>   *jet_jf_efc;
   vector<float>   *jet_jf_deta;
   vector<float>   *jet_jf_dphi;
   vector<float>   *jet_jf_ntrkAtVx;
   vector<int>     *jet_jf_nvtx;
   vector<float>   *jet_jf_sig3d;
   vector<int>     *jet_jf_nvtx1t;
   vector<int>     *jet_jf_n2t;
   vector<int>     *jet_jf_VTXsize;
   vector<vector<float> > *jet_jf_vtx_chi2;
   vector<vector<float> > *jet_jf_vtx_ndf;
   vector<vector<int> > *jet_jf_vtx_ntrk;
   vector<vector<float> > *jet_jf_vtx_L3D;
   vector<vector<float> > *jet_jf_vtx_sig3D;
   vector<float>   *jet_jf_phi;
   vector<float>   *jet_jf_theta;
   vector<float>   *jet_jfcombnn_pb;
   vector<float>   *jet_jfcombnn_pc;
   vector<float>   *jet_jfcombnn_pu;
   vector<float>   *jet_jfcombnn_llr;
   vector<double>  *jet_sv1ip3d;
   vector<double>  *jet_mv1;
   vector<double>  *jet_mv1c;
   vector<double>  *jet_mv2c00;
   vector<double>  *jet_mv2c10;
   vector<double>  *jet_mv2c20;
   vector<double>  *jet_mv2c100;
   vector<double>  *jet_mv2m_pu;
   vector<double>  *jet_mv2m_pc;
   vector<double>  *jet_mv2m_pb;
   vector<double>  *jet_mvb;
   vector<double>  *jet_multisvbb1;
   vector<double>  *jet_multisvbb2;
   vector<int>     *jet_msv_N2Tpair;
   vector<float>   *jet_msv_energyTrkInJet;
   vector<int>     *jet_msv_nvsec;
   vector<float>   *jet_msv_normdist;
   vector<vector<float> > *jet_msv_vtx_mass;
   vector<vector<float> > *jet_msv_vtx_efrc;
   vector<vector<float> > *jet_msv_vtx_ntrk;
   vector<vector<float> > *jet_msv_vtx_pt;
   vector<vector<float> > *jet_msv_vtx_eta;
   vector<vector<float> > *jet_msv_vtx_phi;
   vector<vector<float> > *jet_msv_vtx_dls;
   vector<vector<float> > *jet_msv_vtx_x;
   vector<vector<float> > *jet_msv_vtx_y;
   vector<vector<float> > *jet_msv_vtx_z;
   vector<vector<float> > *jet_msv_vtx_chi;
   vector<vector<float> > *jet_msv_vtx_ndf;
   vector<float>   *bH_pt;
   vector<float>   *bH_eta;
   vector<float>   *bH_phi;
   vector<float>   *bH_Lxy;
   vector<float>   *bH_x;
   vector<float>   *bH_y;
   vector<float>   *bH_z;
   vector<float>   *bH_dRjet;
   vector<int>     *bH_nBtracks;
   vector<int>     *bH_nCtracks;
   vector<float>   *cH_pt;
   vector<float>   *cH_eta;
   vector<float>   *cH_phi;
   vector<float>   *cH_Lxy;
   vector<float>   *cH_x;
   vector<float>   *cH_y;
   vector<float>   *cH_z;
   vector<float>   *cH_dRjet;
   vector<int>     *cH_nCtracks;
   vector<int>     *jet_btag_ntrk;
   vector<vector<float> > *jet_trk_pt;
   vector<vector<float> > *jet_trk_eta;
   vector<vector<float> > *jet_trk_theta;
   vector<vector<float> > *jet_trk_phi;
   vector<vector<float> > *jet_trk_chi2;
   vector<vector<float> > *jet_trk_ndf;
   vector<vector<int> > *jet_trk_algo;
   vector<vector<int> > *jet_trk_orig;
   vector<vector<float> > *jet_trk_vtx_X;
   vector<vector<float> > *jet_trk_vtx_Y;
   vector<vector<int> > *jet_trk_nInnHits;
   vector<vector<int> > *jet_trk_nNextToInnHits;
   vector<vector<int> > *jet_trk_nBLHits;
   vector<vector<int> > *jet_trk_nsharedBLHits;
   vector<vector<int> > *jet_trk_nsplitBLHits;
   vector<vector<int> > *jet_trk_nPixHits;
   vector<vector<int> > *jet_trk_nsharedPixHits;
   vector<vector<int> > *jet_trk_nsplitPixHits;
   vector<vector<int> > *jet_trk_nSCTHits;
   vector<vector<int> > *jet_trk_nsharedSCTHits;
   vector<vector<int> > *jet_trk_expectBLayerHit;
   vector<vector<float> > *jet_trk_d0;
   vector<vector<float> > *jet_trk_z0;
   vector<vector<float> > *jet_trk_d0_truth;
   vector<vector<float> > *jet_trk_z0_truth;
   vector<vector<int> > *jet_trk_ip3d_grade;
   vector<vector<float> > *jet_trk_ip3d_d0;
   vector<vector<float> > *jet_trk_ip3d_z0;
   vector<vector<float> > *jet_trk_ip3d_d0sig;
   vector<vector<float> > *jet_trk_ip3d_z0sig;
   vector<vector<float> > *jet_trk_ip2d_llr;
   vector<vector<float> > *jet_trk_ip3d_llr;
   vector<vector<int> > *jet_trk_jf_Vertex;
   vector<int>     *jet_sv1_ntrk;
   vector<int>     *jet_ip3d_ntrk;
   vector<int>     *jet_jf_ntrk;
   Bool_t          L1_MU4;
   Bool_t          L1_MU6;
   Bool_t          L1_MU10;
   Bool_t          L1_MU11;
   Bool_t          L1_MU15;
   Bool_t          L1_MU20;
   Bool_t          L1_MU4_J12;
   Bool_t          L1_MU6_J20;
   Bool_t          L1_MU6_J40;
   Bool_t          L1_MU6_J75;
   Bool_t          L1_J12;
   Bool_t          L1_J15;
   Bool_t          L1_J20;
   Bool_t          L1_J25;
   Bool_t          L1_J30;
   Bool_t          L1_J40;
   Bool_t          L1_J50;
   Bool_t          L1_J75;
   Bool_t          L1_J85;
   Bool_t          L1_J100;
   Bool_t          L1_J120;
   Bool_t          L1_MBTS_1_1;
   Bool_t          L1_RD0_FILLED;

   // List of branches
   TBranch        *b_runnb;   //!
   TBranch        *b_eventnb;   //!
   TBranch        *b_mcchan;   //!
   TBranch        *b_mcwg;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_coreFlag;   //!
   TBranch        *b_larError;   //!
   TBranch        *b_tileError;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_avgmu;   //!
   TBranch        *b_PVx;   //!
   TBranch        *b_PVy;   //!
   TBranch        *b_PVz;   //!
   TBranch        *b_truth_PVx;   //!
   TBranch        *b_truth_PVy;   //!
   TBranch        *b_truth_PVz;   //!
   TBranch        *b_truth_LeadJet_pt;   //!
   TBranch        *b_njets;   //!
   TBranch        *b_nbjets;   //!
   TBranch        *b_nbjets_q;   //!
   TBranch        *b_nbjets_HadI;   //!
   TBranch        *b_nbjets_HadF;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_jet_pt_orig;   //!
   TBranch        *b_jet_eta_orig;   //!
   TBranch        *b_jet_phi_orig;   //!
   TBranch        *b_jet_E_orig;   //!
   TBranch        *b_jet_sumtrkS_pt;   //!
   TBranch        *b_jet_sumtrkV_pt;   //!
   TBranch        *b_jet_sumtrkV_eta;   //!
   TBranch        *b_jet_sumtrk_ntrk;   //!
   TBranch        *b_jet_E;   //!
   TBranch        *b_jet_m;   //!
   TBranch        *b_jet_truthflav;   //!
   TBranch        *b_jet_nBHadr;   //!
   TBranch        *b_jet_GhostL_q;   //!
   TBranch        *b_jet_GhostL_HadI;   //!
   TBranch        *b_jet_GhostL_HadF;   //!
   TBranch        *b_jet_LabDr_HadF;   //!
   TBranch        *b_jet_aliveAfterOR;   //!
   TBranch        *b_jet_truthMatch;   //!
   TBranch        *b_jet_isPU;   //!
   TBranch        *b_jet_isBadMedium;   //!
   TBranch        *b_jet_truthPt;   //!
   TBranch        *b_jet_dRiso;   //!
   TBranch        *b_jet_JVT;   //!
   TBranch        *b_jet_JVF;   //!
   TBranch        *b_jet_dRminToB;   //!
   TBranch        *b_jet_dRminToC;   //!
   TBranch        *b_jet_dRminToT;   //!
   TBranch        *b_jet_ip2d_pb;   //!
   TBranch        *b_jet_ip2d_pc;   //!
   TBranch        *b_jet_ip2d_pu;   //!
   TBranch        *b_jet_ip2d_llr;   //!
   TBranch        *b_jet_ip3d_pb;   //!
   TBranch        *b_jet_ip3d_pc;   //!
   TBranch        *b_jet_ip3d_pu;   //!
   TBranch        *b_jet_ip3d_llr;   //!
   TBranch        *b_jet_sv0_sig3d;   //!
   TBranch        *b_jet_sv0_ntrkj;   //!
   TBranch        *b_jet_sv0_ntrkv;   //!
   TBranch        *b_jet_sv0_n2t;   //!
   TBranch        *b_jet_sv0_m;   //!
   TBranch        *b_jet_sv0_efc;   //!
   TBranch        *b_jet_sv0_normdist;   //!
   TBranch        *b_jet_sv0_Nvtx;   //!
   TBranch        *b_jet_sv0_vtx_x;   //!
   TBranch        *b_jet_sv0_vtx_y;   //!
   TBranch        *b_jet_sv0_vtx_z;   //!
   TBranch        *b_jet_sv1_ntrkj;   //!
   TBranch        *b_jet_sv1_ntrkv;   //!
   TBranch        *b_jet_sv1_n2t;   //!
   TBranch        *b_jet_sv1_m;   //!
   TBranch        *b_jet_sv1_efc;   //!
   TBranch        *b_jet_sv1_normdist;   //!
   TBranch        *b_jet_sv1_pb;   //!
   TBranch        *b_jet_sv1_pc;   //!
   TBranch        *b_jet_sv1_pu;   //!
   TBranch        *b_jet_sv1_llr;   //!
   TBranch        *b_jet_sv1_Nvtx;   //!
   TBranch        *b_jet_sv1_sig3d;   //!
   TBranch        *b_jet_sv1_vtx_x;   //!
   TBranch        *b_jet_sv1_vtx_y;   //!
   TBranch        *b_jet_sv1_vtx_z;   //!
   TBranch        *b_PV_jf_x;   //!
   TBranch        *b_PV_jf_y;   //!
   TBranch        *b_PV_jf_z;   //!
   TBranch        *b_jet_jf_pb;   //!
   TBranch        *b_jet_jf_pc;   //!
   TBranch        *b_jet_jf_pu;   //!
   TBranch        *b_jet_jf_llr;   //!
   TBranch        *b_jet_jf_m;   //!
   TBranch        *b_jet_jf_efc;   //!
   TBranch        *b_jet_jf_deta;   //!
   TBranch        *b_jet_jf_dphi;   //!
   TBranch        *b_jet_jf_ntrkAtVx;   //!
   TBranch        *b_jet_jf_nvtx;   //!
   TBranch        *b_jet_jf_sig3d;   //!
   TBranch        *b_jet_jf_nvtx1t;   //!
   TBranch        *b_jet_jf_n2t;   //!
   TBranch        *b_jet_jf_VTXsize;   //!
   TBranch        *b_jet_jf_vtx_chi2;   //!
   TBranch        *b_jet_jf_vtx_ndf;   //!
   TBranch        *b_jet_jf_vtx_ntrk;   //!
   TBranch        *b_jet_jf_vtx_L3D;   //!
   TBranch        *b_jet_jf_vtx_sig3D;   //!
   TBranch        *b_jet_jf_phi;   //!
   TBranch        *b_jet_jf_theta;   //!
   TBranch        *b_jet_jfcombnn_pb;   //!
   TBranch        *b_jet_jfcombnn_pc;   //!
   TBranch        *b_jet_jfcombnn_pu;   //!
   TBranch        *b_jet_jfcombnn_llr;   //!
   TBranch        *b_jet_sv1ip3d;   //!
   TBranch        *b_jet_mv1;   //!
   TBranch        *b_jet_mv1c;   //!
   TBranch        *b_jet_mv2c00;   //!
   TBranch        *b_jet_mv2c10;   //!
   TBranch        *b_jet_mv2c20;   //!
   TBranch        *b_jet_mv2c100;   //!
   TBranch        *b_jet_mv2m_pu;   //!
   TBranch        *b_jet_mv2m_pc;   //!
   TBranch        *b_jet_mv2m_pb;   //!
   TBranch        *b_jet_mvb;   //!
   TBranch        *b_jet_multisvbb1;   //!
   TBranch        *b_jet_multisvbb2;   //!
   TBranch        *b_jet_msv_N2Tpair;   //!
   TBranch        *b_jet_msv_energyTrkInJet;   //!
   TBranch        *b_jet_msv_nvsec;   //!
   TBranch        *b_jet_msv_normdist;   //!
   TBranch        *b_jet_msv_vtx_mass;   //!
   TBranch        *b_jet_msv_vtx_efrc;   //!
   TBranch        *b_jet_msv_vtx_ntrk;   //!
   TBranch        *b_jet_msv_vtx_pt;   //!
   TBranch        *b_jet_msv_vtx_eta;   //!
   TBranch        *b_jet_msv_vtx_phi;   //!
   TBranch        *b_jet_msv_vtx_dls;   //!
   TBranch        *b_jet_msv_vtx_x;   //!
   TBranch        *b_jet_msv_vtx_y;   //!
   TBranch        *b_jet_msv_vtx_z;   //!
   TBranch        *b_jet_msv_vtx_chi;   //!
   TBranch        *b_jet_msv_vtx_ndf;   //!
   TBranch        *b_bH_pt;   //!
   TBranch        *b_bH_eta;   //!
   TBranch        *b_bH_phi;   //!
   TBranch        *b_bH_Lxy;   //!
   TBranch        *b_bH_x;   //!
   TBranch        *b_bH_y;   //!
   TBranch        *b_bH_z;   //!
   TBranch        *b_bH_dRjet;   //!
   TBranch        *b_bH_nBtracks;   //!
   TBranch        *b_bH_nCtracks;   //!
   TBranch        *b_cH_pt;   //!
   TBranch        *b_cH_eta;   //!
   TBranch        *b_cH_phi;   //!
   TBranch        *b_cH_Lxy;   //!
   TBranch        *b_cH_x;   //!
   TBranch        *b_cH_y;   //!
   TBranch        *b_cH_z;   //!
   TBranch        *b_cH_dRjet;   //!
   TBranch        *b_cH_nCtracks;   //!
   TBranch        *b_jet_btag_ntrk;   //!
   TBranch        *b_jet_trk_pt;   //!
   TBranch        *b_jet_trk_eta;   //!
   TBranch        *b_jet_trk_theta;   //!
   TBranch        *b_jet_trk_phi;   //!
   TBranch        *b_jet_trk_chi2;   //!
   TBranch        *b_jet_trk_ndf;   //!
   TBranch        *b_jet_trk_algo;   //!
   TBranch        *b_jet_trk_orig;   //!
   TBranch        *b_jet_trk_vtx_X;   //!
   TBranch        *b_jet_trk_vtx_Y;   //!
   TBranch        *b_jet_trk_nInnHits;   //!
   TBranch        *b_jet_trk_nNextToInnHits;   //!
   TBranch        *b_jet_trk_nBLHits;   //!
   TBranch        *b_jet_trk_nsharedBLHits;   //!
   TBranch        *b_jet_trk_nsplitBLHits;   //!
   TBranch        *b_jet_trk_nPixHits;   //!
   TBranch        *b_jet_trk_nsharedPixHits;   //!
   TBranch        *b_jet_trk_nsplitPixHits;   //!
   TBranch        *b_jet_trk_nSCTHits;   //!
   TBranch        *b_jet_trk_nsharedSCTHits;   //!
   TBranch        *b_jet_trk_expectBLayerHit;   //!
   TBranch        *b_jet_trk_d0;   //!
   TBranch        *b_jet_trk_z0;   //!
   TBranch        *b_jet_trk_d0_truth;   //!
   TBranch        *b_jet_trk_z0_truth;   //!
   TBranch        *b_jet_trk_ip3d_grade;   //!
   TBranch        *b_jet_trk_ip3d_d0;   //!
   TBranch        *b_jet_trk_ip3d_z0;   //!
   TBranch        *b_jet_trk_ip3d_d0sig;   //!
   TBranch        *b_jet_trk_ip3d_z0sig;   //!
   TBranch        *b_jet_trk_ip2d_llr;   //!
   TBranch        *b_jet_trk_ip3d_llr;   //!
   TBranch        *b_jet_trk_jf_Vertex;   //!
   TBranch        *b_jet_sv1_ntrk;   //!
   TBranch        *b_jet_ip3d_ntrk;   //!
   TBranch        *b_jet_jf_ntrk;   //!
   TBranch        *b_L1_MU4;   //!
   TBranch        *b_L1_MU6;   //!
   TBranch        *b_L1_MU10;   //!
   TBranch        *b_L1_MU11;   //!
   TBranch        *b_L1_MU15;   //!
   TBranch        *b_L1_MU20;   //!
   TBranch        *b_L1_MU4_J12;   //!
   TBranch        *b_L1_MU6_J20;   //!
   TBranch        *b_L1_MU6_J40;   //!
   TBranch        *b_L1_MU6_J75;   //!
   TBranch        *b_L1_J12;   //!
   TBranch        *b_L1_J15;   //!
   TBranch        *b_L1_J20;   //!
   TBranch        *b_L1_J25;   //!
   TBranch        *b_L1_J30;   //!
   TBranch        *b_L1_J40;   //!
   TBranch        *b_L1_J50;   //!
   TBranch        *b_L1_J75;   //!
   TBranch        *b_L1_J85;   //!
   TBranch        *b_L1_J100;   //!
   TBranch        *b_L1_J120;   //!
   TBranch        *b_L1_MBTS_1_1;   //!
   TBranch        *b_L1_RD0_FILLED;   //!

   ChallengeFramework(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~ChallengeFramework() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   virtual TString GetFileName() { return fChain->GetCurrentFile()->GetName(); }

   ClassDef(ChallengeFramework,0);
};

#endif

#ifdef ChallengeFramework_cxx
void ChallengeFramework::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   jet_pt = 0;
   jet_eta = 0;
   jet_phi = 0;
   jet_pt_orig = 0;
   jet_eta_orig = 0;
   jet_phi_orig = 0;
   jet_E_orig = 0;
   jet_sumtrkS_pt = 0;
   jet_sumtrkV_pt = 0;
   jet_sumtrkV_eta = 0;
   jet_sumtrk_ntrk = 0;
   jet_E = 0;
   jet_m = 0;
   jet_truthflav = 0;
   jet_nBHadr = 0;
   jet_GhostL_q = 0;
   jet_GhostL_HadI = 0;
   jet_GhostL_HadF = 0;
   jet_LabDr_HadF = 0;
   jet_aliveAfterOR = 0;
   jet_truthMatch = 0;
   jet_isPU = 0;
   jet_isBadMedium = 0;
   jet_truthPt = 0;
   jet_dRiso = 0;
   jet_JVT = 0;
   jet_JVF = 0;
   jet_dRminToB = 0;
   jet_dRminToC = 0;
   jet_dRminToT = 0;
   jet_ip2d_pb = 0;
   jet_ip2d_pc = 0;
   jet_ip2d_pu = 0;
   jet_ip2d_llr = 0;
   jet_ip3d_pb = 0;
   jet_ip3d_pc = 0;
   jet_ip3d_pu = 0;
   jet_ip3d_llr = 0;
   jet_sv0_sig3d = 0;
   jet_sv0_ntrkj = 0;
   jet_sv0_ntrkv = 0;
   jet_sv0_n2t = 0;
   jet_sv0_m = 0;
   jet_sv0_efc = 0;
   jet_sv0_normdist = 0;
   jet_sv0_Nvtx = 0;
   jet_sv0_vtx_x = 0;
   jet_sv0_vtx_y = 0;
   jet_sv0_vtx_z = 0;
   jet_sv1_ntrkj = 0;
   jet_sv1_ntrkv = 0;
   jet_sv1_n2t = 0;
   jet_sv1_m = 0;
   jet_sv1_efc = 0;
   jet_sv1_normdist = 0;
   jet_sv1_pb = 0;
   jet_sv1_pc = 0;
   jet_sv1_pu = 0;
   jet_sv1_llr = 0;
   jet_sv1_Nvtx = 0;
   jet_sv1_sig3d = 0;
   jet_sv1_vtx_x = 0;
   jet_sv1_vtx_y = 0;
   jet_sv1_vtx_z = 0;
   jet_jf_pb = 0;
   jet_jf_pc = 0;
   jet_jf_pu = 0;
   jet_jf_llr = 0;
   jet_jf_m = 0;
   jet_jf_efc = 0;
   jet_jf_deta = 0;
   jet_jf_dphi = 0;
   jet_jf_ntrkAtVx = 0;
   jet_jf_nvtx = 0;
   jet_jf_sig3d = 0;
   jet_jf_nvtx1t = 0;
   jet_jf_n2t = 0;
   jet_jf_VTXsize = 0;
   jet_jf_vtx_chi2 = 0;
   jet_jf_vtx_ndf = 0;
   jet_jf_vtx_ntrk = 0;
   jet_jf_vtx_L3D = 0;
   jet_jf_vtx_sig3D = 0;
   jet_jf_phi = 0;
   jet_jf_theta = 0;
   jet_jfcombnn_pb = 0;
   jet_jfcombnn_pc = 0;
   jet_jfcombnn_pu = 0;
   jet_jfcombnn_llr = 0;
   jet_sv1ip3d = 0;
   jet_mv1 = 0;
   jet_mv1c = 0;
   jet_mv2c00 = 0;
   jet_mv2c10 = 0;
   jet_mv2c20 = 0;
   jet_mv2c100 = 0;
   jet_mv2m_pu = 0;
   jet_mv2m_pc = 0;
   jet_mv2m_pb = 0;
   jet_mvb = 0;
   jet_multisvbb1 = 0;
   jet_multisvbb2 = 0;
   jet_msv_N2Tpair = 0;
   jet_msv_energyTrkInJet = 0;
   jet_msv_nvsec = 0;
   jet_msv_normdist = 0;
   jet_msv_vtx_mass = 0;
   jet_msv_vtx_efrc = 0;
   jet_msv_vtx_ntrk = 0;
   jet_msv_vtx_pt = 0;
   jet_msv_vtx_eta = 0;
   jet_msv_vtx_phi = 0;
   jet_msv_vtx_dls = 0;
   jet_msv_vtx_x = 0;
   jet_msv_vtx_y = 0;
   jet_msv_vtx_z = 0;
   jet_msv_vtx_chi = 0;
   jet_msv_vtx_ndf = 0;
   bH_pt = 0;
   bH_eta = 0;
   bH_phi = 0;
   bH_Lxy = 0;
   bH_x = 0;
   bH_y = 0;
   bH_z = 0;
   bH_dRjet = 0;
   bH_nBtracks = 0;
   bH_nCtracks = 0;
   cH_pt = 0;
   cH_eta = 0;
   cH_phi = 0;
   cH_Lxy = 0;
   cH_x = 0;
   cH_y = 0;
   cH_z = 0;
   cH_dRjet = 0;
   cH_nCtracks = 0;
   jet_btag_ntrk = 0;
   jet_trk_pt = 0;
   jet_trk_eta = 0;
   jet_trk_theta = 0;
   jet_trk_phi = 0;
   jet_trk_chi2 = 0;
   jet_trk_ndf = 0;
   jet_trk_algo = 0;
   jet_trk_orig = 0;
   jet_trk_vtx_X = 0;
   jet_trk_vtx_Y = 0;
   jet_trk_nInnHits = 0;
   jet_trk_nNextToInnHits = 0;
   jet_trk_nBLHits = 0;
   jet_trk_nsharedBLHits = 0;
   jet_trk_nsplitBLHits = 0;
   jet_trk_nPixHits = 0;
   jet_trk_nsharedPixHits = 0;
   jet_trk_nsplitPixHits = 0;
   jet_trk_nSCTHits = 0;
   jet_trk_nsharedSCTHits = 0;
   jet_trk_expectBLayerHit = 0;
   jet_trk_d0 = 0;
   jet_trk_z0 = 0;
   jet_trk_d0_truth = 0;
   jet_trk_z0_truth = 0;
   jet_trk_ip3d_grade = 0;
   jet_trk_ip3d_d0 = 0;
   jet_trk_ip3d_z0 = 0;
   jet_trk_ip3d_d0sig = 0;
   jet_trk_ip3d_z0sig = 0;
   jet_trk_ip2d_llr = 0;
   jet_trk_ip3d_llr = 0;
   jet_trk_jf_Vertex = 0;
   jet_sv1_ntrk = 0;
   jet_ip3d_ntrk = 0;
   jet_jf_ntrk = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runnb", &runnb, &b_runnb);
   fChain->SetBranchAddress("eventnb", &eventnb, &b_eventnb);
   fChain->SetBranchAddress("mcchan", &mcchan, &b_mcchan);
   fChain->SetBranchAddress("mcwg", &mcwg, &b_mcwg);
   fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
   fChain->SetBranchAddress("coreFlag", &coreFlag, &b_coreFlag);
   fChain->SetBranchAddress("larError", &larError, &b_larError);
   fChain->SetBranchAddress("tileError", &tileError, &b_tileError);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("avgmu", &avgmu, &b_avgmu);
   fChain->SetBranchAddress("PVx", &PVx, &b_PVx);
   fChain->SetBranchAddress("PVy", &PVy, &b_PVy);
   fChain->SetBranchAddress("PVz", &PVz, &b_PVz);
   fChain->SetBranchAddress("truth_PVx", &truth_PVx, &b_truth_PVx);
   fChain->SetBranchAddress("truth_PVy", &truth_PVy, &b_truth_PVy);
   fChain->SetBranchAddress("truth_PVz", &truth_PVz, &b_truth_PVz);
   fChain->SetBranchAddress("truth_LeadJet_pt", &truth_LeadJet_pt, &b_truth_LeadJet_pt);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("nbjets", &nbjets, &b_nbjets);
   fChain->SetBranchAddress("nbjets_q", &nbjets_q, &b_nbjets_q);
   fChain->SetBranchAddress("nbjets_HadI", &nbjets_HadI, &b_nbjets_HadI);
   fChain->SetBranchAddress("nbjets_HadF", &nbjets_HadF, &b_nbjets_HadF);
   fChain->SetBranchAddress("jet_pt", &jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("jet_eta", &jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_phi", &jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("jet_pt_orig", &jet_pt_orig, &b_jet_pt_orig);
   fChain->SetBranchAddress("jet_eta_orig", &jet_eta_orig, &b_jet_eta_orig);
   fChain->SetBranchAddress("jet_phi_orig", &jet_phi_orig, &b_jet_phi_orig);
   fChain->SetBranchAddress("jet_E_orig", &jet_E_orig, &b_jet_E_orig);
   fChain->SetBranchAddress("jet_sumtrkS_pt", &jet_sumtrkS_pt, &b_jet_sumtrkS_pt);
   fChain->SetBranchAddress("jet_sumtrkV_pt", &jet_sumtrkV_pt, &b_jet_sumtrkV_pt);
   fChain->SetBranchAddress("jet_sumtrkV_eta", &jet_sumtrkV_eta, &b_jet_sumtrkV_eta);
   fChain->SetBranchAddress("jet_sumtrk_ntrk", &jet_sumtrk_ntrk, &b_jet_sumtrk_ntrk);
   fChain->SetBranchAddress("jet_E", &jet_E, &b_jet_E);
   fChain->SetBranchAddress("jet_m", &jet_m, &b_jet_m);
   fChain->SetBranchAddress("jet_truthflav", &jet_truthflav, &b_jet_truthflav);
   fChain->SetBranchAddress("jet_nBHadr", &jet_nBHadr, &b_jet_nBHadr);
   fChain->SetBranchAddress("jet_GhostL_q", &jet_GhostL_q, &b_jet_GhostL_q);
   fChain->SetBranchAddress("jet_GhostL_HadI", &jet_GhostL_HadI, &b_jet_GhostL_HadI);
   fChain->SetBranchAddress("jet_GhostL_HadF", &jet_GhostL_HadF, &b_jet_GhostL_HadF);
   fChain->SetBranchAddress("jet_LabDr_HadF", &jet_LabDr_HadF, &b_jet_LabDr_HadF);
   fChain->SetBranchAddress("jet_aliveAfterOR", &jet_aliveAfterOR, &b_jet_aliveAfterOR);
   fChain->SetBranchAddress("jet_truthMatch", &jet_truthMatch, &b_jet_truthMatch);
   fChain->SetBranchAddress("jet_isPU", &jet_isPU, &b_jet_isPU);
   fChain->SetBranchAddress("jet_isBadMedium", &jet_isBadMedium, &b_jet_isBadMedium);
   fChain->SetBranchAddress("jet_truthPt", &jet_truthPt, &b_jet_truthPt);
   fChain->SetBranchAddress("jet_dRiso", &jet_dRiso, &b_jet_dRiso);
   fChain->SetBranchAddress("jet_JVT", &jet_JVT, &b_jet_JVT);
   fChain->SetBranchAddress("jet_JVF", &jet_JVF, &b_jet_JVF);
   fChain->SetBranchAddress("jet_dRminToB", &jet_dRminToB, &b_jet_dRminToB);
   fChain->SetBranchAddress("jet_dRminToC", &jet_dRminToC, &b_jet_dRminToC);
   fChain->SetBranchAddress("jet_dRminToT", &jet_dRminToT, &b_jet_dRminToT);
   fChain->SetBranchAddress("jet_ip2d_pb", &jet_ip2d_pb, &b_jet_ip2d_pb);
   fChain->SetBranchAddress("jet_ip2d_pc", &jet_ip2d_pc, &b_jet_ip2d_pc);
   fChain->SetBranchAddress("jet_ip2d_pu", &jet_ip2d_pu, &b_jet_ip2d_pu);
   fChain->SetBranchAddress("jet_ip2d_llr", &jet_ip2d_llr, &b_jet_ip2d_llr);
   fChain->SetBranchAddress("jet_ip3d_pb", &jet_ip3d_pb, &b_jet_ip3d_pb);
   fChain->SetBranchAddress("jet_ip3d_pc", &jet_ip3d_pc, &b_jet_ip3d_pc);
   fChain->SetBranchAddress("jet_ip3d_pu", &jet_ip3d_pu, &b_jet_ip3d_pu);
   fChain->SetBranchAddress("jet_ip3d_llr", &jet_ip3d_llr, &b_jet_ip3d_llr);
   fChain->SetBranchAddress("jet_sv0_sig3d", &jet_sv0_sig3d, &b_jet_sv0_sig3d);
   fChain->SetBranchAddress("jet_sv0_ntrkj", &jet_sv0_ntrkj, &b_jet_sv0_ntrkj);
   fChain->SetBranchAddress("jet_sv0_ntrkv", &jet_sv0_ntrkv, &b_jet_sv0_ntrkv);
   fChain->SetBranchAddress("jet_sv0_n2t", &jet_sv0_n2t, &b_jet_sv0_n2t);
   fChain->SetBranchAddress("jet_sv0_m", &jet_sv0_m, &b_jet_sv0_m);
   fChain->SetBranchAddress("jet_sv0_efc", &jet_sv0_efc, &b_jet_sv0_efc);
   fChain->SetBranchAddress("jet_sv0_normdist", &jet_sv0_normdist, &b_jet_sv0_normdist);
   fChain->SetBranchAddress("jet_sv0_Nvtx", &jet_sv0_Nvtx, &b_jet_sv0_Nvtx);
   fChain->SetBranchAddress("jet_sv0_vtx_x", &jet_sv0_vtx_x, &b_jet_sv0_vtx_x);
   fChain->SetBranchAddress("jet_sv0_vtx_y", &jet_sv0_vtx_y, &b_jet_sv0_vtx_y);
   fChain->SetBranchAddress("jet_sv0_vtx_z", &jet_sv0_vtx_z, &b_jet_sv0_vtx_z);
   fChain->SetBranchAddress("jet_sv1_ntrkj", &jet_sv1_ntrkj, &b_jet_sv1_ntrkj);
   fChain->SetBranchAddress("jet_sv1_ntrkv", &jet_sv1_ntrkv, &b_jet_sv1_ntrkv);
   fChain->SetBranchAddress("jet_sv1_n2t", &jet_sv1_n2t, &b_jet_sv1_n2t);
   fChain->SetBranchAddress("jet_sv1_m", &jet_sv1_m, &b_jet_sv1_m);
   fChain->SetBranchAddress("jet_sv1_efc", &jet_sv1_efc, &b_jet_sv1_efc);
   fChain->SetBranchAddress("jet_sv1_normdist", &jet_sv1_normdist, &b_jet_sv1_normdist);
   fChain->SetBranchAddress("jet_sv1_pb", &jet_sv1_pb, &b_jet_sv1_pb);
   fChain->SetBranchAddress("jet_sv1_pc", &jet_sv1_pc, &b_jet_sv1_pc);
   fChain->SetBranchAddress("jet_sv1_pu", &jet_sv1_pu, &b_jet_sv1_pu);
   fChain->SetBranchAddress("jet_sv1_llr", &jet_sv1_llr, &b_jet_sv1_llr);
   fChain->SetBranchAddress("jet_sv1_Nvtx", &jet_sv1_Nvtx, &b_jet_sv1_Nvtx);
   fChain->SetBranchAddress("jet_sv1_sig3d", &jet_sv1_sig3d, &b_jet_sv1_sig3d);
   fChain->SetBranchAddress("jet_sv1_vtx_x", &jet_sv1_vtx_x, &b_jet_sv1_vtx_x);
   fChain->SetBranchAddress("jet_sv1_vtx_y", &jet_sv1_vtx_y, &b_jet_sv1_vtx_y);
   fChain->SetBranchAddress("jet_sv1_vtx_z", &jet_sv1_vtx_z, &b_jet_sv1_vtx_z);
   fChain->SetBranchAddress("PV_jf_x", &PV_jf_x, &b_PV_jf_x);
   fChain->SetBranchAddress("PV_jf_y", &PV_jf_y, &b_PV_jf_y);
   fChain->SetBranchAddress("PV_jf_z", &PV_jf_z, &b_PV_jf_z);
   fChain->SetBranchAddress("jet_jf_pb", &jet_jf_pb, &b_jet_jf_pb);
   fChain->SetBranchAddress("jet_jf_pc", &jet_jf_pc, &b_jet_jf_pc);
   fChain->SetBranchAddress("jet_jf_pu", &jet_jf_pu, &b_jet_jf_pu);
   fChain->SetBranchAddress("jet_jf_llr", &jet_jf_llr, &b_jet_jf_llr);
   fChain->SetBranchAddress("jet_jf_m", &jet_jf_m, &b_jet_jf_m);
   fChain->SetBranchAddress("jet_jf_efc", &jet_jf_efc, &b_jet_jf_efc);
   fChain->SetBranchAddress("jet_jf_deta", &jet_jf_deta, &b_jet_jf_deta);
   fChain->SetBranchAddress("jet_jf_dphi", &jet_jf_dphi, &b_jet_jf_dphi);
   fChain->SetBranchAddress("jet_jf_ntrkAtVx", &jet_jf_ntrkAtVx, &b_jet_jf_ntrkAtVx);
   fChain->SetBranchAddress("jet_jf_nvtx", &jet_jf_nvtx, &b_jet_jf_nvtx);
   fChain->SetBranchAddress("jet_jf_sig3d", &jet_jf_sig3d, &b_jet_jf_sig3d);
   fChain->SetBranchAddress("jet_jf_nvtx1t", &jet_jf_nvtx1t, &b_jet_jf_nvtx1t);
   fChain->SetBranchAddress("jet_jf_n2t", &jet_jf_n2t, &b_jet_jf_n2t);
   fChain->SetBranchAddress("jet_jf_VTXsize", &jet_jf_VTXsize, &b_jet_jf_VTXsize);
   fChain->SetBranchAddress("jet_jf_vtx_chi2", &jet_jf_vtx_chi2, &b_jet_jf_vtx_chi2);
   fChain->SetBranchAddress("jet_jf_vtx_ndf", &jet_jf_vtx_ndf, &b_jet_jf_vtx_ndf);
   fChain->SetBranchAddress("jet_jf_vtx_ntrk", &jet_jf_vtx_ntrk, &b_jet_jf_vtx_ntrk);
   fChain->SetBranchAddress("jet_jf_vtx_L3D", &jet_jf_vtx_L3D, &b_jet_jf_vtx_L3D);
   fChain->SetBranchAddress("jet_jf_vtx_sig3D", &jet_jf_vtx_sig3D, &b_jet_jf_vtx_sig3D);
   fChain->SetBranchAddress("jet_jf_phi", &jet_jf_phi, &b_jet_jf_phi);
   fChain->SetBranchAddress("jet_jf_theta", &jet_jf_theta, &b_jet_jf_theta);
   fChain->SetBranchAddress("jet_jfcombnn_pb", &jet_jfcombnn_pb, &b_jet_jfcombnn_pb);
   fChain->SetBranchAddress("jet_jfcombnn_pc", &jet_jfcombnn_pc, &b_jet_jfcombnn_pc);
   fChain->SetBranchAddress("jet_jfcombnn_pu", &jet_jfcombnn_pu, &b_jet_jfcombnn_pu);
   fChain->SetBranchAddress("jet_jfcombnn_llr", &jet_jfcombnn_llr, &b_jet_jfcombnn_llr);
   fChain->SetBranchAddress("jet_sv1ip3d", &jet_sv1ip3d, &b_jet_sv1ip3d);
   fChain->SetBranchAddress("jet_mv1", &jet_mv1, &b_jet_mv1);
   fChain->SetBranchAddress("jet_mv1c", &jet_mv1c, &b_jet_mv1c);
   fChain->SetBranchAddress("jet_mv2c00", &jet_mv2c00, &b_jet_mv2c00);
   fChain->SetBranchAddress("jet_mv2c10", &jet_mv2c10, &b_jet_mv2c10);
   fChain->SetBranchAddress("jet_mv2c20", &jet_mv2c20, &b_jet_mv2c20);
   fChain->SetBranchAddress("jet_mv2c100", &jet_mv2c100, &b_jet_mv2c100);
   fChain->SetBranchAddress("jet_mv2m_pu", &jet_mv2m_pu, &b_jet_mv2m_pu);
   fChain->SetBranchAddress("jet_mv2m_pc", &jet_mv2m_pc, &b_jet_mv2m_pc);
   fChain->SetBranchAddress("jet_mv2m_pb", &jet_mv2m_pb, &b_jet_mv2m_pb);
   fChain->SetBranchAddress("jet_mvb", &jet_mvb, &b_jet_mvb);
   fChain->SetBranchAddress("jet_multisvbb1", &jet_multisvbb1, &b_jet_multisvbb1);
   fChain->SetBranchAddress("jet_multisvbb2", &jet_multisvbb2, &b_jet_multisvbb2);
   fChain->SetBranchAddress("jet_msv_N2Tpair", &jet_msv_N2Tpair, &b_jet_msv_N2Tpair);
   fChain->SetBranchAddress("jet_msv_energyTrkInJet", &jet_msv_energyTrkInJet, &b_jet_msv_energyTrkInJet);
   fChain->SetBranchAddress("jet_msv_nvsec", &jet_msv_nvsec, &b_jet_msv_nvsec);
   fChain->SetBranchAddress("jet_msv_normdist", &jet_msv_normdist, &b_jet_msv_normdist);
   fChain->SetBranchAddress("jet_msv_vtx_mass", &jet_msv_vtx_mass, &b_jet_msv_vtx_mass);
   fChain->SetBranchAddress("jet_msv_vtx_efrc", &jet_msv_vtx_efrc, &b_jet_msv_vtx_efrc);
   fChain->SetBranchAddress("jet_msv_vtx_ntrk", &jet_msv_vtx_ntrk, &b_jet_msv_vtx_ntrk);
   fChain->SetBranchAddress("jet_msv_vtx_pt", &jet_msv_vtx_pt, &b_jet_msv_vtx_pt);
   fChain->SetBranchAddress("jet_msv_vtx_eta", &jet_msv_vtx_eta, &b_jet_msv_vtx_eta);
   fChain->SetBranchAddress("jet_msv_vtx_phi", &jet_msv_vtx_phi, &b_jet_msv_vtx_phi);
   fChain->SetBranchAddress("jet_msv_vtx_dls", &jet_msv_vtx_dls, &b_jet_msv_vtx_dls);
   fChain->SetBranchAddress("jet_msv_vtx_x", &jet_msv_vtx_x, &b_jet_msv_vtx_x);
   fChain->SetBranchAddress("jet_msv_vtx_y", &jet_msv_vtx_y, &b_jet_msv_vtx_y);
   fChain->SetBranchAddress("jet_msv_vtx_z", &jet_msv_vtx_z, &b_jet_msv_vtx_z);
   fChain->SetBranchAddress("jet_msv_vtx_chi", &jet_msv_vtx_chi, &b_jet_msv_vtx_chi);
   fChain->SetBranchAddress("jet_msv_vtx_ndf", &jet_msv_vtx_ndf, &b_jet_msv_vtx_ndf);
   fChain->SetBranchAddress("bH_pt", &bH_pt, &b_bH_pt);
   fChain->SetBranchAddress("bH_eta", &bH_eta, &b_bH_eta);
   fChain->SetBranchAddress("bH_phi", &bH_phi, &b_bH_phi);
   fChain->SetBranchAddress("bH_Lxy", &bH_Lxy, &b_bH_Lxy);
   fChain->SetBranchAddress("bH_x", &bH_x, &b_bH_x);
   fChain->SetBranchAddress("bH_y", &bH_y, &b_bH_y);
   fChain->SetBranchAddress("bH_z", &bH_z, &b_bH_z);
   fChain->SetBranchAddress("bH_dRjet", &bH_dRjet, &b_bH_dRjet);
   fChain->SetBranchAddress("bH_nBtracks", &bH_nBtracks, &b_bH_nBtracks);
   fChain->SetBranchAddress("bH_nCtracks", &bH_nCtracks, &b_bH_nCtracks);
   fChain->SetBranchAddress("cH_pt", &cH_pt, &b_cH_pt);
   fChain->SetBranchAddress("cH_eta", &cH_eta, &b_cH_eta);
   fChain->SetBranchAddress("cH_phi", &cH_phi, &b_cH_phi);
   fChain->SetBranchAddress("cH_Lxy", &cH_Lxy, &b_cH_Lxy);
   fChain->SetBranchAddress("cH_x", &cH_x, &b_cH_x);
   fChain->SetBranchAddress("cH_y", &cH_y, &b_cH_y);
   fChain->SetBranchAddress("cH_z", &cH_z, &b_cH_z);
   fChain->SetBranchAddress("cH_dRjet", &cH_dRjet, &b_cH_dRjet);
   fChain->SetBranchAddress("cH_nCtracks", &cH_nCtracks, &b_cH_nCtracks);
   fChain->SetBranchAddress("jet_btag_ntrk", &jet_btag_ntrk, &b_jet_btag_ntrk);
   fChain->SetBranchAddress("jet_trk_pt", &jet_trk_pt, &b_jet_trk_pt);
   fChain->SetBranchAddress("jet_trk_eta", &jet_trk_eta, &b_jet_trk_eta);
   fChain->SetBranchAddress("jet_trk_theta", &jet_trk_theta, &b_jet_trk_theta);
   fChain->SetBranchAddress("jet_trk_phi", &jet_trk_phi, &b_jet_trk_phi);
   fChain->SetBranchAddress("jet_trk_chi2", &jet_trk_chi2, &b_jet_trk_chi2);
   fChain->SetBranchAddress("jet_trk_ndf", &jet_trk_ndf, &b_jet_trk_ndf);
   fChain->SetBranchAddress("jet_trk_algo", &jet_trk_algo, &b_jet_trk_algo);
   fChain->SetBranchAddress("jet_trk_orig", &jet_trk_orig, &b_jet_trk_orig);
   fChain->SetBranchAddress("jet_trk_vtx_X", &jet_trk_vtx_X, &b_jet_trk_vtx_X);
   fChain->SetBranchAddress("jet_trk_vtx_Y", &jet_trk_vtx_Y, &b_jet_trk_vtx_Y);
   fChain->SetBranchAddress("jet_trk_nInnHits", &jet_trk_nInnHits, &b_jet_trk_nInnHits);
   fChain->SetBranchAddress("jet_trk_nNextToInnHits", &jet_trk_nNextToInnHits, &b_jet_trk_nNextToInnHits);
   fChain->SetBranchAddress("jet_trk_nBLHits", &jet_trk_nBLHits, &b_jet_trk_nBLHits);
   fChain->SetBranchAddress("jet_trk_nsharedBLHits", &jet_trk_nsharedBLHits, &b_jet_trk_nsharedBLHits);
   fChain->SetBranchAddress("jet_trk_nsplitBLHits", &jet_trk_nsplitBLHits, &b_jet_trk_nsplitBLHits);
   fChain->SetBranchAddress("jet_trk_nPixHits", &jet_trk_nPixHits, &b_jet_trk_nPixHits);
   fChain->SetBranchAddress("jet_trk_nsharedPixHits", &jet_trk_nsharedPixHits, &b_jet_trk_nsharedPixHits);
   fChain->SetBranchAddress("jet_trk_nsplitPixHits", &jet_trk_nsplitPixHits, &b_jet_trk_nsplitPixHits);
   fChain->SetBranchAddress("jet_trk_nSCTHits", &jet_trk_nSCTHits, &b_jet_trk_nSCTHits);
   fChain->SetBranchAddress("jet_trk_nsharedSCTHits", &jet_trk_nsharedSCTHits, &b_jet_trk_nsharedSCTHits);
   fChain->SetBranchAddress("jet_trk_expectBLayerHit", &jet_trk_expectBLayerHit, &b_jet_trk_expectBLayerHit);
   fChain->SetBranchAddress("jet_trk_d0", &jet_trk_d0, &b_jet_trk_d0);
   fChain->SetBranchAddress("jet_trk_z0", &jet_trk_z0, &b_jet_trk_z0);
   fChain->SetBranchAddress("jet_trk_d0_truth", &jet_trk_d0_truth, &b_jet_trk_d0_truth);
   fChain->SetBranchAddress("jet_trk_z0_truth", &jet_trk_z0_truth, &b_jet_trk_z0_truth);
   fChain->SetBranchAddress("jet_trk_ip3d_grade", &jet_trk_ip3d_grade, &b_jet_trk_ip3d_grade);
   fChain->SetBranchAddress("jet_trk_ip3d_d0", &jet_trk_ip3d_d0, &b_jet_trk_ip3d_d0);
   fChain->SetBranchAddress("jet_trk_ip3d_z0", &jet_trk_ip3d_z0, &b_jet_trk_ip3d_z0);
   fChain->SetBranchAddress("jet_trk_ip3d_d0sig", &jet_trk_ip3d_d0sig, &b_jet_trk_ip3d_d0sig);
   fChain->SetBranchAddress("jet_trk_ip3d_z0sig", &jet_trk_ip3d_z0sig, &b_jet_trk_ip3d_z0sig);
   fChain->SetBranchAddress("jet_trk_ip2d_llr", &jet_trk_ip2d_llr, &b_jet_trk_ip2d_llr);
   fChain->SetBranchAddress("jet_trk_ip3d_llr", &jet_trk_ip3d_llr, &b_jet_trk_ip3d_llr);
   fChain->SetBranchAddress("jet_trk_jf_Vertex", &jet_trk_jf_Vertex, &b_jet_trk_jf_Vertex);
   fChain->SetBranchAddress("jet_sv1_ntrk", &jet_sv1_ntrk, &b_jet_sv1_ntrk);
   fChain->SetBranchAddress("jet_ip3d_ntrk", &jet_ip3d_ntrk, &b_jet_ip3d_ntrk);
   fChain->SetBranchAddress("jet_jf_ntrk", &jet_jf_ntrk, &b_jet_jf_ntrk);
   fChain->SetBranchAddress("L1_MU4", &L1_MU4, &b_L1_MU4);
   fChain->SetBranchAddress("L1_MU6", &L1_MU6, &b_L1_MU6);
   fChain->SetBranchAddress("L1_MU10", &L1_MU10, &b_L1_MU10);
   fChain->SetBranchAddress("L1_MU11", &L1_MU11, &b_L1_MU11);
   fChain->SetBranchAddress("L1_MU15", &L1_MU15, &b_L1_MU15);
   fChain->SetBranchAddress("L1_MU20", &L1_MU20, &b_L1_MU20);
   fChain->SetBranchAddress("L1_MU4_J12", &L1_MU4_J12, &b_L1_MU4_J12);
   fChain->SetBranchAddress("L1_MU6_J20", &L1_MU6_J20, &b_L1_MU6_J20);
   fChain->SetBranchAddress("L1_MU6_J40", &L1_MU6_J40, &b_L1_MU6_J40);
   fChain->SetBranchAddress("L1_MU6_J75", &L1_MU6_J75, &b_L1_MU6_J75);
   fChain->SetBranchAddress("L1_J12", &L1_J12, &b_L1_J12);
   fChain->SetBranchAddress("L1_J15", &L1_J15, &b_L1_J15);
   fChain->SetBranchAddress("L1_J20", &L1_J20, &b_L1_J20);
   fChain->SetBranchAddress("L1_J25", &L1_J25, &b_L1_J25);
   fChain->SetBranchAddress("L1_J30", &L1_J30, &b_L1_J30);
   fChain->SetBranchAddress("L1_J40", &L1_J40, &b_L1_J40);
   fChain->SetBranchAddress("L1_J50", &L1_J50, &b_L1_J50);
   fChain->SetBranchAddress("L1_J75", &L1_J75, &b_L1_J75);
   fChain->SetBranchAddress("L1_J85", &L1_J85, &b_L1_J85);
   fChain->SetBranchAddress("L1_J100", &L1_J100, &b_L1_J100);
   fChain->SetBranchAddress("L1_J120", &L1_J120, &b_L1_J120);
   fChain->SetBranchAddress("L1_MBTS_1_1", &L1_MBTS_1_1, &b_L1_MBTS_1_1);
   fChain->SetBranchAddress("L1_RD0_FILLED", &L1_RD0_FILLED, &b_L1_RD0_FILLED);
}

Bool_t ChallengeFramework::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef ChallengeFramework_cxx
