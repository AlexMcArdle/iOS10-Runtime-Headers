/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchBar : UIView <UIBarPositioning, UIStatusBarTinting, UITextInputTraits, UITextInputTraits_Private, _UIBarPositioningInternal> {
    bool  __forceCenteredPlaceholderLayout;
    unsigned long long  __scopeBarPosition;
    UISearchController * __searchController;
    bool  __transplanting;
    UIBarButtonItem * _animatedAppearanceBarButtonItem;
    id  _appearanceStorage;
    _UIBackdropView * _backdrop;
    unsigned long long  _backdropStyle;
    UIView * _background;
    long long  _barPosition;
    UIColor * _barTintColor;
    UIBarButtonItem * _cancelBarButtonItem;
    UIButton * _cancelButton;
    NSString * _cancelButtonText;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    id  _controller;
    <UISearchBarDelegate><UISearchBarDelegate_Private> * _delegate;
    UIView * _inputAccessoryView;
    UIButton * _leftButton;
    UIView * _maskView;
    _UISearchBarNavigationItem * _navigationItem;
    UILabel * _promptLabel;
    UIView * _scopeBar;
    _UISearchBarScopeBarBackground * _scopeBarBackgroundView;
    UIView * _scopeBarContainerView;
    NSArray * _scopes;
    struct { 
        unsigned int barStyle : 3; 
        unsigned int showsBookmarkButton : 1; 
        unsigned int showsCancelButton : 1; 
        unsigned int barTranslucence : 3; 
        unsigned int autoDisableCancelButton : 1; 
        unsigned int showsScopeBar : 1; 
        unsigned int hideBackground : 1; 
        unsigned int combinesLandscapeBars : 1; 
        unsigned int usesEmbeddedAppearance : 1; 
        unsigned int showsSearchResultsButton : 1; 
        unsigned int searchResultsButtonSelected : 1; 
        unsigned int pretendsIsInBar : 1; 
        unsigned int disabled : 1; 
        unsigned int backgroundLayoutNeedsUpdate : 1; 
        unsigned int containedInNavigationPalette : 1; 
        unsigned int containedInNavigationBar : 1; 
        unsigned int containedInToolBar : 1; 
        unsigned int drawsBackgroundInPalette : 1; 
        unsigned int centerPlaceholder : 1; 
        unsigned int searchFieldLeftViewMode : 2; 
        unsigned int cancelButtonWantsLetterpress : 1; 
    }  _searchBarFlags;
    unsigned long long  _searchBarStyle;
    UISearchBarTextField * _searchField;
    long long  _selectedScope;
    UIImageView * _separator;
    UIImageView * _shadowView;
    UIColor * _statusBarTintColor;
    UITapGestureRecognizer * _tapToActivateGestureRecognizer;
    UITextInputTraits * _textInputTraits;
}

@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) bool _forceCenteredPlaceholderLayout;
@property (nonatomic, readonly, retain) UIButton *_leftButton;
@property (setter=_setScopeBarPosition:, nonatomic) unsigned long long _scopeBarPosition;
@property (setter=_setSearchController:, nonatomic) UISearchController *_searchController;
@property (setter=_setStatusBarTintColor:, nonatomic, retain) UIColor *_statusBarTintColor;
@property (setter=_setTransplanting:, nonatomic) bool _transplanting;
@property (nonatomic) bool acceptsDictationSearchResults;
@property (nonatomic) bool acceptsEmoji;
@property (nonatomic) bool acceptsFloatingKeyboard;
@property (nonatomic) bool acceptsSplitKeyboard;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, readonly) long long barPosition;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) bool contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferBecomingResponder;
@property (nonatomic) <UISearchBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDevicePasscodeEntry, nonatomic) bool devicePasscodeEntry;
@property (nonatomic) bool disableInputBars;
@property (nonatomic) bool disablePrediction;
@property (nonatomic) bool displaySecureEditsUsingPlainText;
@property (nonatomic) bool displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic) bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) bool forceDisableDictation;
@property (nonatomic) bool forceEnableDictation;
@property (nonatomic) bool hasDefaultContents;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, readonly) UITextInputAssistantItem *inputAssistantItem;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) bool isCarPlayIdiom;
@property (nonatomic) bool isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) bool learnsCorrections;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) bool returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, retain) UIImage *scopeBarBackgroundImage;
@property (nonatomic, copy) NSArray *scopeButtonTitles;
@property (nonatomic) unsigned long long searchBarStyle;
@property (getter=_searchBarTextField, nonatomic, readonly) UISearchBarTextField *searchBarTextField;
@property (nonatomic) struct UIOffset { double x1; double x2; } searchFieldBackgroundPositionAdjustment;
@property (getter=isSearchResultsButtonSelected, nonatomic) bool searchResultsButtonSelected;
@property (nonatomic) struct UIOffset { double x1; double x2; } searchTextPositionAdjustment;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long selectedScopeButtonIndex;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) bool showsBookmarkButton;
@property (nonatomic) bool showsCancelButton;
@property (nonatomic) bool showsScopeBar;
@property (nonatomic) bool showsSearchResultsButton;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressReturnKeyStyling;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isTranslucent, nonatomic) bool translucent;
@property (nonatomic) bool useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;

- (void).cxx_destruct;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_allowCursorToAppear:(bool)arg1;
- (id)_alternateTitle;
- (id)_animatedAppearanceBarButtonItem;
- (void)_applySearchBarStyle;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (double)_availableBoundsWidth;
- (double)_availableBoundsWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)_backdropStyle;
- (id)_backgroundBlurEffectForPresentation;
- (id)_backgroundView;
- (double)_barHeightForBarMetrics:(long long)arg1;
- (long long)_barMetricsForOrientation:(long long)arg1;
- (long long)_barPosition;
- (void)_bookmarkButtonPressed;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonPressed;
- (void)_commonInit;
- (bool)_consideredInBarWithSuperview:(id)arg1;
- (bool)_containedInNavigationPalette;
- (bool)_containsScopeBar;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_currentSeparatorImage;
- (double)_defaultHeight;
- (id)_defaultPromptString;
- (double)_defaultWidth;
- (void)_destroyCancelButton;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_disableAutomaticKeyboardUI;
- (void)_displayNavBarCancelButton:(bool)arg1 animated:(bool)arg2;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChange:(bool)arg1;
- (bool)_enableAutomaticKeyboardPressDone;
- (bool)_forceCenteredPlaceholderLayout;
- (id)_glyphAndTextColor:(bool)arg1;
- (bool)_hasCustomAutolayoutNeighborSpacing;
- (bool)_hasDarkUIAppearance;
- (void)_identifyBarContainer;
- (id)_imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)_imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(bool*)arg3;
- (bool)_isAtTop;
- (bool)_isEnabled;
- (bool)_isInBar;
- (double)_landscapeScopeBarWidth;
- (double)_landscapeSearchFieldWidth;
- (void)_layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(bool)arg1;
- (id)_leftButton;
- (id)_makeShadowView;
- (id)_navigationBarForShadow;
- (id)_navigationItem;
- (bool)_ownsInputAccessoryView;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_removeMarginsIfNecessary;
- (void)_resultsListButtonPressed;
- (id)_scopeBar;
- (id)_scopeBarBackgroundView;
- (id)_scopeBarContainer;
- (id)_scopeBarContainerView;
- (double)_scopeBarHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_scopeBarInsets;
- (bool)_scopeBarIsVisible;
- (unsigned long long)_scopeBarPosition;
- (void)_scopeChanged:(id)arg1;
- (id)_searchBarTextField;
- (id)_searchController;
- (void)_searchFieldBeginEditing;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldEndEditing;
- (double)_searchFieldHeight;
- (void)_searchFieldReturnPressed;
- (bool)_searchFieldWidthShouldBeFlexible;
- (id)_separatorImage;
- (void)_setAutoDisableCancelButton:(bool)arg1;
- (void)_setBackdropStyle:(unsigned long long)arg1;
- (void)_setBackgroundLayoutNeedsUpdate:(bool)arg1;
- (void)_setBarPosition:(long long)arg1;
- (void)_setBarTintColor:(id)arg1 forceUpdate:(bool)arg2;
- (void)_setCancelButtonText:(id)arg1;
- (void)_setCancelButtonWantsLetterpress;
- (void)_setDisableFocus:(bool)arg1;
- (void)_setEnabled:(bool)arg1;
- (void)_setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setMaskActive:(bool)arg1;
- (void)_setMaskBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setScopeBarHidden:(bool)arg1;
- (void)_setScopeBarPosition:(unsigned long long)arg1;
- (void)_setScopeBarSegmentsEnabled:(bool)arg1;
- (void)_setSearchController:(id)arg1;
- (void)_setSeparatorImage:(id)arg1;
- (void)_setShadowVisibleIfNecessary:(bool)arg1;
- (void)_setShowsCancelButton:(bool)arg1;
- (void)_setShowsScopeBar:(bool)arg1 animateOpacity:(bool)arg2;
- (void)_setShowsSeparator:(bool)arg1;
- (void)_setStatusBarTintColor:(id)arg1;
- (void)_setTransplanting:(bool)arg1;
- (void)_setUpScopeBar;
- (void)_setupCancelButton;
- (void)_setupCancelButtonWithAppearance:(id)arg1;
- (void)_setupLeftButton;
- (void)_setupPromptLabel;
- (void)_setupSearchField;
- (bool)_shouldCombineLandscapeBars;
- (bool)_shouldCombineLandscapeBarsForOrientation:(long long)arg1;
- (bool)_shouldDisplayShadow;
- (bool)_shouldUseNavigationBarHeight;
- (id)_statusBarTintColor;
- (id)_textColor;
- (bool)_textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)arg1;
- (long long)_textInputSource;
- (bool)_transplanting;
- (id)_uiktest_placeholderLabelColor;
- (void)_updateBackgroundToBackdropStyle:(long long)arg1;
- (void)_updateInsetsForTableView:(id)arg1;
- (void)_updateMagnifyingGlassView;
- (void)_updateNeedForBackdrop;
- (void)_updateOpacity;
- (void)_updatePlaceholderColor;
- (void)_updateRightView;
- (void)_updateScopeBarBackground;
- (void)_updateSearchFieldArt;
- (id)_viewForChildViews;
- (bool)_wouldCombineLandscapeBarsForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)backgroundImage;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (long long)barPosition;
- (long long)barStyle;
- (id)barTintColor;
- (bool)becomeFirstResponder;
- (void)bringSubviewToFront:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)cancelButton;
- (bool)centerPlaceholder;
- (bool)combinesLandscapeBars;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)drawsBackground;
- (bool)drawsBackgroundInPalette;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (id)inputAssistantItem;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isFirstResponder;
- (bool)isSearchResultsButtonSelected;
- (bool)isTranslucent;
- (void)layoutSubviews;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)placeholder;
- (struct UIOffset { double x1; double x2; })positionAdjustmentForSearchBarIcon:(long long)arg1;
- (id)preferredFocusedView;
- (bool)pretendsIsInBar;
- (id)prompt;
- (void)reloadInputViews;
- (bool)resignFirstResponder;
- (bool)respondsToSelector:(SEL)arg1;
- (id)scopeBarBackgroundImage;
- (id)scopeBarButtonBackgroundImageForState:(unsigned long long)arg1;
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (id)scopeButtonTitles;
- (unsigned long long)searchBarStyle;
- (id)searchField;
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (struct UIOffset { double x1; double x2; })searchFieldBackgroundPositionAdjustment;
- (long long)searchFieldLeftViewMode;
- (struct UIOffset { double x1; double x2; })searchTextPositionAdjustment;
- (long long)selectedScopeButtonIndex;
- (void)sendSubviewToBack:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCenterPlaceholder:(bool)arg1;
- (void)setCombinesLandscapeBars:(bool)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawsBackground:(bool)arg1;
- (void)setDrawsBackgroundInPalette:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;
- (void)setInputAccessoryView:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forSearchBarIcon:(long long)arg2;
- (void)setPretendsIsInBar:(bool)arg1;
- (void)setPrompt:(id)arg1;
- (void)setScopeBarBackgroundImage:(id)arg1;
- (void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setScopeButtonTitles:(id)arg1;
- (void)setSearchBarStyle:(unsigned long long)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSearchFieldBackgroundPositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setSearchFieldLeftViewMode:(long long)arg1;
- (void)setSearchResultsButtonSelected:(bool)arg1;
- (void)setSearchTextPositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setSelectedScopeButtonIndex:(long long)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowsBookmarkButton:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1 animated:(bool)arg2;
- (void)setShowsScopeBar:(bool)arg1;
- (void)setShowsSearchResultsButton:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTranslucent:(bool)arg1;
- (void)setUsesEmbeddedAppearance:(bool)arg1;
- (void)set_forceCenteredPlaceholderLayout:(bool)arg1;
- (bool)showsBookmarkButton;
- (bool)showsCancelButton;
- (bool)showsScopeBar;
- (bool)showsSearchResultsButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)takeTraitsFrom:(id)arg1;
- (void)tappedSearchBar:(id)arg1;
- (id)text;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (id)textInputTraits;
- (bool)usesEmbeddedAppearance;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
