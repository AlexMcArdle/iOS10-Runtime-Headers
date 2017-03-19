/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusDisplayLinkScrollAnimator : NSObject <_UIFocusScrollAnimator> {
    double  _defaultConvergenceRate;
    CADisplayLink * _displayLink;
    UIScreen * _screen;
    NSMapTable * _scrollViews;
    _UIFocusEngineScrollViewOffsets * _singleScrollViewEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultConvergenceRate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool requiresExtendingScrollViewVisibleBounds;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_applyAccelerationLimitToAcceleration:(struct CGPoint { double x1; double x2; })arg1 currentOffset:(struct CGPoint { double x1; double x2; })arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3;
- (id)_entryForScrollView:(id)arg1 createIfNeeded:(bool)arg2;
- (void)_heartbeat:(id)arg1;
- (void)_processEntry:(id)arg1 timeDelta:(long long)arg2 completed:(id)arg3;
- (bool)_shouldPushAndPopRunLoopModes;
- (void)_updateDisplayLinkConfiguration;
- (void)cancelPeekAdjustmentForScrollView:(id)arg1 performRollback:(bool)arg2;
- (void)cancelScrollingForScrollView:(id)arg1;
- (struct CGPoint { double x1; double x2; })currentVelocityForScrollView:(id)arg1;
- (void)dealloc;
- (double)defaultConvergenceRate;
- (id)initWithScreen:(id)arg1;
- (bool)isAnimatingScrollView:(id)arg1;
- (bool)requiresExtendingScrollViewVisibleBounds;
- (void)setDefaultConvergenceRate:(double)arg1;
- (void)setPeekOffsetAdjustment:(struct CGPoint { double x1; double x2; })arg1 forScrollView:(id)arg2;
- (void)setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1 forScrollView:(id)arg2 convergenceRate:(double)arg3 completion:(id /* block */)arg4;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForScrollView:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityToScrollFromOffset:(struct CGPoint { double x1; double x2; })arg1 toOffset:(struct CGPoint { double x1; double x2; })arg2;

@end
