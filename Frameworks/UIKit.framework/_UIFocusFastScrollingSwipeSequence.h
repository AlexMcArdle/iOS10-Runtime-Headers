/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusFastScrollingSwipeSequence : NSObject <_UIFocusEnginePanGestureTouchObserver> {
    long long  _consecutiveSwipeCount;
    unsigned long long  _headingLock;
    UIScrollView * _scrollView;
}

@property (nonatomic) long long consecutiveSwipeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long headingLock;
@property (nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)consecutiveSwipeCount;
- (unsigned long long)headingLock;
- (id)scrollView;
- (void)setConsecutiveSwipeCount:(long long)arg1;
- (void)setHeadingLock:(unsigned long long)arg1;
- (void)setScrollView:(id)arg1;

@end
