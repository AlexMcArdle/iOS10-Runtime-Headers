/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SABaseCommand : AceObject <SAAceCommand, SAAceSerializable>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)baseCommand;
+ (id)baseCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)refId;
- (void)setAceId:(id)arg1;
- (void)setRefId:(id)arg1;

@end
