/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPhoto : PBCodable <NSCopying> {
    NSString * _photoId;
    NSMutableArray * _photoVersions;
}

@property (nonatomic, readonly) bool hasPhotoId;
@property (nonatomic, retain) NSString *photoId;
@property (nonatomic, retain) NSMutableArray *photoVersions;

+ (Class)photoVersionType;
+ (id)photosForPlaceData:(id)arg1;

- (void)addPhotoVersion:(id)arg1;
- (id)bestURL;
- (void)clearPhotoVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPhotoId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoId;
- (id)photoVersionAtIndex:(unsigned long long)arg1;
- (id)photoVersions;
- (unsigned long long)photoVersionsCount;
- (bool)readFrom:(id)arg1;
- (void)setPhotoId:(id)arg1;
- (void)setPhotoVersions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
