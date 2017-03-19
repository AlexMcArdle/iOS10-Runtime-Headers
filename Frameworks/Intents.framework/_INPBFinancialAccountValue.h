/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBFinancialAccountValue : PBCodable <NSCopying> {
    _INPBDataString * _accountNickname;
    NSString * _accountNumber;
    int  _accountType;
    struct { 
        unsigned int accountType : 1; 
    }  _has;
    _INPBDataString * _organizationName;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) _INPBDataString *accountNickname;
@property (nonatomic, retain) NSString *accountNumber;
@property (nonatomic) int accountType;
@property (nonatomic, readonly) bool hasAccountNickname;
@property (nonatomic, readonly) bool hasAccountNumber;
@property (nonatomic) bool hasAccountType;
@property (nonatomic, readonly) bool hasOrganizationName;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, retain) _INPBDataString *organizationName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAccountType:(id)arg1;
- (id)accountNickname;
- (id)accountNumber;
- (int)accountType;
- (id)accountTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountNickname;
- (bool)hasAccountNumber;
- (bool)hasAccountType;
- (bool)hasOrganizationName;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)organizationName;
- (bool)readFrom:(id)arg1;
- (void)setAccountNickname:(id)arg1;
- (void)setAccountNumber:(id)arg1;
- (void)setAccountType:(int)arg1;
- (void)setHasAccountType:(bool)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end