/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRidePartySizeOption : NSObject <INRidePartySizeOptionExport, NSCopying, NSSecureCoding> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _partySizeRange;
    INPriceRange * _priceRange;
    NSString * _sizeDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } partySizeRange;
@property (nonatomic, readonly) INPriceRange *priceRange;
@property (nonatomic, readonly) NSString *sizeDescription;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPartySizeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 sizeDescription:(id)arg2 priceRange:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })partySizeRange;
- (id)priceRange;
- (id)sizeDescription;

@end
