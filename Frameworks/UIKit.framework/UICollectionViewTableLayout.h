/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewTableLayout : UICollectionViewLayout <UICollectionViewTableAttributes, UICollectionViewTableLayoutSwipeActionPullViewDelegate, UIGestureRecognizerDelegate, UITable_Internal> {
    UIColor * _accessoryBaseColor;
    double  _backgroundInset;
    double  _bottomPadding;
    bool  _cellLayoutMarginsFollowReadableWidth;
    double  _confirmationTranslationAdjustment;
    <UITableConstants> * _constants;
    NSMutableArray * _deleteIndexPaths;
    _UISwipableTableViewCellDeleteScanlineView * _deleteScanLineView;
    bool  _dontResetSwipedRow;
    double  _estimatedRowHeight;
    double  _estimatedSectionFooterHeight;
    double  _estimatedSectionHeaderHeight;
    NSSet * _floatingElementKinds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _indexFrame;
    double  _initialDistance;
    double  _initialTranslation;
    NSMutableArray * _insertIndexPaths;
    UICollectionViewTableLayoutSwipeActionPullView * _leftSwipeView;
    UIColor * _multiselectCheckmarkColor;
    bool  _overlapsSectionHeaderViews;
    UICollectionViewTableLayoutSwipeActionPullView * _rightSwipeView;
    UITableViewRowData * _rowData;
    double  _rowHeight;
    double  _rowSpacing;
    double  _sectionBorderWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionContentInset;
    bool  _sectionContentInsetFollowsLayoutMargins;
    double  _sectionCornerRadius;
    double  _sectionFooterHeight;
    double  _sectionHeaderHeight;
    UIColor * _separatorColor;
    UIVisualEffect * _separatorEffect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorInset;
    long long  _separatorStyle;
    bool  _showingIndex;
    _UIFeedbackStatesBehavior * _swipeActionFeedbackBehavior;
    UIPanGestureRecognizer * _swipeActionPanRecognizer;
    UIGobblerGestureRecognizer * _swipeActionsGobblerGestureRecognizer;
    UICollectionViewTableCell * _swipeToDeleteCell;
    NSIndexPath * _swipedIndexPath;
    struct { 
        unsigned int navigationGestureWasEnabledBeforeSwipeActions : 1; 
        unsigned int didDisableNavigationGesture : 1; 
        unsigned int deleteCancelationAnimationInProgress : 1; 
        unsigned int editingForSwipeDelete : 1; 
    }  _tableLayoutFlags;
    double  _topPadding;
    bool  _usesVariableMargins;
}

@property (getter=_contentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _contentInset;
@property (getter=_accessoryBaseColor, nonatomic, readonly) UIColor *accessoryBaseColor;
@property (nonatomic, readonly) bool allowsMultipleSelection;
@property (nonatomic, readonly) bool allowsMultipleSelectionDuringEditing;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (getter=_backgroundInset, nonatomic, readonly) double backgroundInset;
@property (getter=_bottomPadding, nonatomic, readonly) double bottomPadding;
@property (nonatomic, readonly) bool canBeEdited;
@property (nonatomic) bool cellLayoutMarginsFollowReadableWidth;
@property (nonatomic) double confirmationTranslationAdjustment;
@property (getter=_constants, nonatomic, retain) <UITableConstants> *constants;
@property (getter=_dataSource, nonatomic, readonly) <UICollectionViewDataSourceTableLayout> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultSectionFooterHeight, nonatomic, readonly) double defaultSectionFooterHeight;
@property (getter=_defaultSectionHeaderHeight, nonatomic, readonly) double defaultSectionHeaderHeight;
@property (getter=_delegate, nonatomic, readonly) <UICollectionViewDelegateTableLayout> *delegate;
@property (nonatomic, retain) NSMutableArray *deleteIndexPaths;
@property (nonatomic, retain) _UISwipableTableViewCellDeleteScanlineView *deleteScanLineView;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, readonly) double estimatedRowHeight;
@property (nonatomic, readonly) double estimatedSectionFooterHeight;
@property (nonatomic, readonly) double estimatedSectionHeaderHeight;
@property (getter=_estimatesRowHeights, nonatomic, readonly) bool estimatesRowHeights;
@property (getter=_estimatesSectionFooterHeights, nonatomic, readonly) bool estimatesSectionFooterHeights;
@property (getter=_estimatesSectionHeaderHeights, nonatomic, readonly) bool estimatesSectionHeaderHeights;
@property (getter=_floatingElementKinds, setter=_setFloatingElementKinds:, nonatomic, retain) NSArray *floatingElementKinds;
@property (getter=_footerMarginWidth, nonatomic, readonly) double footerMarginWidth;
@property (getter=_footerRightMarginWidth, nonatomic, readonly) double footerRightMarginWidth;
@property (readonly) unsigned long long hash;
@property (getter=_headerMarginWidth, nonatomic, readonly) double headerMarginWidth;
@property (getter=_headerRightMarginWidth, nonatomic, readonly) double headerRightMarginWidth;
@property (getter=_heightForTableFooter, nonatomic, readonly) double heightForTableFooter;
@property (getter=_heightForTableHeader, nonatomic, readonly) double heightForTableHeader;
@property (getter=_indexFrame, nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } indexFrame;
@property (nonatomic) double initialDistance;
@property (nonatomic) double initialTranslation;
@property (nonatomic, retain) NSMutableArray *insertIndexPaths;
@property (getter=_isTableHeaderAutohiding, nonatomic, readonly) bool isTableHeaderAutohiding;
@property (nonatomic, retain) UICollectionViewTableLayoutSwipeActionPullView *leftSwipeView;
@property (getter=_marginWidth, nonatomic, readonly) double marginWidth;
@property (nonatomic, readonly) UIColor *multiselectCheckmarkColor;
@property (getter=_numberOfSections, nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) bool overlapsSectionHeaderViews;
@property (getter=_providesRowHeights, nonatomic, readonly) bool providesRowHeights;
@property (getter=_rawSeparatorInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } rawSeparatorInset;
@property (nonatomic, retain) UICollectionViewTableLayoutSwipeActionPullView *rightSwipeView;
@property (nonatomic, retain) UITableViewRowData *rowData;
@property (nonatomic) double rowHeight;
@property (getter=_rowSpacing, nonatomic, readonly) double rowSpacing;
@property (getter=_scrollView, nonatomic, readonly) UIScrollView *scrollView;
@property (getter=_sectionBorderWidth, nonatomic, readonly) double sectionBorderWidth;
@property (getter=_sectionContentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionContentInset;
@property (getter=_sectionContentInsetFollowsLayoutMargins, nonatomic, readonly) bool sectionContentInsetFollowsLayoutMargins;
@property (getter=_sectionCornerRadius, nonatomic, readonly) double sectionCornerRadius;
@property (nonatomic) double sectionFooterHeight;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic, copy) UIColor *separatorColor;
@property (nonatomic, retain) UIVisualEffect *separatorEffect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;
@property (nonatomic) long long separatorStyle;
@property (getter=_shouldUseNewHeaderFooterBehavior, nonatomic, readonly) bool shouldUseNewHeaderFooterBehavior;
@property (getter=_shouldUseSearchBarHeaderBehavior, nonatomic, readonly) bool shouldUseSearchBarHeaderBehavior;
@property (getter=_isShowingIndex, nonatomic, readonly) bool showingIndex;
@property (getter=_sidePadding, nonatomic, readonly) double sidePadding;
@property (getter=_style, nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIFeedbackStatesBehavior *swipeActionFeedbackBehavior;
@property (nonatomic, retain) UIPanGestureRecognizer *swipeActionPanRecognizer;
@property (getter=_swipeToDeleteCell, setter=_setSwipeToDeleteCell:, nonatomic, retain) UICollectionViewTableCell *swipeToDeleteCell;
@property (nonatomic, retain) NSIndexPath *swipedIndexPath;
@property (getter=_tableContentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tableContentInset;
@property (getter=_tableFooterView, nonatomic, readonly) UIView *tableFooterView;
@property (getter=_tableHeaderView, nonatomic, readonly) UIView *tableHeaderView;
@property (getter=_topPadding, nonatomic, readonly) double topPadding;
@property (nonatomic, readonly) bool usesVariableMargins;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)_accessoryBaseColor;
- (long long)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)_activePullView;
- (double)_adjustedXOffsetForInputOffset:(double)arg1;
- (void)_animateSwipeCancelation;
- (void)_applyContentSizeDeltaForEstimatedHeightAdjustments:(double)arg1;
- (double)_backgroundInset;
- (double)_bottomPadding;
- (bool)_canMoveRowAtIndexPath:(id)arg1;
- (void)_cellAccessoryButtonTappedAtIndexPath:(id)arg1;
- (void)_cleanupStateFromDeleteConfirmation;
- (void)_cleanupStateFromDeleteConfirmationForPendingAnimatedDelete:(bool)arg1;
- (id)_constants;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInset;
- (id)_dataSource;
- (double)_dataSourceHeightForFooterInSection:(long long)arg1;
- (double)_dataSourceHeightForHeaderInSection:(long long)arg1;
- (double)_dataSourceHeightForRowAtIndexPath:(id)arg1;
- (double)_defaultSectionFooterHeight;
- (double)_defaultSectionHeaderHeight;
- (id)_delegate;
- (double)_destructiveConfirmationPoint;
- (id)_detailTextForHeaderInSection:(long long)arg1;
- (long long)_editingStyleForRowAtIndexPath:(id)arg1;
- (void)_endSwipeToDeleteRowDidDelete:(bool)arg1;
- (double)_estimatedHeightForFooterInSection:(long long)arg1;
- (double)_estimatedHeightForHeaderInSection:(long long)arg1;
- (double)_estimatedHeightForRowAtIndexPath:(id)arg1;
- (bool)_estimatesRowHeights;
- (bool)_estimatesSectionFooterHeights;
- (bool)_estimatesSectionHeaderHeights;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_extraSeparatorFrameForIndexPath:(id)arg1 offset:(double)arg2;
- (id)_floatingElementKinds;
- (double)_footerMarginWidth;
- (double)_footerRightMarginWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSectionElementKind:(id)arg1 atSection:(long long)arg2 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 floating:(bool*)arg4;
- (void)_handleSwipeActionsGobbler:(id)arg1;
- (bool)_hasHeaderFooterBelowRowAtIndexPath:(id)arg1;
- (double)_headerMarginWidth;
- (double)_headerRightMarginWidth;
- (double)_heightForFooterInSection:(long long)arg1;
- (double)_heightForHeaderInSection:(long long)arg1;
- (double)_heightForRowAtIndexPath:(id)arg1;
- (double)_heightForTableFooter;
- (double)_heightForTableHeader;
- (long long)_indentationLevelForRowAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indexFrame;
- (void)_installSwipeActionsGobblerWithExcludedView:(id)arg1;
- (bool)_isShowingIndex;
- (bool)_isTableHeaderAutohiding;
- (id)_layoutAttributesForCellWithIndexPath:(id)arg1;
- (id)_layoutAttributesForSectionElementKind:(id)arg1 atSection:(long long)arg2;
- (id)_layoutAttributesForSeparatorWithIndexPath:(id)arg1;
- (id)_layoutAttributesForViewElementKind:(id)arg1;
- (bool)_makePullViewActive:(id)arg1 atIndexPath:(id)arg2;
- (double)_marginWidth;
- (double)_maxTitleWidthForFooterInSection:(long long)arg1;
- (double)_maxTitleWidthForHeaderInSection:(long long)arg1;
- (void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(bool)arg3 usingSpringWithStiffnessFactor:(double)arg4 completion:(id /* block */)arg5;
- (void)_notifyDelegateDidEndEditingRowAtIndexPath:(id)arg1;
- (void)_notifyDelegateWillBeginEditingRowAtIndexPath:(id)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (void)_performAction:(id)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(bool)arg3 view:(id)arg4;
- (void)_performDestructiveAction:(id)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(bool)arg3 view:(id)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_preferredLayoutMargins;
- (bool)_providesRowHeights;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawSeparatorInset;
- (void)_removeSwipeActionsGobbler;
- (void)_resetSwipeViewPositionsImmediately;
- (void)_resolveSwipeActionsForPullView:(id)arg1 atIndexPath:(id)arg2;
- (double)_rowSpacing;
- (double)_rubberBandOffsetForOffset:(double)arg1 usingSwipeView:(id)arg2;
- (id)_scrollView;
- (double)_sectionBorderWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sectionContentInset;
- (bool)_sectionContentInsetFollowsLayoutMargins;
- (double)_sectionCornerRadius;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_sectionRangeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setFloatingElementKinds:(id)arg1;
- (void)_setSwipeToDeleteCell:(id)arg1;
- (void)_setSwipedIndexPath:(id)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (bool)_shouldDisplayExtraSeparatorsAtOffset:(double*)arg1;
- (bool)_shouldDrawSeparatorAtTop:(bool)arg1 ofSection:(long long)arg2;
- (bool)_shouldHaveFooterViewForSection:(long long)arg1;
- (bool)_shouldHaveGlobalViewForElementOfKind:(id)arg1;
- (bool)_shouldHaveHeaderViewForSection:(long long)arg1;
- (bool)_shouldHaveViewForElementOfKind:(id)arg1 atSection:(long long)arg2 useRowData:(bool)arg3;
- (bool)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1;
- (bool)_shouldStripHeaderTopPaddingForSection:(long long)arg1;
- (bool)_shouldUseNewHeaderFooterBehavior;
- (bool)_shouldUseSearchBarHeaderBehavior;
- (double)_sidePadding;
- (double)_spacingForExtraSeparators;
- (long long)_style;
- (void)_swipeRecognizerBegan:(id)arg1;
- (void)_swipeRecognizerChanged:(id)arg1;
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(bool)arg2;
- (id)_swipeToDeleteCell;
- (double)_swipeToDeleteOffsetForRow:(long long)arg1 inSection:(long long)arg2;
- (id)_swipedCell;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_tableContentInset;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (long long)_titleAlignmentForFooterInSection:(long long)arg1;
- (long long)_titleAlignmentForHeaderInSection:(long long)arg1;
- (id)_titleForFooterInSection:(long long)arg1;
- (id)_titleForHeaderInSection:(long long)arg1;
- (double)_topPadding;
- (id)_viewForFooterInSection:(long long)arg1;
- (id)_viewForHeaderInSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRect;
- (bool)allowsMultipleSelection;
- (bool)allowsMultipleSelectionDuringEditing;
- (id)backgroundColor;
- (bool)canBeEdited;
- (bool)cellLayoutMarginsFollowReadableWidth;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1;
- (double)confirmationTranslationAdjustment;
- (id)deleteConfirmationIndexPath;
- (id)deleteIndexPaths;
- (void)deleteRowAtIndexPath:(id)arg1 animated:(bool)arg2;
- (id)deleteScanLineView;
- (double)estimatedRowHeight;
- (double)estimatedSectionFooterHeight;
- (double)estimatedSectionHeaderHeight;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (double)initialDistance;
- (double)initialTranslation;
- (id)insertIndexPaths;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint { double x1; double x2; })arg4;
- (bool)isEditing;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)leftSwipeView;
- (id)multiselectCheckmarkColor;
- (bool)overlapsSectionHeaderViews;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (void)resetSwipedRowWithCompletion:(id /* block */)arg1;
- (id)rightSwipeView;
- (id)rowData;
- (double)rowHeight;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (id)separatorColor;
- (id)separatorEffect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (long long)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellLayoutMarginsFollowReadableWidth:(bool)arg1;
- (void)setConfirmationTranslationAdjustment:(double)arg1;
- (void)setConstants:(id)arg1;
- (void)setDeleteIndexPaths:(id)arg1;
- (void)setDeleteScanLineView:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setInitialDistance:(double)arg1;
- (void)setInitialTranslation:(double)arg1;
- (void)setInsertIndexPaths:(id)arg1;
- (void)setLeftSwipeView:(id)arg1;
- (void)setRightSwipeView:(id)arg1;
- (void)setRowData:(id)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSectionFooterHeight:(double)arg1;
- (void)setSectionHeaderHeight:(double)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorEffect:(id)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setSwipeActionFeedbackBehavior:(id)arg1;
- (void)setSwipeActionPanRecognizer:(id)arg1;
- (void)setSwipedIndexPath:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)swipeActionFeedbackBehavior;
- (id)swipeActionPanRecognizer;
- (void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2 view:(id)arg3;
- (void)swipeRecognizerDidRecognize:(id)arg1;
- (id)swipedIndexPath;
- (bool)usesVariableMargins;

@end
