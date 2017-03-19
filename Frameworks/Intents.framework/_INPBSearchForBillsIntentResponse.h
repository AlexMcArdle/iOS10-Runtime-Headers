/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForBillsIntentResponse : PBCodable <NSCopying> {
    NSMutableArray * _bills;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *bills;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)billsType;
+ (id)options;

- (void).cxx_destruct;
- (void)addBills:(id)arg1;
- (id)bills;
- (id)billsAtIndex:(unsigned long long)arg1;
- (unsigned long long)billsCount;
- (void)clearBills;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBills:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
