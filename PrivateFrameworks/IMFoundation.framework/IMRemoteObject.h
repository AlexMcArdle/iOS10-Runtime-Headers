/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMRemoteObject : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) bool forceSecureCoding;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic) int pid;
@property (nonatomic, readonly) NSString *portName;
@property (nonatomic, retain) NSString *processName;

+ (void)_registerIMRemoteObject:(id)arg1;
+ (id)_remoteObjects;
+ (void)_unregisterIMRemoteObject:(id)arg1;
+ (void)initialize;

- (void)_cleanupMachBitsCanPost:(bool)arg1;
- (id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(bool)arg4 forceSecureCoding:(bool)arg5;
- (void)_portDidBecomeInvalid;
- (id)_queue;
- (void)_systemShutdown:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (bool)forceSecureCoding;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)forwardXPCObject:(id)arg1 messageContext:(id)arg2;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(bool)arg3;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(bool)arg3 forceSecureCoding:(bool)arg4;
- (id)initWithPortName:(id)arg1 protocol:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (id)methodSignatureForSelector:(SEL)arg1;
- (int)pid;
- (id)portName;
- (id)processName;
- (void)setPid:(int)arg1;
- (void)setPortName:(id)arg1;
- (void)setProcessName:(id)arg1;

@end
