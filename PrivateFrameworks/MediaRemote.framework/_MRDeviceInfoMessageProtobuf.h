/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying> {
    bool  _allowsPairing;
    NSString * _applicationBundleIdentifier;
    NSString * _applicationBundleVersion;
    bool  _connected;
    struct { 
        unsigned int protocolVersion : 1; 
        unsigned int lastSupportedMessageType : 1; 
        unsigned int allowsPairing : 1; 
        unsigned int connected : 1; 
        unsigned int supportsSystemPairing : 1; 
    }  _has;
    unsigned int  _lastSupportedMessageType;
    NSString * _localizedModelName;
    NSString * _name;
    unsigned long long  _protocolVersion;
    bool  _supportsSystemPairing;
    NSString * _systemBuildVersion;
    NSString * _uniqueIdentifier;
}

@property (nonatomic) bool allowsPairing;
@property (nonatomic, retain) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) NSString *applicationBundleVersion;
@property (nonatomic) bool connected;
@property (nonatomic) bool hasAllowsPairing;
@property (nonatomic, readonly) bool hasApplicationBundleIdentifier;
@property (nonatomic, readonly) bool hasApplicationBundleVersion;
@property (nonatomic) bool hasConnected;
@property (nonatomic) bool hasLastSupportedMessageType;
@property (nonatomic, readonly) bool hasLocalizedModelName;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic) bool hasSupportsSystemPairing;
@property (nonatomic, readonly) bool hasSystemBuildVersion;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic) unsigned int lastSupportedMessageType;
@property (nonatomic, retain) NSString *localizedModelName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long protocolVersion;
@property (nonatomic) bool supportsSystemPairing;
@property (nonatomic, retain) NSString *systemBuildVersion;
@property (nonatomic, retain) NSString *uniqueIdentifier;

- (bool)allowsPairing;
- (id)applicationBundleIdentifier;
- (id)applicationBundleVersion;
- (bool)connected;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowsPairing;
- (bool)hasApplicationBundleIdentifier;
- (bool)hasApplicationBundleVersion;
- (bool)hasConnected;
- (bool)hasLastSupportedMessageType;
- (bool)hasLocalizedModelName;
- (bool)hasName;
- (bool)hasProtocolVersion;
- (bool)hasSupportsSystemPairing;
- (bool)hasSystemBuildVersion;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lastSupportedMessageType;
- (id)localizedModelName;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned long long)protocolVersion;
- (bool)readFrom:(id)arg1;
- (void)setAllowsPairing:(bool)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setApplicationBundleVersion:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setHasAllowsPairing:(bool)arg1;
- (void)setHasConnected:(bool)arg1;
- (void)setHasLastSupportedMessageType:(bool)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setHasSupportsSystemPairing:(bool)arg1;
- (void)setLastSupportedMessageType:(unsigned int)arg1;
- (void)setLocalizedModelName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProtocolVersion:(unsigned long long)arg1;
- (void)setSupportsSystemPairing:(bool)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (bool)supportsSystemPairing;
- (id)systemBuildVersion;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
