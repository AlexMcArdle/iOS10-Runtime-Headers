/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequester : GEOPBSessionRequester {
    bool  _canceled;
    struct { 
        unsigned long long workLoad; 
        double timeWindowStartTime; 
        unsigned long long timeWindowDuration; 
    }  _conditionalConnectionProperties;
    NSString * _debugRequestName;
    bool  _disableReplay;
    bool  _finished;
    bool  _hasConditionalConnectionProperties;
    int  _symptomsAlternateAdviceToken;
    NSThread * _thread;
    NSString * _throttleKey;
    bool  _useBackgroundConnection;
    bool  _usePersistentConnection;
}

@property (nonatomic) struct { unsigned long long x1; double x2; unsigned long long x3; } conditionalConnectionProperties;
@property (nonatomic, retain) NSString *debugRequestName;
@property bool disableReplay;
@property (nonatomic, copy) NSString *throttleKey;

+ (id)_logRequestResponseDirectory;
+ (void)enablePersistentConnection;
+ (void)replayRequests;
+ (void)setAppID:(id)arg1;
+ (void)setLogRequestResponseDirectory:(id)arg1;
+ (void)setOSVersion:(id)arg1;
+ (void)stopAllRequests;

- (void)_applicationDidStopAllRequests:(id)arg1;
- (void)_applicationWantsToReplayRequests:(id)arg1;
- (void)_cleanup;
- (void)_considerRetryingDueToAlternateAdvice;
- (void)_handleResumeOnThread;
- (void)_handleSuspendOnThread;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (void)_tryRerequest;
- (void)cancel;
- (struct { unsigned long long x1; double x2; unsigned long long x3; })conditionalConnectionProperties;
- (void)dealloc;
- (id)debugRequestName;
- (bool)disableReplay;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 useBackgroundConnection:(bool)arg3;
- (id)logRequestToFile;
- (id)logResponseToFile;
- (id)newMutableURLRequestWithURL:(id)arg1;
- (id)persistentSessionConfig;
- (id)requestPreamble;
- (id)sessionWithConnectionProperties:(id)arg1;
- (void)setConditionalConnectionProperties:(struct { unsigned long long x1; double x2; unsigned long long x3; })arg1;
- (void)setDebugRequestName:(id)arg1;
- (void)setDisableReplay:(bool)arg1;
- (void)setNeedsCancel;
- (void)setThrottleKey:(id)arg1;
- (void)start;
- (void)startWithConnectionProperties:(id)arg1;
- (id)throttleKey;

@end
