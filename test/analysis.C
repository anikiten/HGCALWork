#define analysis_cxx
#include "analysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void analysis::Loop()
{
//   In a ROOT session, you can do:
//      root> .L analysis.C
//      root> analysis t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   TH3F * hrechit_zxy = new TH3F("hrechit_zxy","rechit_zxy", 
				 300, 300.,450.,
				 300,-50.,100., 
				 300, 50.,200.); 

   TH2F * hrechit_xy = new TH2F("hrechit_xy","rechit_xy", 
				300,-50.,100., 
				300, 50.,200.); 

   TH1F * hrechit_z = new TH1F("hrechit_z","rechit_z", 
			       750, 300.,450.);

   TH2F * hrechit_eta_phi = new TH2F("hrechit_eta_phi","rechit_eta_phi", 
				200, 0.,4., 
				576,-3.1416,3.1416); 

   TH1F * hsumrechit = new TH1F("hsumrechit","Sum of Signal RecHits / energy", 
				40, 0.,2.);

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      unsigned int nrechits = rechit_x->size();
      unsigned int ngen = gen_eta->size();
   
      for (unsigned int igp = 0; igp < ngen; igp++) {
	Double_t theta = 2. * atan(exp(-(*gen_eta)[igp]));
	Double_t pt = (*gen_energy)[igp] * sin(theta);
	cout <<" particle id = " << (*gen_pdgid)[igp]
	     <<" eta = " << (*gen_eta)[igp]
	     <<" phi = " << (*gen_phi)[igp]
	     <<" energy = " << (*gen_energy)[igp] 
	     <<" pt = " << pt <<  endl;
      }

      Double_t energy_of_rechits_pz = 0.;
      Double_t energy_of_rechits_nz = 0.;

      cout <<" nrechits = " << nrechits << endl;

      for (unsigned int irh = 0; irh < nrechits; irh++) {
	if( (*rechit_z)[irh] > 0.) {
	  energy_of_rechits_pz += (*rechit_energy)[irh];
	  if(jentry == 0) {
	    hrechit_zxy->Fill((*rechit_z)[irh],(*rechit_x)[irh],(*rechit_y)[irh]);
	    hrechit_xy->Fill((*rechit_x)[irh],(*rechit_y)[irh],(*rechit_energy)[irh]);
	    hrechit_z->Fill((*rechit_z)[irh],(*rechit_energy)[irh]);
	    hrechit_eta_phi->Fill((*rechit_eta)[irh],(*rechit_phi)[irh],(*rechit_energy)[irh]);
	  }
	} else {
	  energy_of_rechits_nz += (*rechit_energy)[irh];
	}
      }
      cout <<"  Energy of signal rec hits Z > 0 = " << energy_of_rechits_pz << endl; 
      cout <<"  Energy of signal rec hits Z < 0 = " << energy_of_rechits_nz << endl; 
      hsumrechit->Fill(energy_of_rechits_pz/(*gen_energy)[0]);
      hsumrechit->Fill(energy_of_rechits_nz/(*gen_energy)[1]);
      // if (Cut(ientry) < 0) continue;
   }
   //   hrechit_z->Draw();
   //   hrechit_eta_phi->Draw("box");
   //   hrechit_xy->Draw("box");
   hrechit_zxy->Draw("lego");
   //   hsumrechit->Draw("hist");
   TFile efile("test.root","recreate");
   hrechit_z->Write();
   hrechit_eta_phi->Write();
   hrechit_xy->Write();
   hrechit_zxy->Write();
   hsumrechit->Write();
   efile.Close();
}
