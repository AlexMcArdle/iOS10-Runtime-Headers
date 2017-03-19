/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentMetadata : PBCodable <NSCopying> {
    NSString * _LaunchId;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _RequiredEntitlements;
    bool  _backgroundLaunch;
    bool  _confirmed;
    struct { 
        unsigned int backgroundLaunch : 1; 
        unsigned int confirmed : 1; 
    }  _has;
    NSString * _intentId;
    PBUnknownFields * _unknownFields;
    _INPBString * _userUtterance;
}

@property (nonatomic, retain) NSString *LaunchId;
@property (nonatomic, readonly) int*RequiredEntitlements;
@property (nonatomic, readonly) unsigned long long RequiredEntitlementsCount;
@property (nonatomic) bool backgroundLaunch;
@property (nonatomic) bool confirmed;
@property (nonatomic) bool hasBackgroundLaunch;
@property (nonatomic) bool hasConfirmed;
@property (nonatomic, readonly) bool hasIntentId;
@property (nonatomic, readonly) bool hasLaunchId;
@property (nonatomic, readonly) bool hasUserUtterance;
@property (nonatomic, retain) NSString *intentId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBString *userUtterance;

- (void).cxx_destruct;
- (id)LaunchId;
- (int)RequiredEntitlementAtIndex:(unsigned long long)arg1;
- (int*)RequiredEntitlements;
- (id)RequiredEntitlementsAsString:(int)arg1;
- (unsigned long long)RequiredEntitlementsCount;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (bool)backgroundLaunch;
- (void)clearRequiredEntitlements;
- (bool)confirmed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBackgroundLaunch;
- (bool)hasConfirmed;
- (bool)hasIntentId;
- (bool)hasLaunchId;
- (bool)hasUserUtterance;
- (unsigned long long)hash;
- (id)intentId;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBackgroundLaunch:(bool)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setHasBackgroundLaunch:(bool)arg1;
- (void)setHasConfirmed:(bool)arg1;
- (void)setIntentId:(id)arg1;
- (void)setLaunchId:(id)arg1;
- (void)setRequiredEntitlements:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUserUtterance:(id)arg1;
- (id)unknownFields;
- (id)userUtterance;
- (void)writeTo:(id)arg1;

@end