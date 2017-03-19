/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemVideoOutputInternal : NSObject {
    double  advanceWakeUpInterval;
    bool  advanceWakeUpIntervalIsValid;
    double  currentRate;
    <AVPlayerItemOutputPullDelegate> * delegate;
    NSObject<OS_dispatch_queue> * delegateQueue;
    NSObject<OS_dispatch_source> * delegateWakeupSource;
    struct OpaqueVTPixelBufferConformer { } * pixelBufferConformer;
    AVWeakReference * playerItemWeakReference;
    bool  shouldTagBuffersWithInfo;
    NSObject<OS_dispatch_queue> * stateQueue;
    bool  suppressesPlayerRendering;
    struct OpaqueCMTimebase { } * timebase;
    struct OpaqueFigVisualContext { } * vc;
    AVVideoOutputSettings * videoSettings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  wakeUpImageTime;
}

@end