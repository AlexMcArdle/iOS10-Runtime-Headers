/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedImage : CUINamedLookup {
    struct _cuiniproperties { 
        unsigned int isVectorBased : 1; 
        unsigned int hasSliceInformation : 1; 
        unsigned int hasAlignmentInformation : 1; 
        unsigned int resizingMode : 2; 
        unsigned int templateRenderingMode : 3; 
        unsigned int exifOrientation : 4; 
        unsigned int isAlphaCropped : 1; 
        unsigned int isFlippable : 1; 
        unsigned int isTintable : 1; 
        unsigned int _reserved : 17; 
    }  _imageProperties;
    double  _scale;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } alignmentEdgeInsets;
@property (nonatomic, readonly) int blendMode;
@property (nonatomic, readonly) struct CGImage { }*croppedImage;
@property (nonatomic, readonly) long long displayGamut;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) bool hasAlignmentInformation;
@property (nonatomic, readonly) bool hasSliceInformation;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) bool isAlphaCropped;
@property (nonatomic, readonly) bool isFlippable;
@property (nonatomic, readonly) bool isStructured;
@property (nonatomic, readonly) bool isTemplate;
@property (nonatomic, readonly) bool isVectorBased;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) long long resizingMode;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) long long templateRenderingMode;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

- (bool)_cacheRenditionProperties;
- (struct { double x1; double x2; double x3; double x4; })alignmentEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alphaCroppedRect;
- (id)baseKey;
- (int)blendMode;
- (struct CGImage { }*)createImageFromPDFRenditionWithScale:(double)arg1;
- (struct CGImage { }*)croppedImage;
- (id)description;
- (long long)displayGamut;
- (struct { double x1; double x2; double x3; double x4; })edgeInsets;
- (int)exifOrientation;
- (long long)graphicsClass;
- (bool)hasAlignmentInformation;
- (bool)hasSliceInformation;
- (long long)idiom;
- (struct CGImage { }*)image;
- (long long)imageType;
- (bool)isAlphaCropped;
- (bool)isFlippable;
- (bool)isStructured;
- (bool)isTemplate;
- (bool)isVectorBased;
- (long long)layoutDirection;
- (long long)memoryClass;
- (double)opacity;
- (struct CGSize { double x1; double x2; })originalUncroppedSize;
- (double)positionOfSliceBoundary:(unsigned int)arg1;
- (long long)resizingMode;
- (long long)resizingModeWithSubtype:(long long)arg1;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;
- (long long)sizeClassHorizontal;
- (long long)sizeClassVertical;
- (unsigned long long)subtype;
- (long long)templateRenderingMode;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)UIImage;
- (id)imageObj;
- (id)traitCollection;

@end
