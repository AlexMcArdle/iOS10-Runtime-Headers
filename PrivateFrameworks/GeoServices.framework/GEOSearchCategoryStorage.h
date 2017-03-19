/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchCategoryStorage : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    GEOPDBrowseCategory * _browseCategory;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, retain) GEOPDBrowseCategory *browseCategory;
@property (nonatomic, readonly) bool hasAutocompleteEntry;
@property (nonatomic, readonly) bool hasBrowseCategory;

- (id)autocompleteEntry;
- (id)browseCategory;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutocompleteEntry;
- (bool)hasBrowseCategory;
- (unsigned long long)hash;
- (id)initWithSearchCategory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutocompleteEntry:(id)arg1;
- (void)setBrowseCategory:(id)arg1;
- (void)writeTo:(id)arg1;

@end
