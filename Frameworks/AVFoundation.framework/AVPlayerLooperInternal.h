/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerLooperInternal : NSObject {
    NSError * error;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  forwardPlaybackStartTime;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    AVPlayerItem * lastEnqueuedLoopingItem;
    bool  listeningForItemFailedToPlayToEndTime;
    long long  loopCount;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  loopRange;
    AVPlayerItem * loopingItem;
    NSMutableArray * loopingItemCopies;
    NSMutableArray * loopingItemStatusKVOInvokers;
    AVQueuePlayer * loopingPlayer;
    <AVCallbackCancellation> * playerCurrentItemKVOInvoker;
    long long  playerOriginalActionAtItemEnd;
    long long  status;
    bool  waitingForLastLoopingCopyToFinish;
    AVWeakReference * weakReference;
}

@end
