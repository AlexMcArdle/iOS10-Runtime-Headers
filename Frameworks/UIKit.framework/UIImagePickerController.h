/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIImagePickerController : UINavigationController <NSCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    id  _image;
    struct { 
        unsigned int visible : 1; 
        unsigned int isCleaningUp : 1; 
        unsigned int savingOptions : 3; 
        unsigned int didRevertStatusBar : 1; 
    }  _imagePickerFlags;
    NSArray * _mediaTypes;
    bool  _previousStatusBarHidden;
    int  _previousStatusBarStyle;
    NSMutableDictionary * _properties;
    long long  _sourceType;
}

@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsImageEditing;
@property (nonatomic) long long cameraCaptureMode;
@property (nonatomic) long long cameraDevice;
@property (nonatomic) long long cameraFlashMode;
@property (nonatomic, retain) UIView *cameraOverlayView;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } cameraViewTransform;
@property (nonatomic) <UINavigationControllerDelegate><UIImagePickerControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *mediaTypes;
@property (nonatomic) bool showsCameraControls;
@property (nonatomic) long long sourceType;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) long long videoQuality;

+ (bool)_isMediaTypeAvailable:(id)arg1 forSource:(long long)arg2;
+ (bool)_reviewCapturedItems;
+ (id)availableCaptureModesForCameraDevice:(long long)arg1;
+ (id)availableMediaTypesForSourceType:(long long)arg1;
+ (bool)isCameraDeviceAvailable:(long long)arg1;
+ (bool)isFlashAvailableForCameraDevice:(long long)arg1;
+ (bool)isSourceTypeAvailable:(long long)arg1;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_adjustedContentSizeForPopover:(struct CGSize { double x1; double x2; })arg1;
- (bool)_allowsImageEditing;
- (bool)_allowsIris;
- (bool)_allowsMultipleSelection;
- (void)_autoDismiss;
- (id)_cameraViewController;
- (id)_createInitialController;
- (bool)_didRevertStatusBar;
- (void)_imagePickerDidCancel;
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;
- (void)_imagePickerDidCompleteWithInfoArray:(id)arg1;
- (unsigned long long)_imagePickerSavingOptions;
- (id)_initWithSourceImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_initializeProperties;
- (bool)_isCameraCaptureModeValid:(long long)arg1;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (id)_properties;
- (void)_removeAllChildren;
- (void)_setAllowsImageEditing:(bool)arg1;
- (void)_setAllowsIris:(bool)arg1;
- (void)_setAllowsMultipleSelection:(bool)arg1;
- (void)_setImagePickerSavingOptions:(unsigned long long)arg1;
- (void)_setProperties:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_setupControllersForCurrentSourceType;
- (bool)_sourceTypeIsCamera;
- (void)_updateCameraCaptureMode;
- (id)_valueForProperty:(id)arg1;
- (bool)allowsEditing;
- (bool)allowsImageEditing;
- (long long)cameraCaptureMode;
- (long long)cameraDevice;
- (long long)cameraFlashMode;
- (id)cameraOverlayView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })cameraViewTransform;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mediaTypes;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsImageEditing:(bool)arg1;
- (void)setCameraCaptureMode:(long long)arg1;
- (void)setCameraDevice:(long long)arg1;
- (void)setCameraFlashMode:(long long)arg1;
- (void)setCameraOverlayView:(id)arg1;
- (void)setCameraViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setMediaTypes:(id)arg1;
- (void)setShowsCameraControls:(bool)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setVideoMaximumDuration:(double)arg1;
- (void)setVideoQuality:(long long)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)showsCameraControls;
- (long long)sourceType;
- (bool)startVideoCapture;
- (void)stopVideoCapture;
- (unsigned long long)supportedInterfaceOrientations;
- (void)takePicture;
- (double)videoMaximumDuration;
- (long long)videoQuality;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillUnload;

@end
