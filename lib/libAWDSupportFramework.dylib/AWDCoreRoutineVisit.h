/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineVisit : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _mapItemSources;
}

@property (nonatomic, readonly) int*mapItemSources;
@property (nonatomic, readonly) unsigned long long mapItemSourcesCount;

- (int)StringAsMapItemSources:(id)arg1;
- (void)addMapItemSources:(int)arg1;
- (void)clearMapItemSources;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int*)mapItemSources;
- (id)mapItemSourcesAsString:(int)arg1;
- (int)mapItemSourcesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapItemSourcesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMapItemSources:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
