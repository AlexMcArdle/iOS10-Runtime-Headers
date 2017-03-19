/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMultiLocalizedString : PBCodable <NSCopying> {
    NSMutableArray * _localizedStrings;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *localizedStrings;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)localizedStringType;

- (void)addLocalizedString:(id)arg1;
- (id)bestLocalizedName;
- (void)clearLocalizedStrings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedStringAtIndex:(unsigned long long)arg1;
- (id)localizedStrings;
- (unsigned long long)localizedStringsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocalizedStrings:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
