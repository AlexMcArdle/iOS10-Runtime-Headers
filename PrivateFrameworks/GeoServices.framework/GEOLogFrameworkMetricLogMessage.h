/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogFrameworkMetricLogMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int messageSize : 1; 
        unsigned int messageCount : 1; 
        unsigned int metricState : 1; 
        unsigned int metricType : 1; 
        unsigned int retryCount : 1; 
    }  _has;
    unsigned int  _messageCount;
    unsigned long long  _messageSize;
    int  _metricState;
    int  _metricType;
    unsigned int  _retryCount;
}

@property (nonatomic) bool hasMessageCount;
@property (nonatomic) bool hasMessageSize;
@property (nonatomic) bool hasMetricState;
@property (nonatomic) bool hasMetricType;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) int metricState;
@property (nonatomic) int metricType;
@property (nonatomic) unsigned int retryCount;

- (int)StringAsMetricState:(id)arg1;
- (int)StringAsMetricType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageCount;
- (bool)hasMessageSize;
- (bool)hasMetricState;
- (bool)hasMetricType;
- (bool)hasRetryCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageCount;
- (unsigned long long)messageSize;
- (int)metricState;
- (id)metricStateAsString:(int)arg1;
- (int)metricType;
- (id)metricTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)retryCount;
- (void)setHasMessageCount:(bool)arg1;
- (void)setHasMessageSize:(bool)arg1;
- (void)setHasMetricState:(bool)arg1;
- (void)setHasMetricType:(bool)arg1;
- (void)setHasRetryCount:(bool)arg1;
- (void)setMessageCount:(unsigned int)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setMetricState:(int)arg1;
- (void)setMetricType:(int)arg1;
- (void)setRetryCount:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
