/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaRemoteServiceClient : NSObject {
    NSArray * _externalScreenTypeNotificationObservers;
    NSArray * _nowPlayingNotificationObservers;
    NSArray * _originNotificationObservers;
    bool  _receivesExternalScreenTypeChangedNotifications;
    bool  _receivesOriginChangedNotifications;
    bool  _receivesPlaybackErrorNotifications;
    bool  _receivesRoutesChangedNotifications;
    bool  _receivesSupportedCommandsNotifications;
    bool  _receivesVoiceInputRecordingStateNotifications;
    unsigned long long  _registeredNowPlayingObservers;
    NSMutableArray * _registeredOrigins;
    MRAVRoutingClientController * _routingClientController;
    NSArray * _routingNotificationObservers;
    NSObject<OS_dispatch_queue> * _serialQueue;
    struct MRMediaRemoteService { } * _service;
    MSVDistributedNotificationObserver * _televisionIsPairingAllowedChangedObserver;
    MSVDistributedNotificationObserver * _televisionPairedDevicesChangedObserver;
    NSMutableDictionary * _transactionSources;
    NSArray * _voiceInputNotificationObservers;
}

@property (nonatomic, retain) NSArray *externalScreenTypeNotificationObservers;
@property (nonatomic, retain) NSArray *nowPlayingNotificationObservers;
@property (nonatomic, retain) NSArray *originNotificationObservers;
@property (nonatomic) bool receivesExternalScreenTypeChangedNotifications;
@property (nonatomic) bool receivesOriginChangedNotifications;
@property (nonatomic) bool receivesPlaybackErrorNotifications;
@property (nonatomic) bool receivesRoutesChangedNotifications;
@property (nonatomic) bool receivesSupportedCommandsNotifications;
@property (nonatomic) bool receivesVoiceInputRecordingStateNotifications;
@property (getter=isRegisteredForNowPlayingNotifications, nonatomic, readonly) bool registeredForNowPlayingNotifications;
@property (nonatomic, readonly) NSArray *registeredOrigins;
@property (nonatomic, retain) NSArray *routingNotificationObservers;
@property (nonatomic, readonly) struct MRMediaRemoteService { }*service;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serviceQueue;
@property (nonatomic, retain) NSArray *voiceInputNotificationObservers;

+ (id)sharedServiceClient;

- (void)dealloc;
- (id)externalScreenTypeNotificationObservers;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isRegisteredForNowPlayingNotifications;
- (id)nowPlayingNotificationObservers;
- (id)originNotificationObservers;
- (bool)receivesExternalScreenTypeChangedNotifications;
- (bool)receivesOriginChangedNotifications;
- (bool)receivesPlaybackErrorNotifications;
- (bool)receivesRoutesChangedNotifications;
- (bool)receivesSupportedCommandsNotifications;
- (bool)receivesVoiceInputRecordingStateNotifications;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
- (void)registerOrigin:(struct _MROrigin { }*)arg1 withCompletion:(id /* block */)arg2;
- (id)registeredOrigins;
- (id)routingNotificationObservers;
- (void)sendTransaction:(unsigned long long)arg1 withData:(id)arg2 forOrigin:(struct _MROrigin { }*)arg3;
- (struct MRMediaRemoteService { }*)service;
- (id)serviceQueue;
- (void)setExternalScreenTypeNotificationObservers:(id)arg1;
- (void)setNowPlayingNotificationObservers:(id)arg1;
- (void)setOriginNotificationObservers:(id)arg1;
- (void)setReceivesExternalScreenTypeChangedNotifications:(bool)arg1;
- (void)setReceivesOriginChangedNotifications:(bool)arg1;
- (void)setReceivesPlaybackErrorNotifications:(bool)arg1;
- (void)setReceivesRoutesChangedNotifications:(bool)arg1;
- (void)setReceivesSupportedCommandsNotifications:(bool)arg1;
- (void)setReceivesVoiceInputRecordingStateNotifications:(bool)arg1;
- (void)setRoutingNotificationObservers:(id)arg1;
- (void)setVoiceInputNotificationObservers:(id)arg1;
- (void)unregisterAllOriginsWithCompletion:(id /* block */)arg1;
- (void)unregisterForNowPlayingNotifications;
- (void)unregisterOrigin:(struct _MROrigin { }*)arg1 withCompletion:(id /* block */)arg2;
- (id)voiceInputNotificationObservers;

@end