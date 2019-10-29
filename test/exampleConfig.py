import FWCore.ParameterSet.Config as cms
from Configuration.StandardSequences.Eras import eras

process = cms.Process("Demo")
process.load('Configuration.StandardSequences.Services_cff')
process.load('SimGeneral.HepPDTESSource.pythiapdt_cfi')
process.load('Configuration.Geometry.GeometryExtended2026D41Reco_cff')
process.load('Configuration.StandardSequences.MagneticField_cff')
process.load('Configuration.EventContent.EventContent_cff')
process.load("FWCore.MessageService.MessageLogger_cfi")
process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')
try:
    process.load('RecoLocalCalo.HGCalRecProducers.HGCalLocalRecoSequence_cff')
except Exception: # ConfigFileReadError in case config does not exist
    process.load('SimCalorimetry.HGCalSimProducers.hgcalDigitizer_cfi')
    process.load('RecoLocalCalo.HGCalRecProducers.hgcalLayerClusters_cff')
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, 'auto:phase2_realistic', '')
from FastSimulation.Event.ParticleFilter_cfi import *

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )

process.source = cms.Source("PoolSource",
    fileNames = cms.untracked.vstring(
#
# pion E=10 GeV, eta=2.6
#            'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion10GeVeta26_anikiten_20191023/RECO/default_PDGid211_x10_E10.0To10.0_RECO_1.root',
#            'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion10GeVeta26_anikiten_20191023/RECO/default_PDGid211_x10_E10.0To10.0_RECO_2.root',
#            'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion10GeVeta26_anikiten_20191023/RECO/default_PDGid211_x10_E10.0To10.0_RECO_3.root',
#            'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion10GeVeta26_anikiten_20191023/RECO/default_PDGid211_x10_E10.0To10.0_RECO_4.root',
#            'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion10GeVeta26_anikiten_20191023/RECO/default_PDGid211_x10_E10.0To10.0_RECO_5.root'
#
# pion E=10 GeV, eta=2.0
            'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion10GeVeta20_anikiten_20191023/RECO/default_PDGid211_x10_E10.0To10.0_RECO_1.root',
            'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion10GeVeta20_anikiten_20191023/RECO/default_PDGid211_x10_E10.0To10.0_RECO_2.root',
            'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion10GeVeta20_anikiten_20191023/RECO/default_PDGid211_x10_E10.0To10.0_RECO_3.root',
            'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion10GeVeta20_anikiten_20191023/RECO/default_PDGid211_x10_E10.0To10.0_RECO_4.root',
            'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion10GeVeta20_anikiten_20191023/RECO/default_PDGid211_x10_E10.0To10.0_RECO_5.root'
#
# pion E=50 GeV, eta=2.6
#          'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion50GeVeta26_anikiten_20191022/RECO/default_PDGid211_x10_E50.0To50.0_RECO_1.root',
#          'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion50GeVeta26_anikiten_20191022/RECO/default_PDGid211_x10_E50.0To50.0_RECO_2.root',
#          'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion50GeVeta26_anikiten_20191022/RECO/default_PDGid211_x10_E50.0To50.0_RECO_3.root',
#          'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion50GeVeta26_anikiten_20191022/RECO/default_PDGid211_x10_E50.0To50.0_RECO_4.root',
#          'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion50GeVeta26_anikiten_20191022/RECO/default_PDGid211_x10_E50.0To50.0_RECO_5.root'
#
# pion E=50 GeV, eta=2.0         
#        'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion50GeVeta20_anikiten_20191023/RECO/default_PDGid211_x10_E50.0To50.0_RECO_1.root',
#        'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion50GeVeta20_anikiten_20191023/RECO/default_PDGid211_x10_E50.0To50.0_RECO_2.root',
#        'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion50GeVeta20_anikiten_20191023/RECO/default_PDGid211_x10_E50.0To50.0_RECO_3.root',
#        'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion50GeVeta20_anikiten_20191023/RECO/default_PDGid211_x10_E50.0To50.0_RECO_4.root',
#        'file:/afs/cern.ch/work/a/anikiten/public/CMSSW_11_0_0_pre7/src/reco_prodtools/FlatRandomEGunProducer_pion50GeVeta20_anikiten_20191023/RECO/default_PDGid211_x10_E50.0To50.0_RECO_5.root'
    ),
    duplicateCheckMode = cms.untracked.string("noDuplicateCheck")
)

process.ana = cms.EDAnalyzer('HGCalAnalysis',
                             detector = cms.string("all"),
                             inputTag_HGCalMultiCluster = cms.string("hgcalMultiClusters"),
                             rawRecHits = cms.bool(True),
                             verbose = cms.bool(True),
                             readCaloParticles = cms.bool(True),
                             storeGenParticleOrigin = cms.bool(True),
                             storeGenParticleExtrapolation = cms.bool(True),
                             storeElectrons = cms.bool(True),
                             storePFCandidates = cms.bool(True),
                             storeGunParticles = cms.bool(True),
                             readGenParticles = cms.bool(True),
                             layerClusterPtThreshold = cms.double(-1),  # All LayerCluster belonging to a multicluster are saved; this Pt threshold applied to the others
                             TestParticleFilter = ParticleFilterBlock.ParticleFilter
)

process.ana.TestParticleFilter.protonEMin = cms.double(100000)
process.ana.TestParticleFilter.etaMax = cms.double(3.1)

process.TFileService = cms.Service("TFileService",
                                   fileName = cms.string("hgcalNtuple.root")

                                   )
# The clustering algorithm has been changed
reRunClustering = False

if reRunClustering:
    #process.hgcalLayerClusters.minClusters = cms.uint32(0)
    #process.hgcalLayerClusters.realSpaceCone = cms.bool(True)
    #process.hgcalLayerClusters.multiclusterRadius = cms.double(2.)  # in cm if realSpaceCone is true
    #process.hgcalLayerClusters.dependSensor = cms.bool(True)
    #process.hgcalLayerClusters.ecut = cms.double(3.)  # multiple of sigma noise if dependSensor is true
    #process.hgcalLayerClusters.kappa = cms.double(9.)  # multiple of sigma noise if dependSensor is true
    #process.hgcalLayerClusters.deltac = cms.vdouble(2.,3.,5.) #specify delta c for each subdetector separately
    process.p = cms.Path(process.hgcalLayerClusters+process.ana)
else:
    process.p = cms.Path(process.ana)
