/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {
    UIAlertController * _alertController;
    UIInteractionProgress * _interactionProgress;
    bool  _presentation;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIInteractionProgress *interactionProgress;
@property (getter=isPresentation) bool presentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertControllerForContext:(id)arg1;
- (void)_animateTransition:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)alertController;
- (void)animateTransition:(id)arg1;
- (id)initWithInteractionProgress:(id)arg1;
- (id)interactionProgress;
- (bool)isPresentation;
- (void)setAlertController:(id)arg1;
- (void)setInteractionProgress:(id)arg1;
- (void)setPresentation:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
