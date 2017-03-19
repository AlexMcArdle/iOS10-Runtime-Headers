/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCorrectedSearch : PBCodable <NSCopying> {
    unsigned int  _correctedSearchResultIndex;
    struct { 
        unsigned int correctedSearchResultIndex : 1; 
        unsigned int originalSearchResultIndex : 1; 
    }  _has;
    unsigned int  _originalSearchResultIndex;
    GEOPDPlaceRequest * _placeRequest;
    GEOPDPlaceResponse * _placeResponse;
    GEOPlaceSearchRequest * _placeSearchRequest;
    GEOPlaceSearchResponse * _placeSearchResponse;
    NSString * _preferredSearchDisplayLocation;
}

@property (nonatomic) unsigned int correctedSearchResultIndex;
@property (nonatomic) bool hasCorrectedSearchResultIndex;
@property (nonatomic) bool hasOriginalSearchResultIndex;
@property (nonatomic, readonly) bool hasPlaceRequest;
@property (nonatomic, readonly) bool hasPlaceResponse;
@property (nonatomic, readonly) bool hasPlaceSearchRequest;
@property (nonatomic, readonly) bool hasPlaceSearchResponse;
@property (nonatomic, readonly) bool hasPreferredSearchDisplayLocation;
@property (nonatomic) unsigned int originalSearchResultIndex;
@property (nonatomic, retain) GEOPDPlaceRequest *placeRequest;
@property (nonatomic, retain) GEOPDPlaceResponse *placeResponse;
@property (nonatomic, retain) GEOPlaceSearchRequest *placeSearchRequest;
@property (nonatomic, retain) GEOPlaceSearchResponse *placeSearchResponse;
@property (nonatomic, retain) NSString *preferredSearchDisplayLocation;

- (bool)containsReportableData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)correctedSearchResultIndex;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrectedSearchResultIndex;
- (bool)hasOriginalSearchResultIndex;
- (bool)hasPlaceRequest;
- (bool)hasPlaceResponse;
- (bool)hasPlaceSearchRequest;
- (bool)hasPlaceSearchResponse;
- (bool)hasPreferredSearchDisplayLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)originalSearchResultIndex;
- (id)placeRequest;
- (id)placeResponse;
- (id)placeSearchRequest;
- (id)placeSearchResponse;
- (id)preferredSearchDisplayLocation;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedSearchResultIndex:(unsigned int)arg1;
- (void)setHasCorrectedSearchResultIndex:(bool)arg1;
- (void)setHasOriginalSearchResultIndex:(bool)arg1;
- (void)setOriginalSearchResultIndex:(unsigned int)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)setPlaceResponse:(id)arg1;
- (void)setPlaceSearchRequest:(id)arg1;
- (void)setPlaceSearchResponse:(id)arg1;
- (void)setPreferredSearchDisplayLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end