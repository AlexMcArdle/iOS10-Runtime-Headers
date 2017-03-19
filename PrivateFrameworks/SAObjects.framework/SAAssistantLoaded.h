/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *dataAnchor;
@property (nonatomic, copy) NSNumber *requestSync;
@property (nonatomic, copy) NSArray *syncAnchors;
@property (nonatomic, copy) NSString *version;

+ (id)assistantLoaded;
+ (id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2;

- (id)dataAnchor;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)requestSync;
- (bool)requiresResponse;
- (void)setDataAnchor:(id)arg1;
- (void)setRequestSync:(id)arg1;
- (void)setSyncAnchors:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)syncAnchors;
- (id)version;

@end
