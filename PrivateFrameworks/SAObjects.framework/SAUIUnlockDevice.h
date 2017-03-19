/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *cancellationCommands;
@property (nonatomic, copy) NSArray *failureCommands;
@property (nonatomic, copy) NSArray *successCommands;

+ (id)unlockDevice;
+ (id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2;

- (id)cancellationCommands;
- (id)encodedClassName;
- (id)failureCommands;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCancellationCommands:(id)arg1;
- (void)setFailureCommands:(id)arg1;
- (void)setSuccessCommands:(id)arg1;
- (id)successCommands;

@end