/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreTCPECNInterfaceStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int interfaceType : 1; 
        unsigned int ipProtocol : 1; 
        unsigned int tcpECNIntClientSetup : 1; 
        unsigned int tcpECNIntClientSuccess : 1; 
        unsigned int tcpECNIntConnNoPLCE : 1; 
        unsigned int tcpECNIntConnPLCE : 1; 
        unsigned int tcpECNIntConnPLNoCE : 1; 
        unsigned int tcpECNIntConnRecvCE : 1; 
        unsigned int tcpECNIntConnRecvECE : 1; 
        unsigned int tcpECNIntFallbackCE : 1; 
        unsigned int tcpECNIntFallbackReorder : 1; 
        unsigned int tcpECNIntFallbackSynLoss : 1; 
        unsigned int tcpECNIntNotSupportedPeer : 1; 
        unsigned int tcpECNIntOffAvgRTT : 1; 
        unsigned int tcpECNIntOffDropRst : 1; 
        unsigned int tcpECNIntOffDropRxmt : 1; 
        unsigned int tcpECNIntOffOOBPer : 1; 
        unsigned int tcpECNIntOffRTTVar : 1; 
        unsigned int tcpECNIntOffReorderPer : 1; 
        unsigned int tcpECNIntOffRxmtPer : 1; 
        unsigned int tcpECNIntOffSACKE : 1; 
        unsigned int tcpECNIntOffTotalOOPkts : 1; 
        unsigned int tcpECNIntOffTotalRxPkts : 1; 
        unsigned int tcpECNIntOffTotalRxmtPkts : 1; 
        unsigned int tcpECNIntOffTotalTxPkts : 1; 
        unsigned int tcpECNIntOnAvgRTT : 1; 
        unsigned int tcpECNIntOnDropRst : 1; 
        unsigned int tcpECNIntOnDropRxmt : 1; 
        unsigned int tcpECNIntOnOOBPer : 1; 
        unsigned int tcpECNIntOnRTTVar : 1; 
        unsigned int tcpECNIntOnReorderPer : 1; 
        unsigned int tcpECNIntOnSACKE : 1; 
        unsigned int tcpECNIntOnTotalOOPkts : 1; 
        unsigned int tcpECNIntOnTotalRxPkts : 1; 
        unsigned int tcpECNIntOnTotalRxmtPkts : 1; 
        unsigned int tcpECNIntOnTotalTxPkts : 1; 
        unsigned int tcpECNIntRecvCE : 1; 
        unsigned int tcpECNIntRecvECE : 1; 
        unsigned int tcpECNIntRxmtPer : 1; 
        unsigned int tcpECNIntSentECE : 1; 
        unsigned int tcpECNIntServerSetup : 1; 
        unsigned int tcpECNIntServerSuccess : 1; 
        unsigned int tcpECNIntSynAckLost : 1; 
        unsigned int tcpECNIntSynLost : 1; 
        unsigned int tcpECNIntTotalConnections : 1; 
        unsigned int tcpUnsentDataAtSleepCnt : 1; 
    }  _has;
    unsigned long long  _interfaceType;
    unsigned long long  _ipProtocol;
    unsigned long long  _tcpECNIntClientSetup;
    unsigned long long  _tcpECNIntClientSuccess;
    unsigned long long  _tcpECNIntConnNoPLCE;
    unsigned long long  _tcpECNIntConnPLCE;
    unsigned long long  _tcpECNIntConnPLNoCE;
    unsigned long long  _tcpECNIntConnRecvCE;
    unsigned long long  _tcpECNIntConnRecvECE;
    unsigned long long  _tcpECNIntFallbackCE;
    unsigned long long  _tcpECNIntFallbackReorder;
    unsigned long long  _tcpECNIntFallbackSynLoss;
    unsigned long long  _tcpECNIntNotSupportedPeer;
    unsigned long long  _tcpECNIntOffAvgRTT;
    unsigned long long  _tcpECNIntOffDropRst;
    unsigned long long  _tcpECNIntOffDropRxmt;
    unsigned long long  _tcpECNIntOffOOBPer;
    unsigned long long  _tcpECNIntOffRTTVar;
    unsigned long long  _tcpECNIntOffReorderPer;
    unsigned long long  _tcpECNIntOffRxmtPer;
    unsigned long long  _tcpECNIntOffSACKE;
    unsigned long long  _tcpECNIntOffTotalOOPkts;
    unsigned long long  _tcpECNIntOffTotalRxPkts;
    unsigned long long  _tcpECNIntOffTotalRxmtPkts;
    unsigned long long  _tcpECNIntOffTotalTxPkts;
    unsigned long long  _tcpECNIntOnAvgRTT;
    unsigned long long  _tcpECNIntOnDropRst;
    unsigned long long  _tcpECNIntOnDropRxmt;
    unsigned long long  _tcpECNIntOnOOBPer;
    unsigned long long  _tcpECNIntOnRTTVar;
    unsigned long long  _tcpECNIntOnReorderPer;
    unsigned long long  _tcpECNIntOnSACKE;
    unsigned long long  _tcpECNIntOnTotalOOPkts;
    unsigned long long  _tcpECNIntOnTotalRxPkts;
    unsigned long long  _tcpECNIntOnTotalRxmtPkts;
    unsigned long long  _tcpECNIntOnTotalTxPkts;
    unsigned long long  _tcpECNIntRecvCE;
    unsigned long long  _tcpECNIntRecvECE;
    unsigned long long  _tcpECNIntRxmtPer;
    unsigned long long  _tcpECNIntSentECE;
    unsigned long long  _tcpECNIntServerSetup;
    unsigned long long  _tcpECNIntServerSuccess;
    unsigned long long  _tcpECNIntSynAckLost;
    unsigned long long  _tcpECNIntSynLost;
    unsigned long long  _tcpECNIntTotalConnections;
    unsigned long long  _tcpUnsentDataAtSleepCnt;
}

@property (nonatomic) bool hasInterfaceType;
@property (nonatomic) bool hasIpProtocol;
@property (nonatomic) bool hasTcpECNIntClientSetup;
@property (nonatomic) bool hasTcpECNIntClientSuccess;
@property (nonatomic) bool hasTcpECNIntConnNoPLCE;
@property (nonatomic) bool hasTcpECNIntConnPLCE;
@property (nonatomic) bool hasTcpECNIntConnPLNoCE;
@property (nonatomic) bool hasTcpECNIntConnRecvCE;
@property (nonatomic) bool hasTcpECNIntConnRecvECE;
@property (nonatomic) bool hasTcpECNIntFallbackCE;
@property (nonatomic) bool hasTcpECNIntFallbackReorder;
@property (nonatomic) bool hasTcpECNIntFallbackSynLoss;
@property (nonatomic) bool hasTcpECNIntNotSupportedPeer;
@property (nonatomic) bool hasTcpECNIntOffAvgRTT;
@property (nonatomic) bool hasTcpECNIntOffDropRst;
@property (nonatomic) bool hasTcpECNIntOffDropRxmt;
@property (nonatomic) bool hasTcpECNIntOffOOBPer;
@property (nonatomic) bool hasTcpECNIntOffRTTVar;
@property (nonatomic) bool hasTcpECNIntOffReorderPer;
@property (nonatomic) bool hasTcpECNIntOffRxmtPer;
@property (nonatomic) bool hasTcpECNIntOffSACKE;
@property (nonatomic) bool hasTcpECNIntOffTotalOOPkts;
@property (nonatomic) bool hasTcpECNIntOffTotalRxPkts;
@property (nonatomic) bool hasTcpECNIntOffTotalRxmtPkts;
@property (nonatomic) bool hasTcpECNIntOffTotalTxPkts;
@property (nonatomic) bool hasTcpECNIntOnAvgRTT;
@property (nonatomic) bool hasTcpECNIntOnDropRst;
@property (nonatomic) bool hasTcpECNIntOnDropRxmt;
@property (nonatomic) bool hasTcpECNIntOnOOBPer;
@property (nonatomic) bool hasTcpECNIntOnRTTVar;
@property (nonatomic) bool hasTcpECNIntOnReorderPer;
@property (nonatomic) bool hasTcpECNIntOnSACKE;
@property (nonatomic) bool hasTcpECNIntOnTotalOOPkts;
@property (nonatomic) bool hasTcpECNIntOnTotalRxPkts;
@property (nonatomic) bool hasTcpECNIntOnTotalRxmtPkts;
@property (nonatomic) bool hasTcpECNIntOnTotalTxPkts;
@property (nonatomic) bool hasTcpECNIntRecvCE;
@property (nonatomic) bool hasTcpECNIntRecvECE;
@property (nonatomic) bool hasTcpECNIntRxmtPer;
@property (nonatomic) bool hasTcpECNIntSentECE;
@property (nonatomic) bool hasTcpECNIntServerSetup;
@property (nonatomic) bool hasTcpECNIntServerSuccess;
@property (nonatomic) bool hasTcpECNIntSynAckLost;
@property (nonatomic) bool hasTcpECNIntSynLost;
@property (nonatomic) bool hasTcpECNIntTotalConnections;
@property (nonatomic) bool hasTcpUnsentDataAtSleepCnt;
@property (nonatomic) unsigned long long interfaceType;
@property (nonatomic) unsigned long long ipProtocol;
@property (nonatomic) unsigned long long tcpECNIntClientSetup;
@property (nonatomic) unsigned long long tcpECNIntClientSuccess;
@property (nonatomic) unsigned long long tcpECNIntConnNoPLCE;
@property (nonatomic) unsigned long long tcpECNIntConnPLCE;
@property (nonatomic) unsigned long long tcpECNIntConnPLNoCE;
@property (nonatomic) unsigned long long tcpECNIntConnRecvCE;
@property (nonatomic) unsigned long long tcpECNIntConnRecvECE;
@property (nonatomic) unsigned long long tcpECNIntFallbackCE;
@property (nonatomic) unsigned long long tcpECNIntFallbackReorder;
@property (nonatomic) unsigned long long tcpECNIntFallbackSynLoss;
@property (nonatomic) unsigned long long tcpECNIntNotSupportedPeer;
@property (nonatomic) unsigned long long tcpECNIntOffAvgRTT;
@property (nonatomic) unsigned long long tcpECNIntOffDropRst;
@property (nonatomic) unsigned long long tcpECNIntOffDropRxmt;
@property (nonatomic) unsigned long long tcpECNIntOffOOBPer;
@property (nonatomic) unsigned long long tcpECNIntOffRTTVar;
@property (nonatomic) unsigned long long tcpECNIntOffReorderPer;
@property (nonatomic) unsigned long long tcpECNIntOffRxmtPer;
@property (nonatomic) unsigned long long tcpECNIntOffSACKE;
@property (nonatomic) unsigned long long tcpECNIntOffTotalOOPkts;
@property (nonatomic) unsigned long long tcpECNIntOffTotalRxPkts;
@property (nonatomic) unsigned long long tcpECNIntOffTotalRxmtPkts;
@property (nonatomic) unsigned long long tcpECNIntOffTotalTxPkts;
@property (nonatomic) unsigned long long tcpECNIntOnAvgRTT;
@property (nonatomic) unsigned long long tcpECNIntOnDropRst;
@property (nonatomic) unsigned long long tcpECNIntOnDropRxmt;
@property (nonatomic) unsigned long long tcpECNIntOnOOBPer;
@property (nonatomic) unsigned long long tcpECNIntOnRTTVar;
@property (nonatomic) unsigned long long tcpECNIntOnReorderPer;
@property (nonatomic) unsigned long long tcpECNIntOnSACKE;
@property (nonatomic) unsigned long long tcpECNIntOnTotalOOPkts;
@property (nonatomic) unsigned long long tcpECNIntOnTotalRxPkts;
@property (nonatomic) unsigned long long tcpECNIntOnTotalRxmtPkts;
@property (nonatomic) unsigned long long tcpECNIntOnTotalTxPkts;
@property (nonatomic) unsigned long long tcpECNIntRecvCE;
@property (nonatomic) unsigned long long tcpECNIntRecvECE;
@property (nonatomic) unsigned long long tcpECNIntRxmtPer;
@property (nonatomic) unsigned long long tcpECNIntSentECE;
@property (nonatomic) unsigned long long tcpECNIntServerSetup;
@property (nonatomic) unsigned long long tcpECNIntServerSuccess;
@property (nonatomic) unsigned long long tcpECNIntSynAckLost;
@property (nonatomic) unsigned long long tcpECNIntSynLost;
@property (nonatomic) unsigned long long tcpECNIntTotalConnections;
@property (nonatomic) unsigned long long tcpUnsentDataAtSleepCnt;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInterfaceType;
- (bool)hasIpProtocol;
- (bool)hasTcpECNIntClientSetup;
- (bool)hasTcpECNIntClientSuccess;
- (bool)hasTcpECNIntConnNoPLCE;
- (bool)hasTcpECNIntConnPLCE;
- (bool)hasTcpECNIntConnPLNoCE;
- (bool)hasTcpECNIntConnRecvCE;
- (bool)hasTcpECNIntConnRecvECE;
- (bool)hasTcpECNIntFallbackCE;
- (bool)hasTcpECNIntFallbackReorder;
- (bool)hasTcpECNIntFallbackSynLoss;
- (bool)hasTcpECNIntNotSupportedPeer;
- (bool)hasTcpECNIntOffAvgRTT;
- (bool)hasTcpECNIntOffDropRst;
- (bool)hasTcpECNIntOffDropRxmt;
- (bool)hasTcpECNIntOffOOBPer;
- (bool)hasTcpECNIntOffRTTVar;
- (bool)hasTcpECNIntOffReorderPer;
- (bool)hasTcpECNIntOffRxmtPer;
- (bool)hasTcpECNIntOffSACKE;
- (bool)hasTcpECNIntOffTotalOOPkts;
- (bool)hasTcpECNIntOffTotalRxPkts;
- (bool)hasTcpECNIntOffTotalRxmtPkts;
- (bool)hasTcpECNIntOffTotalTxPkts;
- (bool)hasTcpECNIntOnAvgRTT;
- (bool)hasTcpECNIntOnDropRst;
- (bool)hasTcpECNIntOnDropRxmt;
- (bool)hasTcpECNIntOnOOBPer;
- (bool)hasTcpECNIntOnRTTVar;
- (bool)hasTcpECNIntOnReorderPer;
- (bool)hasTcpECNIntOnSACKE;
- (bool)hasTcpECNIntOnTotalOOPkts;
- (bool)hasTcpECNIntOnTotalRxPkts;
- (bool)hasTcpECNIntOnTotalRxmtPkts;
- (bool)hasTcpECNIntOnTotalTxPkts;
- (bool)hasTcpECNIntRecvCE;
- (bool)hasTcpECNIntRecvECE;
- (bool)hasTcpECNIntRxmtPer;
- (bool)hasTcpECNIntSentECE;
- (bool)hasTcpECNIntServerSetup;
- (bool)hasTcpECNIntServerSuccess;
- (bool)hasTcpECNIntSynAckLost;
- (bool)hasTcpECNIntSynLost;
- (bool)hasTcpECNIntTotalConnections;
- (bool)hasTcpUnsentDataAtSleepCnt;
- (unsigned long long)hash;
- (unsigned long long)interfaceType;
- (unsigned long long)ipProtocol;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasInterfaceType:(bool)arg1;
- (void)setHasIpProtocol:(bool)arg1;
- (void)setHasTcpECNIntClientSetup:(bool)arg1;
- (void)setHasTcpECNIntClientSuccess:(bool)arg1;
- (void)setHasTcpECNIntConnNoPLCE:(bool)arg1;
- (void)setHasTcpECNIntConnPLCE:(bool)arg1;
- (void)setHasTcpECNIntConnPLNoCE:(bool)arg1;
- (void)setHasTcpECNIntConnRecvCE:(bool)arg1;
- (void)setHasTcpECNIntConnRecvECE:(bool)arg1;
- (void)setHasTcpECNIntFallbackCE:(bool)arg1;
- (void)setHasTcpECNIntFallbackReorder:(bool)arg1;
- (void)setHasTcpECNIntFallbackSynLoss:(bool)arg1;
- (void)setHasTcpECNIntNotSupportedPeer:(bool)arg1;
- (void)setHasTcpECNIntOffAvgRTT:(bool)arg1;
- (void)setHasTcpECNIntOffDropRst:(bool)arg1;
- (void)setHasTcpECNIntOffDropRxmt:(bool)arg1;
- (void)setHasTcpECNIntOffOOBPer:(bool)arg1;
- (void)setHasTcpECNIntOffRTTVar:(bool)arg1;
- (void)setHasTcpECNIntOffReorderPer:(bool)arg1;
- (void)setHasTcpECNIntOffRxmtPer:(bool)arg1;
- (void)setHasTcpECNIntOffSACKE:(bool)arg1;
- (void)setHasTcpECNIntOffTotalOOPkts:(bool)arg1;
- (void)setHasTcpECNIntOffTotalRxPkts:(bool)arg1;
- (void)setHasTcpECNIntOffTotalRxmtPkts:(bool)arg1;
- (void)setHasTcpECNIntOffTotalTxPkts:(bool)arg1;
- (void)setHasTcpECNIntOnAvgRTT:(bool)arg1;
- (void)setHasTcpECNIntOnDropRst:(bool)arg1;
- (void)setHasTcpECNIntOnDropRxmt:(bool)arg1;
- (void)setHasTcpECNIntOnOOBPer:(bool)arg1;
- (void)setHasTcpECNIntOnRTTVar:(bool)arg1;
- (void)setHasTcpECNIntOnReorderPer:(bool)arg1;
- (void)setHasTcpECNIntOnSACKE:(bool)arg1;
- (void)setHasTcpECNIntOnTotalOOPkts:(bool)arg1;
- (void)setHasTcpECNIntOnTotalRxPkts:(bool)arg1;
- (void)setHasTcpECNIntOnTotalRxmtPkts:(bool)arg1;
- (void)setHasTcpECNIntOnTotalTxPkts:(bool)arg1;
- (void)setHasTcpECNIntRecvCE:(bool)arg1;
- (void)setHasTcpECNIntRecvECE:(bool)arg1;
- (void)setHasTcpECNIntRxmtPer:(bool)arg1;
- (void)setHasTcpECNIntSentECE:(bool)arg1;
- (void)setHasTcpECNIntServerSetup:(bool)arg1;
- (void)setHasTcpECNIntServerSuccess:(bool)arg1;
- (void)setHasTcpECNIntSynAckLost:(bool)arg1;
- (void)setHasTcpECNIntSynLost:(bool)arg1;
- (void)setHasTcpECNIntTotalConnections:(bool)arg1;
- (void)setHasTcpUnsentDataAtSleepCnt:(bool)arg1;
- (void)setInterfaceType:(unsigned long long)arg1;
- (void)setIpProtocol:(unsigned long long)arg1;
- (void)setTcpECNIntClientSetup:(unsigned long long)arg1;
- (void)setTcpECNIntClientSuccess:(unsigned long long)arg1;
- (void)setTcpECNIntConnNoPLCE:(unsigned long long)arg1;
- (void)setTcpECNIntConnPLCE:(unsigned long long)arg1;
- (void)setTcpECNIntConnPLNoCE:(unsigned long long)arg1;
- (void)setTcpECNIntConnRecvCE:(unsigned long long)arg1;
- (void)setTcpECNIntConnRecvECE:(unsigned long long)arg1;
- (void)setTcpECNIntFallbackCE:(unsigned long long)arg1;
- (void)setTcpECNIntFallbackReorder:(unsigned long long)arg1;
- (void)setTcpECNIntFallbackSynLoss:(unsigned long long)arg1;
- (void)setTcpECNIntNotSupportedPeer:(unsigned long long)arg1;
- (void)setTcpECNIntOffAvgRTT:(unsigned long long)arg1;
- (void)setTcpECNIntOffDropRst:(unsigned long long)arg1;
- (void)setTcpECNIntOffDropRxmt:(unsigned long long)arg1;
- (void)setTcpECNIntOffOOBPer:(unsigned long long)arg1;
- (void)setTcpECNIntOffRTTVar:(unsigned long long)arg1;
- (void)setTcpECNIntOffReorderPer:(unsigned long long)arg1;
- (void)setTcpECNIntOffRxmtPer:(unsigned long long)arg1;
- (void)setTcpECNIntOffSACKE:(unsigned long long)arg1;
- (void)setTcpECNIntOffTotalOOPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOffTotalRxPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOffTotalRxmtPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOffTotalTxPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOnAvgRTT:(unsigned long long)arg1;
- (void)setTcpECNIntOnDropRst:(unsigned long long)arg1;
- (void)setTcpECNIntOnDropRxmt:(unsigned long long)arg1;
- (void)setTcpECNIntOnOOBPer:(unsigned long long)arg1;
- (void)setTcpECNIntOnRTTVar:(unsigned long long)arg1;
- (void)setTcpECNIntOnReorderPer:(unsigned long long)arg1;
- (void)setTcpECNIntOnSACKE:(unsigned long long)arg1;
- (void)setTcpECNIntOnTotalOOPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOnTotalRxPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOnTotalRxmtPkts:(unsigned long long)arg1;
- (void)setTcpECNIntOnTotalTxPkts:(unsigned long long)arg1;
- (void)setTcpECNIntRecvCE:(unsigned long long)arg1;
- (void)setTcpECNIntRecvECE:(unsigned long long)arg1;
- (void)setTcpECNIntRxmtPer:(unsigned long long)arg1;
- (void)setTcpECNIntSentECE:(unsigned long long)arg1;
- (void)setTcpECNIntServerSetup:(unsigned long long)arg1;
- (void)setTcpECNIntServerSuccess:(unsigned long long)arg1;
- (void)setTcpECNIntSynAckLost:(unsigned long long)arg1;
- (void)setTcpECNIntSynLost:(unsigned long long)arg1;
- (void)setTcpECNIntTotalConnections:(unsigned long long)arg1;
- (void)setTcpUnsentDataAtSleepCnt:(unsigned long long)arg1;
- (unsigned long long)tcpECNIntClientSetup;
- (unsigned long long)tcpECNIntClientSuccess;
- (unsigned long long)tcpECNIntConnNoPLCE;
- (unsigned long long)tcpECNIntConnPLCE;
- (unsigned long long)tcpECNIntConnPLNoCE;
- (unsigned long long)tcpECNIntConnRecvCE;
- (unsigned long long)tcpECNIntConnRecvECE;
- (unsigned long long)tcpECNIntFallbackCE;
- (unsigned long long)tcpECNIntFallbackReorder;
- (unsigned long long)tcpECNIntFallbackSynLoss;
- (unsigned long long)tcpECNIntNotSupportedPeer;
- (unsigned long long)tcpECNIntOffAvgRTT;
- (unsigned long long)tcpECNIntOffDropRst;
- (unsigned long long)tcpECNIntOffDropRxmt;
- (unsigned long long)tcpECNIntOffOOBPer;
- (unsigned long long)tcpECNIntOffRTTVar;
- (unsigned long long)tcpECNIntOffReorderPer;
- (unsigned long long)tcpECNIntOffRxmtPer;
- (unsigned long long)tcpECNIntOffSACKE;
- (unsigned long long)tcpECNIntOffTotalOOPkts;
- (unsigned long long)tcpECNIntOffTotalRxPkts;
- (unsigned long long)tcpECNIntOffTotalRxmtPkts;
- (unsigned long long)tcpECNIntOffTotalTxPkts;
- (unsigned long long)tcpECNIntOnAvgRTT;
- (unsigned long long)tcpECNIntOnDropRst;
- (unsigned long long)tcpECNIntOnDropRxmt;
- (unsigned long long)tcpECNIntOnOOBPer;
- (unsigned long long)tcpECNIntOnRTTVar;
- (unsigned long long)tcpECNIntOnReorderPer;
- (unsigned long long)tcpECNIntOnSACKE;
- (unsigned long long)tcpECNIntOnTotalOOPkts;
- (unsigned long long)tcpECNIntOnTotalRxPkts;
- (unsigned long long)tcpECNIntOnTotalRxmtPkts;
- (unsigned long long)tcpECNIntOnTotalTxPkts;
- (unsigned long long)tcpECNIntRecvCE;
- (unsigned long long)tcpECNIntRecvECE;
- (unsigned long long)tcpECNIntRxmtPer;
- (unsigned long long)tcpECNIntSentECE;
- (unsigned long long)tcpECNIntServerSetup;
- (unsigned long long)tcpECNIntServerSuccess;
- (unsigned long long)tcpECNIntSynAckLost;
- (unsigned long long)tcpECNIntSynLost;
- (unsigned long long)tcpECNIntTotalConnections;
- (unsigned long long)tcpUnsentDataAtSleepCnt;
- (void)writeTo:(id)arg1;

@end
