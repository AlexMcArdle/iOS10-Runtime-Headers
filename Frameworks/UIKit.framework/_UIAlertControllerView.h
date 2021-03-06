/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerView : UIView <UIGestureRecognizerDelegatePrivate, UIInterfaceActionHandlerInvocationDelegate, UIScrollViewDelegate> {
    NSLayoutConstraint * _actionGroupEqualsContentViewWidthConstraint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _actionSelectionInitialLocation;
    _UIAlertControllerActionViewMetrics * _actionViewMetrics;
    NSMutableArray * _actionViews;
    bool  _actionsReversed;
    UIAlertController * _alertController;
    bool  _alignsToKeyboard;
    bool  _cancelActionIsDiscrete;
    NSLayoutConstraint * _centerXConstraint;
    NSLayoutConstraint * _centerYConstraint;
    long long  _coalescingActionsChangedCount;
    NSLayoutConstraint * _contentScrollViewBottomConstraint;
    NSLayoutConstraint * _contentScrollViewMaximumWidthConstraint;
    UIView * _contentView;
    NSLayoutConstraint * _contentViewBottomConstraint;
    UIView * _contentViewControllerContainerView;
    NSLayoutConstraint * _contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint * _contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint * _contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint * _contentViewControllerViewBottomConstraint;
    NSLayoutConstraint * _contentViewControllerViewLeftConstraint;
    NSLayoutConstraint * _contentViewControllerViewRightConstraint;
    NSLayoutConstraint * _contentViewControllerViewTopConstraint;
    NSLayoutConstraint * _contentViewMaxHeightConstraint;
    NSLayoutConstraint * _contentViewTopConstraint;
    UIView * _contentViewTopItemsView;
    UILabel * _detailMessageLabel;
    NSLayoutConstraint * _detailMessageLabelTopAlignmentConstraint;
    UIView * _dimmingView;
    NSArray * _dimmingViewConstraints;
    NSArray * _dimmingViewConstraintsForActionSheetStyle;
    NSArray * _dimmingViewConstraintsForAlertStyle;
    NSArray * _dimmingViewForegroundViewBottomConstraints;
    NSArray * _dimmingViewForegroundViewTopConstraints;
    NSLayoutConstraint * _discreteActionGroupViewHorizontalLayoutTrailingConstraint;
    _UIAlertControllerInterfaceActionGroupView * _discreteCancelActionGroupView;
    NSLayoutConstraint * _discreteCancelActionViewHeightConstraint;
    NSLayoutConstraint * _discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint * _discreteCancelActionViewTopConstraint;
    NSLayoutConstraint * _discreteCancelActionViewWidthConstraint;
    UIAlertAction * _effectivePreferredAction;
    NSLayoutConstraint * _foregroundViewWidthConstraint;
    bool  _hasAppliedDetailConstraints;
    bool  _hasAppliedMessageConstraints;
    bool  _hasAppliedTitleConstraints;
    bool  _hasCachedLargestActionDimension;
    bool  _hasDimmingView;
    NSLayoutConstraint * _heightConstraint;
    bool  _inPopover;
    UIView * _keyboardLayoutAlignmentAvailableSpaceView;
    _UIKeyboardLayoutAlignmentView * _keyboardLayoutAlignmentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _largestActionDimension;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    NSLayoutConstraint * _mainActionButtonSequenceViewHeightConstraint;
    NSLayoutConstraint * _mainActionButtonSequenceViewHorizontalAlignmentConstraint;
    NSLayoutConstraint * _mainActionButtonSequenceViewWidthConstraint;
    _UIAlertControllerInterfaceActionGroupView * _mainInterfaceActionsGroupView;
    UILabel * _messageLabel;
    NSLayoutConstraint * _messageLabelTopAlignmentConstraint;
    bool  _needsActionsChangedHandling;
    NSArray * _noDimmingViewConstraints;
    bool  _presentationContextPrefersCancelActionShown;
    bool  _shouldHaveBackdropView;
    bool  _showsCancelAction;
    UIView * _textFieldViewControllerContainerView;
    NSLayoutConstraint * _textFieldViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint * _textFieldViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint * _textFieldViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewBottomConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewLeftConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewRightConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewTopConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelTopAlignmentConstraint;
    UIAlertControllerVisualStyle * _visualStyle;
    NSLayoutConstraint * _widthConstraint;
}

@property (readonly) UIView *_contentView;
@property (readonly) UIView *_dimmingView;
@property (setter=_setVisualStyle:, nonatomic, retain) UIAlertControllerVisualStyle *_visualStyle;
@property (retain) NSLayoutConstraint *actionGroupEqualsContentViewWidthConstraint;
@property (nonatomic, retain) _UIAlertControllerActionViewMetrics *actionViewMetrics;
@property (getter=_actionsReversed, setter=_setActionsReversed:, nonatomic) bool actionsReversed;
@property UIAlertController *alertController;
@property bool alignsToKeyboard;
@property bool cancelActionIsDiscrete;
@property (retain) NSLayoutConstraint *centerXConstraint;
@property (retain) NSLayoutConstraint *centerYConstraint;
@property (retain) NSLayoutConstraint *contentScrollViewBottomConstraint;
@property (retain) NSLayoutConstraint *contentScrollViewMaximumWidthConstraint;
@property (retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewBottomConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewLeftConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewRightConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewTopConstraint;
@property (retain) NSLayoutConstraint *contentViewMaxHeightConstraint;
@property (retain) NSLayoutConstraint *contentViewTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSLayoutConstraint *detailMessageLabelTopAlignmentConstraint;
@property (retain) NSLayoutConstraint *discreteActionGroupViewHorizontalLayoutTrailingConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewHeightConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewTopConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewWidthConstraint;
@property (nonatomic) double effectAlpha;
@property (retain) NSLayoutConstraint *foregroundViewWidthConstraint;
@property bool hasDimmingView;
@property (readonly) unsigned long long hash;
@property (retain) NSLayoutConstraint *heightConstraint;
@property bool inPopover;
@property (getter=_layoutSize, setter=_setLayoutSize:, nonatomic) struct CGSize { double x1; double x2; } layoutSize;
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewHeightConstraint;
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewHorizontalAlignmentConstraint;
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewWidthConstraint;
@property (retain) NSLayoutConstraint *messageLabelTopAlignmentConstraint;
@property (nonatomic) bool presentationContextPrefersCancelActionShown;
@property bool shouldHaveBackdropView;
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *textFieldViewControllerContainerViewHeightConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerContainerViewTopAlignmentConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerContainerViewWidthConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewBottomConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewLeftConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewRightConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewTopConstraint;
@property (retain) NSLayoutConstraint *titleLabelTopAlignmentConstraint;
@property (retain) NSLayoutConstraint *widthConstraint;

+ (bool)_retroactivelyRequiresConstraintBasedLayout;
+ (void)initialize;

- (void).cxx_destruct;
- (id)__cancelActionView;
- (void)_accessibilityColorsChanged;
- (void)_actionLayoutDirectionChanged;
- (bool)_actionLayoutIsVertical;
- (void)_actionsChanged;
- (bool)_actionsReversed;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyDetailMessageConstraints;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTextFieldViewControllerContainerViewConstraints;
- (void)_applyTitleConstraints;
- (void)_applyViewConstraints;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (double)_availableWidthForHorizontalLayout:(bool)arg1;
- (bool)_buttonsAreTopMost;
- (bool)_canLayOutActionsHorizontally;
- (void)_configureActionGroupViewToAllowHorizontalLayout:(bool)arg1;
- (void)_contentSizeChanged;
- (id)_contentView;
- (struct CGSize { double x1; double x2; })_contentViewControllerSize;
- (void)_didAddContentViewController;
- (id)_dimmingView;
- (id)_discreteCancelActionView;
- (id)_effectivePreferredAction;
- (void)_ensureActionViewRepresentationsHaveMetrics;
- (id)_focusedAction;
- (bool)_forceLayoutEngineSolutionInRationalEdges;
- (bool)_hasAttributedMessage;
- (bool)_hasAttributedTitle;
- (bool)_hasDetailMessage;
- (bool)_hasDiscreteCancelAction;
- (bool)_hasMessage;
- (bool)_hasTextFields;
- (bool)_hasTitle;
- (bool)_horizontalLayoutCanUseFullWidth;
- (double)_idealLayoutWidth;
- (id)_indexesOfActionSectionSeparators;
- (id)_interfaceActionForAlertAction:(id)arg1 inActionGroupView:(id)arg2;
- (struct CGSize { double x1; double x2; })_itemSizeForHorizontalLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })_itemSizeForHorizontalLayout:(bool)arg1 visualStyleRequiresActionRepresentationToFitItemSize:(bool*)arg2;
- (double)_labelHorizontalInsets;
- (struct CGSize { double x1; double x2; })_layoutSize;
- (double)_layoutWidthForHorizontalLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })_mainActionButtonSequenceViewSizeForHorizontalLayout:(bool)arg1 itemSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_marginBetweenContentAndDiscreteCancelAction;
- (struct CGSize { double x1; double x2; })_minimumSizeForAllActions;
- (id)_newStyledBackgroundView;
- (long long)_numberOfActionsForMainActionButtonSequenceView;
- (void)_performBatchActionChangesWithBlock:(id /* block */)arg1;
- (id)_preferredActionView;
- (void)_prepareContentView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareContentViewTopItemsView;
- (void)_prepareDetailMessageLabel;
- (void)_prepareDimmingView;
- (void)_prepareDimmingViewConstraints;
- (void)_prepareDimmingViewConstraintsIfNeeded;
- (void)_prepareDiscreteCancelActionGroupView;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareMainInterfaceActionsGroupView;
- (void)_prepareMesssageLabel;
- (void)_prepareTextFieldViewControllerContainerView;
- (void)_prepareTitleLabel;
- (void)_prepareViewsAndAddConstraints;
- (id)_presentableAlertActions;
- (void)_propertiesChanged;
- (void)_recomputeActionMetrics;
- (void)_recomputeAlertControllerWidth;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)_reloadInterfaceActionViewRepresentations;
- (void)_reloadInterfaceActionsGroupViewPreferredAction;
- (void)_removeContentViewController;
- (void)_scrollInitialActionToVisibleForPresentation;
- (void)_setActionsReversed:(bool)arg1;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setMessage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_setVisualStyle:(id)arg1;
- (bool)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (bool)_shouldHaveCancelActionInMainActionButtonSequenceView;
- (struct CGSize { double x1; double x2; })_sizeForLayoutWidthDetermination;
- (void)_sizeOfContentViewControllerChanged;
- (void)_sizeOfTextFieldViewControllerChanged;
- (double)_spaceRequiredForActionSectionsSpacing;
- (id)_textFieldViewController;
- (void)_textFieldsChanged;
- (id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;
- (id)_unlocalizedOrderedPresentableAlertActions;
- (void)_updateActionViewVisualStyle:(id)arg1;
- (void)_updateActionsGroupPresentationStyles;
- (void)_updateCancelActionBeingDiscrete;
- (void)_updateConstraintConstants;
- (void)_updateContentView;
- (void)_updateDetailLabelContents;
- (void)_updateDetailLabelFontSize;
- (void)_updateInsets;
- (void)_updateLabelFontSizes;
- (void)_updateLabelMaximumLines;
- (void)_updateLabelTextColor;
- (void)_updateMainScrollableHeaderViewHasRealContent;
- (void)_updateMessageLabelContents;
- (void)_updateMessageLabelFontSize;
- (void)_updatePreferredAction;
- (void)_updateStyleForIdiomChange:(bool)arg1;
- (void)_updateTintColor;
- (void)_updateTitleLabelContents;
- (void)_updateTitleLabelFontSize;
- (double)_verticalLayoutWidth;
- (id)_visualStyle;
- (id)actionGroupEqualsContentViewWidthConstraint;
- (id)actionViewMetrics;
- (id)actions;
- (id)alertController;
- (bool)alignsToKeyboard;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (id)cancelAction;
- (bool)cancelActionIsDiscrete;
- (id)centerXConstraint;
- (id)centerYConstraint;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
- (id)contentScrollViewBottomConstraint;
- (id)contentScrollViewMaximumWidthConstraint;
- (id)contentViewBottomConstraint;
- (id)contentViewController;
- (id)contentViewControllerContainerViewHeightConstraint;
- (id)contentViewControllerContainerViewTopAlignmentConstraint;
- (id)contentViewControllerContainerViewWidthConstraint;
- (id)contentViewControllerViewBottomConstraint;
- (id)contentViewControllerViewLeftConstraint;
- (id)contentViewControllerViewRightConstraint;
- (id)contentViewControllerViewTopConstraint;
- (id)contentViewMaxHeightConstraint;
- (id)contentViewTopConstraint;
- (void)dealloc;
- (id)detailMessageLabelTopAlignmentConstraint;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)discreteActionGroupViewHorizontalLayoutTrailingConstraint;
- (id)discreteCancelActionViewHeightConstraint;
- (id)discreteCancelActionViewLeadingConstraint;
- (id)discreteCancelActionViewTopConstraint;
- (id)discreteCancelActionViewWidthConstraint;
- (double)effectAlpha;
- (id)foregroundViewWidthConstraint;
- (bool)hasDimmingView;
- (bool)hasDiscreteHorizontalCancelAction;
- (id)heightConstraint;
- (bool)inPopover;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)mainActionButtonSequenceViewHeightConstraint;
- (id)mainActionButtonSequenceViewHorizontalAlignmentConstraint;
- (id)mainActionButtonSequenceViewWidthConstraint;
- (id)message;
- (id)messageLabelTopAlignmentConstraint;
- (id)preferredFocusedView;
- (bool)presentationContextPrefersCancelActionShown;
- (void)setActionGroupEqualsContentViewWidthConstraint:(id)arg1;
- (void)setActionViewMetrics:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setAlignsToKeyboard:(bool)arg1;
- (void)setCancelActionIsDiscrete:(bool)arg1;
- (void)setCenterXConstraint:(id)arg1;
- (void)setCenterYConstraint:(id)arg1;
- (void)setContentScrollViewBottomConstraint:(id)arg1;
- (void)setContentScrollViewMaximumWidthConstraint:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewHeightConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewTopAlignmentConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewWidthConstraint:(id)arg1;
- (void)setContentViewControllerViewBottomConstraint:(id)arg1;
- (void)setContentViewControllerViewLeftConstraint:(id)arg1;
- (void)setContentViewControllerViewRightConstraint:(id)arg1;
- (void)setContentViewControllerViewTopConstraint:(id)arg1;
- (void)setContentViewMaxHeightConstraint:(id)arg1;
- (void)setContentViewTopConstraint:(id)arg1;
- (void)setDetailMessageLabelTopAlignmentConstraint:(id)arg1;
- (void)setDiscreteActionGroupViewHorizontalLayoutTrailingConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewHeightConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewLeadingConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewTopConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewWidthConstraint:(id)arg1;
- (void)setEffectAlpha:(double)arg1;
- (void)setForegroundViewWidthConstraint:(id)arg1;
- (void)setHasDimmingView:(bool)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setInPopover:(bool)arg1;
- (void)setMainActionButtonSequenceViewHeightConstraint:(id)arg1;
- (void)setMainActionButtonSequenceViewHorizontalAlignmentConstraint:(id)arg1;
- (void)setMainActionButtonSequenceViewWidthConstraint:(id)arg1;
- (void)setMessageLabelTopAlignmentConstraint:(id)arg1;
- (void)setPresentationContextPrefersCancelActionShown:(bool)arg1;
- (void)setShouldHaveBackdropView:(bool)arg1;
- (void)setTextFieldViewControllerContainerViewHeightConstraint:(id)arg1;
- (void)setTextFieldViewControllerContainerViewTopAlignmentConstraint:(id)arg1;
- (void)setTextFieldViewControllerContainerViewWidthConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewBottomConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewLeftConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewRightConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewTopConstraint:(id)arg1;
- (void)setTintAdjustmentMode:(long long)arg1;
- (void)setTitleLabelTopAlignmentConstraint:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (bool)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2;
- (bool)shouldHaveBackdropView;
- (bool)showsCancelAction;
- (id)textFieldViewControllerContainerViewHeightConstraint;
- (id)textFieldViewControllerContainerViewTopAlignmentConstraint;
- (id)textFieldViewControllerContainerViewWidthConstraint;
- (id)textFieldViewControllerViewBottomConstraint;
- (id)textFieldViewControllerViewLeftConstraint;
- (id)textFieldViewControllerViewRightConstraint;
- (id)textFieldViewControllerViewTopConstraint;
- (id)textFields;
- (long long)tintAdjustmentMode;
- (id)title;
- (id)titleLabelTopAlignmentConstraint;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)widthConstraint;

@end
