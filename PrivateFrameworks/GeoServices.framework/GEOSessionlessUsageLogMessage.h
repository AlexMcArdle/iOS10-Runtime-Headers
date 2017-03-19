/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSessionlessUsageLogMessage : PBCodable <NSCopying> {
    GEODirectionsFeedbackLogMessage * _directionsFeedbackLogMessage;
    GEOTimeToLeaveHypothesisLogMessage * _timeToLeaveHypothesisLogMessage;
    GEOTimeToLeaveInitialTravelTimeLogMessage * _timeToLeaveInitialTravelTimeLogMessage;
    GEOTransitAppLaunchLogMessage * _transitAppLaunchLogMessage;
}

@property (nonatomic, retain) GEODirectionsFeedbackLogMessage *directionsFeedbackLogMessage;
@property (nonatomic, readonly) bool hasDirectionsFeedbackLogMessage;
@property (nonatomic, readonly) bool hasTimeToLeaveHypothesisLogMessage;
@property (nonatomic, readonly) bool hasTimeToLeaveInitialTravelTimeLogMessage;
@property (nonatomic, readonly) bool hasTransitAppLaunchLogMessage;
@property (nonatomic, retain) GEOTimeToLeaveHypothesisLogMessage *timeToLeaveHypothesisLogMessage;
@property (nonatomic, retain) GEOTimeToLeaveInitialTravelTimeLogMessage *timeToLeaveInitialTravelTimeLogMessage;
@property (nonatomic, retain) GEOTransitAppLaunchLogMessage *transitAppLaunchLogMessage;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackLogMessage;
- (bool)hasDirectionsFeedbackLogMessage;
- (bool)hasTimeToLeaveHypothesisLogMessage;
- (bool)hasTimeToLeaveInitialTravelTimeLogMessage;
- (bool)hasTransitAppLaunchLogMessage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDirectionsFeedbackLogMessage:(id)arg1;
- (void)setTimeToLeaveHypothesisLogMessage:(id)arg1;
- (void)setTimeToLeaveInitialTravelTimeLogMessage:(id)arg1;
- (void)setTransitAppLaunchLogMessage:(id)arg1;
- (id)timeToLeaveHypothesisLogMessage;
- (id)timeToLeaveInitialTravelTimeLogMessage;
- (id)transitAppLaunchLogMessage;
- (void)writeTo:(id)arg1;

@end
