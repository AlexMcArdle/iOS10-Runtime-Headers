/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenFocusSystem : NSObject <BKSEventFocusObserving> {
    _UIFocusAnimationCoordinatorManager * _focusAnimationCoordinatorManager;
    bool  _focusEnabled;
    <UIFocusItem> * _focusedItem;
    bool  _forceSourceItemMayRemainFocused;
    bool  _ignoreFocusUpdateIfNeeded;
    bool  _pendingFocusRestoration;
    bool  _pendingFocusUpdateAllowsDeferral;
    <UIFocusEnvironment> * _pendingFocusUpdateEnvironment;
    <UIFocusItem> * _previousFocusedItem;
    UIScreen * _screen;
}

@property (nonatomic, readonly) UIFocusAnimationCoordinator *currentFocusAnimationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_focusAnimationCoordinatorManager, setter=_setFocusAnimationCoordinatorManager:, nonatomic, retain) _UIFocusAnimationCoordinatorManager *focusAnimationCoordinatorManager;
@property (getter=isFocusEnabled, nonatomic) bool focusEnabled;
@property (nonatomic, readonly) <UIFocusItem> *focusedItem;
@property (nonatomic, readonly) UIView *focusedView;
@property (getter=_forceSourceItemMayRemainFocused, setter=_forceSourceItemMayRemainFocused:, nonatomic) bool forceSourceItemMayRemainFocused;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreFocusUpdateIfNeeded;
@property (getter=_pendingFocusRestoration, setter=_setPendingFocusRestoration:, nonatomic) bool pendingFocusRestoration;
@property (getter=_pendingFocusUpdateAllowsDeferral, setter=_setPendingFocusUpdateAllowsDeferral:, nonatomic) bool pendingFocusUpdateAllowsDeferral;
@property (getter=_pendingFocusUpdateEnvironment, setter=_setPendingFocusUpdateEnvironment:, nonatomic) <UIFocusEnvironment> *pendingFocusUpdateEnvironment;
@property (nonatomic, readonly) <UIFocusItem> *previousFocusedItem;
@property (nonatomic) UIScreen *screen;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_focusAnimationCoordinatorManager;
- (bool)_forceSourceItemMayRemainFocused;
- (void)_forceSourceItemMayRemainFocused:(bool)arg1;
- (bool)_isEnvironmentEligibleForFocusUpdate:(id)arg1 allowsDeferral:(bool)arg2;
- (bool)_pendingFocusRestoration;
- (bool)_pendingFocusUpdateAllowsDeferral;
- (id)_pendingFocusUpdateEnvironment;
- (void)_setFocusAnimationCoordinatorManager:(id)arg1;
- (void)_setPendingFocusRestoration:(bool)arg1;
- (void)_setPendingFocusUpdateAllowsDeferral:(bool)arg1;
- (void)_setPendingFocusUpdateEnvironment:(id)arg1;
- (void)_uiktest_setPreviousFocusedItem:(id)arg1;
- (bool)_updateFocusWithContext:(id)arg1;
- (void)cancelPendingFocusRestoration;
- (id)contextForProgrammaticFocusUpdateToEnvironment:(id)arg1;
- (id)currentFocusAnimationCoordinator;
- (void)dealloc;
- (void)focusEnvironmentWillDisappear:(id)arg1;
- (void)focusedDeferralPropertiesDidChange:(id)arg1;
- (id)focusedItem;
- (id)focusedView;
- (bool)ignoreFocusUpdateIfNeeded;
- (id)initWithScreen:(id)arg1;
- (bool)isFocusEnabled;
- (id)previousFocusedItem;
- (bool)requestFocusUpdateToEnvironment:(id)arg1 allowsDeferral:(bool)arg2;
- (bool)requestForcedFocusUpdateToEnvironment:(id)arg1;
- (id)screen;
- (void)setFocusEnabled:(bool)arg1;
- (void)setIgnoreFocusUpdateIfNeeded:(bool)arg1;
- (void)setNeedsFocusRestoration;
- (void)setScreen:(id)arg1;
- (void)updateFocusIfNeeded;
- (bool)updateFocusWithContext:(id)arg1;

@end
