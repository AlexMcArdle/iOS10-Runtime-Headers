/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSOSAutomaticCallCountdownEnabled : PBCodable <NSCopying> {
    bool  _automaticCallCountdownEnabled;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int automaticCallCountdownEnabled : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool automaticCallCountdownEnabled;
@property (nonatomic) bool hasAutomaticCallCountdownEnabled;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (bool)automaticCallCountdownEnabled;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutomaticCallCountdownEnabled;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutomaticCallCountdownEnabled:(bool)arg1;
- (void)setHasAutomaticCallCountdownEnabled:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
