/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {
    unsigned int  _caughtDeceleratingScrollView;
    unsigned int  _directionalLockEnabled;
    unsigned int  _hasParentScrollView;
    unsigned int  _lastLockingAxis;
    unsigned int  _lockingAxis;
    unsigned int  _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered;
    struct CGPoint { 
        double x; 
        double y; 
    }  _reconsideredLockingLocation;
    UIScrollView * _scrollView;
    SEL  _scrollViewAction;
    unsigned int  _transfersTrackingFromParentScrollView;
    double  _translationScaleFactor;
}

@property (getter=_beganCaughtDeceleratingScrollViewAndMoved, nonatomic, readonly) bool beganCaughtDeceleratingScrollViewAndMoved;
@property (getter=_caughtDeceleratingScrollView, nonatomic, readonly) bool caughtDeceleratingScrollView;
@property (getter=isDirectionalLockEnabled, nonatomic) bool directionalLockEnabled;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic) double translationScaleFactor;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_adjustSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_beganCaughtDeceleratingScrollViewAndMoved;
- (bool)_canTransferTrackingFromParentPagingScrollView;
- (bool)_caughtDeceleratingScrollView;
- (void)_centroidMovedTo:(struct CGPoint { double x1; double x2; })arg1 atTime:(double)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (double)_hysteresis;
- (void)_resetGestureRecognizer;
- (void)_scrollViewDidEndZooming;
- (bool)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
- (bool)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
- (bool)_shouldTryToBeginWithEvent:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)delaysTouchesBegan;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isDirectionalLockEnabled;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (id)scrollView;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectionalLockEnabled:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTranslationScaleFactor:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;
- (double)translationScaleFactor;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

@end
