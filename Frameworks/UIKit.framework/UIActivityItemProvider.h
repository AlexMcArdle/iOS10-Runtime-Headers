/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource> {
    NSString * _activityType;
    id  _placeholderItem;
    float  _progress;
    id  _providedItem;
    NSString * _status;
}

@property (setter=_setActivityType:, nonatomic, copy) NSString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id item;
@property (nonatomic, retain) id placeholderItem;
@property (nonatomic) float progress;
@property (nonatomic, retain) id providedItem;
@property (nonatomic, copy) NSString *status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setActivityType:(id)arg1;
- (id)activityType;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)init;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;
- (void)main;
- (id)placeholderItem;
- (float)progress;
- (id)providedItem;
- (void)setPlaceholderItem:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProvidedItem:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
