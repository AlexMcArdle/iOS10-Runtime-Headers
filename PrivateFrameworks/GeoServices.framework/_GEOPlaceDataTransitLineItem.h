/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceDataTransitLineItem : NSObject <GEOTransitLineItem> {
    <GEOTransitAttribution> * _attribution;
    <GEOEncyclopedicInfo> * _encyclopedicInfo;
    bool  _hasEncyclopedicInfo;
    <GEOTransitLine> * _line;
    GEOMapRegion * _mapRegion;
    <GEOMapItemTransitInfo> * _transitInfo;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (nonatomic, readonly) <GEOTransitAttribution> *attribution;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long departureTimeDisplayStyle;
@property (nonatomic, readonly) bool departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (nonatomic, readonly) bool hasEncyclopedicInfo;
@property (nonatomic, readonly) bool hasIncidentComponent;
@property (nonatomic, readonly) bool hasLineColorString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) bool isIncidentsTTLExpired;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *modeArtwork;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) bool showVehicleNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitSystem> *system;

- (id)artwork;
- (id)attribution;
- (void)dealloc;
- (unsigned long long)departureTimeDisplayStyle;
- (bool)departuresAreVehicleSpecific;
- (id)encyclopedicInfo;
- (bool)hasEncyclopedicInfo;
- (bool)hasIncidentComponent;
- (bool)hasLineColorString;
- (id)incidents;
- (id)initWithMapItem:(id)arg1;
- (bool)isIncidentsTTLExpired;
- (id)labelItems;
- (id)lineColorString;
- (id)mapRegion;
- (id)modeArtwork;
- (unsigned long long)muid;
- (id)name;
- (id)operatingHours;
- (bool)showVehicleNumber;
- (id)system;

@end
