#define ChallengeFramework_cxx

#include "ChallengeFramework.h"
#include <TH2.h>
#include <TStyle.h>


void ChallengeFramework::Begin(TTree * /*tree*/) {

  TString option = GetOption();

  n_events=0;
  firstEvent=true;
  
  std::string line, str2;
  std::ifstream file("runChallengeFramework.C");
  if (file) {
    while (getline(file,line)) {
      if (line.find("int counter")!=std::string::npos) {
	std::cout << line << std::endl;
	str2 = line.substr(14,1);
	std::cout << str2 << std::endl;
      }
    }
  }
  file.close();

  TString outputName = "inputChallenge_mc15_13TeV_410000_0"+str2+"_v1";

  output = new TFile(outputName+".root","RECREATE");
  std::cout << "output ROOT file " << outputName << std::endl;

  TString treeName = "JetCollection";
  tree = new TTree(treeName,treeName);

  m_jet_trk_pt = new std::vector<float>();
  m_jet_trk_phi = new std::vector<float>();

  tree->Branch("jet_truthflav",&m_jet_truthflav);

  // MV20 inputs

  tree->Branch("jet_ip2d_pb",&m_jet_ip2d_pb);
  tree->Branch("jet_ip2d_pc",&m_jet_ip2d_pc);
  tree->Branch("jet_ip2d_pu",&m_jet_ip2d_pu);
  tree->Branch("jet_ip3d_pb",&m_jet_ip3d_pb);
  tree->Branch("jet_ip3d_pc",&m_jet_ip3d_pc);
  tree->Branch("jet_ip3d_pu",&m_jet_ip3d_pu);

  tree->Branch("jet_sv1_ntrkj",&m_jet_sv1_ntrkj);
  tree->Branch("jet_sv1_ntrkv",&m_jet_sv1_ntrkv);
  tree->Branch("jet_sv1_n2t",&m_jet_sv1_n2t);
  tree->Branch("jet_sv1_Nvtx",&m_jet_sv1_Nvtx);
  tree->Branch("jet_sv1_m",&m_jet_sv1_m);
  tree->Branch("jet_sv1_efc",&m_jet_sv1_efc);
  tree->Branch("jet_sv1_normdist",&m_jet_sv1_normdist);
  tree->Branch("jet_sv1_sig3d",&m_jet_sv1_sig3d);

  tree->Branch("jet_jf_n2t",&m_jet_jf_n2t);
  tree->Branch("jet_jf_nvtx",&m_jet_jf_nvtx);
  tree->Branch("jet_jf_nvtx1t",&m_jet_jf_nvtx1t);
  tree->Branch("jet_jf_m",&m_jet_jf_m);
  tree->Branch("jet_jf_efc",&m_jet_jf_efc);
  tree->Branch("jet_jf_deta",&m_jet_jf_deta);
  tree->Branch("jet_jf_dphi",&m_jet_jf_dphi);
  tree->Branch("jet_jf_ntrkAtVx",&m_jet_jf_ntrkAtVx);
  tree->Branch("jet_jf_sig3d",&m_jet_jf_sig3d);

  tree->Branch("jet_pt",&m_jet_pt);
  tree->Branch("jet_eta",&m_jet_eta);
  tree->Branch("jet_phi",&m_jet_phi);

  //tree->Branch("jet_trk_pt",&m_jet_trk_pt);
  //tree->Branch("jet_trk_phi",&m_jet_trk_phi);

  // MV20 outputs
  tree->Branch("jet_mv2c00",&m_jet_mv2c00);
  tree->Branch("jet_mv2c10",&m_jet_mv2c10);
  tree->Branch("jet_mv2c20",&m_jet_mv2c20);
}

void ChallengeFramework::SlaveBegin(TTree * /*tree*/) {

  TString option = GetOption();

}

Bool_t ChallengeFramework::Process(Long64_t entry) {

  b_jet_truthflav->GetEntry(entry);

  b_jet_ip2d_pb->GetEntry(entry);
  b_jet_ip2d_pc->GetEntry(entry);
  b_jet_ip2d_pu->GetEntry(entry);
  b_jet_ip3d_pb->GetEntry(entry);
  b_jet_ip3d_pc->GetEntry(entry);
  b_jet_ip3d_pu->GetEntry(entry);

  b_jet_sv1_ntrkj->GetEntry(entry);
  b_jet_sv1_ntrkv->GetEntry(entry);
  b_jet_sv1_n2t->GetEntry(entry);
  b_jet_sv1_Nvtx->GetEntry(entry);
  b_jet_sv1_m->GetEntry(entry);
  b_jet_sv1_efc->GetEntry(entry);
  b_jet_sv1_normdist->GetEntry(entry);
  b_jet_sv1_sig3d->GetEntry(entry);

  b_jet_jf_n2t->GetEntry(entry);
  b_jet_jf_nvtx->GetEntry(entry);
  b_jet_jf_nvtx1t->GetEntry(entry);
  b_jet_jf_m->GetEntry(entry);
  b_jet_jf_efc->GetEntry(entry);
  b_jet_jf_deta->GetEntry(entry);
  b_jet_jf_dphi->GetEntry(entry);
  b_jet_jf_ntrkAtVx->GetEntry(entry);
  b_jet_jf_sig3d->GetEntry(entry);
  
  b_jet_pt->GetEntry(entry);
  b_jet_eta->GetEntry(entry);
  b_jet_phi->GetEntry(entry);

  b_jet_JVT->GetEntry(entry);

  b_PVz->GetEntry(entry);
  b_truth_PVz->GetEntry(entry);

  //b_jet_trk_pt->GetEntry(entry);
  //b_jet_trk_phi->GetEntry(entry);

  b_jet_mv2c00->GetEntry(entry);
  b_jet_mv2c10->GetEntry(entry);
  b_jet_mv2c20->GetEntry(entry);

  n_events++;

  if (firstEvent) {
    firstEvent=false;
    inputFile = GetFileName();
    std::cout << "Input file " << inputFile << std::endl;
  }

  if (inputFile != GetFileName()) {
    inputFile = GetFileName();
    std::cout << "Input file " << inputFile << std::endl;
  }

  Long64_t n_entries = fChain->GetEntries();
  if ((int)n_events%10000==0) 
    std::cout << "Processing " << n_events << "/" << n_entries << std::endl;

  //if (!jet_trk_pt->size())
  //std::cout << "WARNING - running on SLIMMED input files, some information will be missing" << std::endl;

  for (unsigned int i=0; i<jet_pt->size(); i++) {

    clear();

    if(fabs(jet_eta->at(i))>2.5) continue;
    if(jet_pt->at(i)<20000) continue;
    if(jet_JVT->at(i)<0.641) continue;
    if(fabs(truth_PVz-PVz) > 0.5) continue;

    m_jet_truthflav = jet_truthflav->at(i);

    m_jet_ip2d_pb = jet_ip2d_pb->at(i);
    if (m_jet_ip2d_pb == -99) m_jet_ip2d_pb = -0.5;
    m_jet_ip2d_pc = jet_ip2d_pc->at(i);
    if (m_jet_ip2d_pc == -99) m_jet_ip2d_pc = -0.5;
    m_jet_ip2d_pu = jet_ip2d_pu->at(i);
    if (m_jet_ip2d_pu == -99) m_jet_ip2d_pu = -0.5;
    m_jet_ip3d_pb = jet_ip3d_pb->at(i);
    if (m_jet_ip3d_pb == -99) m_jet_ip3d_pb = -0.5;
    m_jet_ip3d_pc = jet_ip3d_pc->at(i);
    if (m_jet_ip3d_pc == -99) m_jet_ip3d_pc = -0.5;
    m_jet_ip3d_pu = jet_ip3d_pu->at(i);
    if (m_jet_ip3d_pu == -99) m_jet_ip3d_pu = -0.5;

    m_jet_sv1_ntrkj = jet_sv1_ntrkj->at(i);
    m_jet_sv1_ntrkv = jet_sv1_ntrkv->at(i);
    m_jet_sv1_n2t = jet_sv1_n2t->at(i);
    m_jet_sv1_Nvtx = jet_sv1_Nvtx->at(i);
    m_jet_sv1_m = jet_sv1_m->at(i);
    m_jet_sv1_efc = jet_sv1_efc->at(i);
    if (m_jet_sv1_efc == -99) m_jet_sv1_efc = -0.5;
    m_jet_sv1_normdist = jet_sv1_normdist->at(i);
    m_jet_sv1_sig3d = jet_sv1_sig3d->at(i);

    m_jet_jf_n2t = jet_jf_n2t->at(i);
    m_jet_jf_nvtx = jet_jf_nvtx->at(i);
    m_jet_jf_nvtx1t = jet_jf_nvtx1t->at(i);
    m_jet_jf_m = jet_jf_m->at(i);
    m_jet_jf_efc = jet_jf_efc->at(i);
    if (m_jet_jf_efc == -99) m_jet_jf_efc = -0.5;
    m_jet_jf_deta = jet_jf_deta->at(i);
    if (m_jet_jf_deta == -99) m_jet_jf_deta = -1;
    m_jet_jf_dphi = jet_jf_dphi->at(i);
    if (m_jet_jf_dphi == -99) m_jet_jf_dphi = -1;
    m_jet_jf_ntrkAtVx = jet_jf_ntrkAtVx->at(i);
    m_jet_jf_sig3d = jet_jf_sig3d->at(i);
    if (m_jet_jf_sig3d == -99) m_jet_jf_sig3d = -3;

    m_jet_pt = jet_pt->at(i);
    m_jet_eta = jet_eta->at(i);
    m_jet_phi = jet_phi->at(i);

    m_jet_mv2c00 = jet_mv2c00->at(i);
    m_jet_mv2c10 = jet_mv2c10->at(i);
    m_jet_mv2c20 = jet_mv2c20->at(i);

    //std::vector<float> tracks_pt = jet_trk_pt->at(i); 
    //
    //for (unsigned int j=0; j<(jet_trk_pt->at(i)).size(); j++) {
    ////for (unsigned int j=0; j<tracks_pt.size(); j++) {
    //
    //  std::vector<float> prov = jet_trk_pt->at(i);
    //  std::vector<float>* prov2 = &prov;
    //
    //  //std::cout << "AACC " << prov.size() << " " << prov2->size() << " " << tracks_pt.at(j) << std::endl;
    //
    //  m_jet_trk_pt->push_back((jet_trk_pt->at(i)).at(j));
    //  m_jet_trk_phi->push_back((jet_trk_phi->at(i)).at(j));
    //
    //  //m_jet_trk_pt->push_back(tracks_pt.at(j));
    //
    //  //std::cout << "AACC " << jet_trk_pt->size() << " " << jet_pt->size() << " " << (jet_trk_pt->at(i)).size() << std::endl;
    //
    //}
    tree->Fill();
  }

  return kTRUE;
}

void ChallengeFramework::SlaveTerminate() {

}

void ChallengeFramework::Terminate() {

  tree->Write();
  output->Close();

}

void ChallengeFramework::clear() {

  m_jet_trk_pt->clear();
  m_jet_trk_phi->clear();

}
