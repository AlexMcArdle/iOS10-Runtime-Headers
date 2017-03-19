/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPMapLocation : PBCodable <NSCopying> {
    GEOLatLng * _coordinate;
    struct { 
        unsigned int zoomLevel : 1; 
    }  _has;
    NSData * _image;
    GEOPDViewportInfo * _viewportInfo;
    float  _zoomLevel;
}

@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) bool hasZoomLevel;
@property (nonatomic, retain) NSData *image;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) float zoomLevel;

- (void)_setMapMode:(int)arg1 region:(id)arg2;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCoordinate;
- (bool)hasImage;
- (bool)hasViewportInfo;
- (bool)hasZoomLevel;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasZoomLevel:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (void)setZoomLevel:(float)arg1;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;
- (float)zoomLevel;

@end