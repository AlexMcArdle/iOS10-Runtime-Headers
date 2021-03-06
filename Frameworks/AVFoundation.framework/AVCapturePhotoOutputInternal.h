/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhotoOutputInternal : NSObject {
    int  HDRSceneObserverCount;
    NSArray * availablePhotoCodecTypes;
    NSArray * availablePhotoPixelFormatTypes;
    NSArray * availableRawPhotoPixelFormatTypes;
    NSObject<OS_dispatch_group> * beginEndIrisMovieCaptureHostTimeDispatchGroup;
    NSObject<OS_dispatch_queue> * beginEndIrisMovieCaptureHostTimeQueue;
    bool  dualCameraFusionSupported;
    int  flashSceneObserverCount;
    bool  highResolutionCaptureEnabled;
    bool  imageOptimizationForOfflineVideoStabilizationSupported;
    bool  isFlashScene;
    bool  isHDRScene;
    bool  isStillImageStabilizationScene;
    long long  lastSettingsUniqueID;
    bool  lensStabilizationDuringBracketedCaptureSupported;
    bool  livePhotoAutoTrimmingEnabled;
    bool  livePhotoCaptureEnabled;
    bool  livePhotoCaptureSupported;
    bool  livePhotoCaptureSuspended;
    struct { 
        int width; 
        int height; 
    }  livePhotoMovieDimensions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  livePhotoMovieDuration;
    bool  livePhotoMovieProcessingSuspended;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  livePhotoMovieVideoFrameDuration;
    unsigned long long  maxBracketedCapturePhotoCount;
    bool  optimizesImagesForOfflineVideoStabilization;
    AVCapturePhotoSettings * photoSettingsForSceneMonitoring;
    NSMutableArray * prepareRequests;
    NSMutableArray * requests;
    struct OpaqueFigSimpleMutex { } * requestsLock;
    NSObject<OS_dispatch_queue> * sceneDetectionObserversDispatchQueue;
    int  stillImageStabilizationSceneObserverCount;
    bool  stillImageStabilizationSupported;
    NSArray * supportedFlashModes;
    NSArray * supportedHDRModes;
    AVWeakReference * weakReference;
}

@end
