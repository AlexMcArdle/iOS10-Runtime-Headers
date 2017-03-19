/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPersonAttribute : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAPerson *object;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SAAceComparable> *typedData;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)personAttribute;
+ (id)personAttributeWithDictionary:(id)arg1 context:(id)arg2;

- (id)data;
- (id)displayText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)object;
- (void)setData:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setTypedData:(id)arg1;
- (id)typedData;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)st_contactAddressValue;

@end
