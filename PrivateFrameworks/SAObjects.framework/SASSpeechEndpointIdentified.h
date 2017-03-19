/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechEndpointIdentified : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endpointTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)speechEndpointIdentified;
+ (id)speechEndpointIdentifiedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endpointTimestamp;
- (id)groupIdentifier;
- (void)setEndpointTimestamp:(id)arg1;

@end
