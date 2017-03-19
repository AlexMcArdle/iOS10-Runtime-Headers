/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityIndicatorView : UIView <NSCoding> {
    long long  _activityIndicatorViewStyle;
    long long  _actualActivityIndicatorViewStyle;
    bool  _animating;
    NSString * _artBackupKeyString;
    bool  _clockWise;
    UIColor * _color;
    double  _duration;
    bool  _hasShadow;
    bool  _hidesWhenStopped;
    NSString * _highlightArtBackupKeyString;
    double  _innerRadius;
    UIImageView * _internalView;
    UIColor * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    bool  _spinning;
    double  _spinningDuration;
    long long  _spokeCount;
    long long  _spokeFrameRatio;
    NSArray * _spokeHighlightImages;
    NSArray * _spokeImages;
    bool  _useArtwork;
    bool  _useOutlineShadow;
    double  _width;
}

@property (nonatomic) long long activityIndicatorViewStyle;
@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic, readonly) NSString *artBackupKeyString;
@property (nonatomic) bool clockWise;
@property (nonatomic, retain) UIColor *color;
@property bool hasShadow;
@property (nonatomic) bool hidesWhenStopped;
@property (nonatomic, readonly) NSString *highlightArtBackupKeyString;
@property (nonatomic) double innerRadius;
@property (nonatomic, readonly) UIImageView *internalView;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property bool spinning;
@property (nonatomic) double spinningDuration;
@property (nonatomic) long long spokeCount;
@property (nonatomic) long long spokeFrameRatio;
@property (readonly) NSArray *spokeHighlightImages;
@property (readonly) NSArray *spokeImages;
@property (nonatomic) bool useArtwork;
@property (nonatomic) bool useOutlineShadow;
@property (nonatomic) double width;

+ (bool)_isModernStyle:(long long)arg1;
+ (id)_loadResourcesForStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })defaultSizeForStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })size;

- (void).cxx_destruct;
- (double)_alphaValueForStep:(long long)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_artBackupKeyWithHighlight:(bool)arg1;
- (bool)_canCustomize;
- (bool)_canCustomizeStyle:(long long)arg1;
- (void)_commonInit;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (long long)_customStyleForStyle:(long long)arg1;
- (id)_defaultColorForStyle:(long long)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (long long)_externalStyleForStyle:(long long)arg1;
- (void)_feedTheGear;
- (id)_generateImagesForColor:(id)arg1 highlight:(bool)arg2;
- (id)_generateModernImagesForImages:(id)arg1 color:(id)arg2;
- (bool)_hasCustomColor;
- (id)_highlightColorForStyle:(long long)arg1;
- (id)_imageForStep:(long long)arg1 withColor:(id)arg2;
- (long long)_internalStyleForStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isArtWorkBased;
- (bool)_isModern;
- (id)_layoutInfosForStyle:(long long)arg1;
- (id)_orderedSpokeImagesForStartingAnimation;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_removeAllAnimations:(bool)arg1;
- (void)_setUpAnimation;
- (bool)_shouldGoBackToBaseStyle;
- (bool)_shouldGoToCustomStyle;
- (double)_spokeLengthForGearWidth:(double)arg1;
- (double)_spokeWidthForGearWidth:(double)arg1;
- (id)_styleNameForStyle:(long long)arg1;
- (void)_tearDownAnimation;
- (void)_updateInternalViewFrameWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_widthForGearWidth:(double)arg1;
- (long long)activityIndicatorViewStyle;
- (id)artBackupKey;
- (id)artBackupKeyString;
- (bool)clockWise;
- (id)color;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)generateImages;
- (bool)hasShadow;
- (bool)hidesWhenStopped;
- (id)highlightArtBackupKeyString;
- (id)initWithActivityIndicatorStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)innerRadius;
- (id)internalView;
- (bool)isAnimating;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isHighlighted;
- (void)setActivityIndicatorViewStyle:(long long)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClockWise:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setHidesWhenStopped:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setInnerRadius:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpinning:(bool)arg1;
- (void)setSpinningDuration:(double)arg1;
- (void)setSpokeCount:(long long)arg1;
- (void)setSpokeFrameRatio:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setUseArtwork:(bool)arg1;
- (void)setUseOutlineShadow:(bool)arg1;
- (void)setWidth:(double)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)spinning;
- (double)spinningDuration;
- (long long)spokeCount;
- (long long)spokeFrameRatio;
- (id)spokeHighlightImages;
- (id)spokeImages;
- (void)startAnimating;
- (void)startAnimation;
- (void)stopAnimating;
- (void)stopAnimation;
- (void)tintColorDidChange;
- (bool)useArtwork;
- (bool)useOutlineShadow;
- (double)width;

@end