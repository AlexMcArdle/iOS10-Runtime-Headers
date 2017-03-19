/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentResponse : NSObject <INCacheableContainer, INIntentResponseExport, NSCopying, NSSecureCoding> {
    _INPBIntentResponse * _backingStore;
    long long  _code;
    _INPBGenericIntentResponse * _responseMessagePBRepresentation;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly, copy) _INPBIntentResponse *backingStore;
@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldOpenContainingApplication;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUserActivity *userActivity;

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (void)load;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_impl;
- (long long)_intentHandlingStatus;
- (id)_payloadResponseMessageData;
- (id)_responseMessagePBRepresentation;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (id)backingStore;
- (id)cacheableObjects;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)propertiesByName;
- (id)protoData;
- (void)setPropertiesByName:(id)arg1;
- (void)setShouldOpenContainingApplication:(bool)arg1;
- (bool)shouldOpenContainingApplication;
- (id)userActivity;

@end
