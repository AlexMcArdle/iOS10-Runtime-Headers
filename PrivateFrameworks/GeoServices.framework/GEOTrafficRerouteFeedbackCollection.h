/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying> {
    NSData * _directionResponseID;
    struct { 
        unsigned int oldRouteHistoricTravelTime : 1; 
        unsigned int oldRouteTravelTime : 1; 
        unsigned int reroutedRouteHistoricTravelTime : 1; 
        unsigned int reroutedRouteTravelTime : 1; 
        unsigned int oldRouteBlocked : 1; 
    }  _has;
    bool  _oldRouteBlocked;
    unsigned int  _oldRouteHistoricTravelTime;
    NSData * _oldRouteID;
    NSMutableArray * _oldRouteIncidents;
    unsigned int  _oldRouteTravelTime;
    unsigned int  _reroutedRouteHistoricTravelTime;
    NSData * _reroutedRouteID;
    unsigned int  _reroutedRouteTravelTime;
}

@property (nonatomic, retain) NSData *directionResponseID;
@property (nonatomic, readonly) bool hasDirectionResponseID;
@property (nonatomic) bool hasOldRouteBlocked;
@property (nonatomic) bool hasOldRouteHistoricTravelTime;
@property (nonatomic, readonly) bool hasOldRouteID;
@property (nonatomic) bool hasOldRouteTravelTime;
@property (nonatomic) bool hasReroutedRouteHistoricTravelTime;
@property (nonatomic, readonly) bool hasReroutedRouteID;
@property (nonatomic) bool hasReroutedRouteTravelTime;
@property (nonatomic) bool oldRouteBlocked;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime;
@property (nonatomic, retain) NSData *oldRouteID;
@property (nonatomic, retain) NSMutableArray *oldRouteIncidents;
@property (nonatomic) unsigned int oldRouteTravelTime;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property (nonatomic, retain) NSData *reroutedRouteID;
@property (nonatomic) unsigned int reroutedRouteTravelTime;

+ (Class)oldRouteIncidentsType;

- (void)addOldRouteIncidents:(id)arg1;
- (void)clearOldRouteIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionResponseID;
- (bool)hasDirectionResponseID;
- (bool)hasOldRouteBlocked;
- (bool)hasOldRouteHistoricTravelTime;
- (bool)hasOldRouteID;
- (bool)hasOldRouteTravelTime;
- (bool)hasReroutedRouteHistoricTravelTime;
- (bool)hasReroutedRouteID;
- (bool)hasReroutedRouteTravelTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)oldRouteBlocked;
- (unsigned int)oldRouteHistoricTravelTime;
- (id)oldRouteID;
- (id)oldRouteIncidents;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)oldRouteIncidentsCount;
- (unsigned int)oldRouteTravelTime;
- (bool)readFrom:(id)arg1;
- (unsigned int)reroutedRouteHistoricTravelTime;
- (id)reroutedRouteID;
- (unsigned int)reroutedRouteTravelTime;
- (void)setDirectionResponseID:(id)arg1;
- (void)setHasOldRouteBlocked:(bool)arg1;
- (void)setHasOldRouteHistoricTravelTime:(bool)arg1;
- (void)setHasOldRouteTravelTime:(bool)arg1;
- (void)setHasReroutedRouteHistoricTravelTime:(bool)arg1;
- (void)setHasReroutedRouteTravelTime:(bool)arg1;
- (void)setOldRouteBlocked:(bool)arg1;
- (void)setOldRouteHistoricTravelTime:(unsigned int)arg1;
- (void)setOldRouteID:(id)arg1;
- (void)setOldRouteIncidents:(id)arg1;
- (void)setOldRouteTravelTime:(unsigned int)arg1;
- (void)setReroutedRouteHistoricTravelTime:(unsigned int)arg1;
- (void)setReroutedRouteID:(id)arg1;
- (void)setReroutedRouteTravelTime:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
