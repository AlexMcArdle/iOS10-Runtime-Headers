/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInput : NSObject <AVKeyPathDependencyHost, AVWeakObservable> {
    AVAssetWriterInputInternal * _internal;
}

@property (getter=_alternateGroupID, setter=_setAlternateGroupID:, nonatomic) short alternateGroupID;
@property (getter=_isAttachedToAdaptor, nonatomic, readonly) bool attachedToAdaptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expectsMediaDataInRealTime;
@property (readonly) unsigned long long hash;
@property (getter=_helper, setter=_setHelper:, nonatomic, retain) AVAssetWriterInputHelper *helper;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, copy) NSArray *metadata;
@property (readonly) long long numberOfAppendFailures;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (getter=_outputSettingsObject, nonatomic, readonly) AVOutputSettings *outputSettingsObject;
@property (getter=_pixelBufferPool, nonatomic, readonly) struct __CVPixelBufferPool { }*pixelBufferPool;
@property (getter=_provisionalAlternateGroupID, setter=_setProvisionalAlternateGroupID:, nonatomic) short provisionalAlternateGroupID;
@property (getter=isReadyForMoreMediaData, nonatomic, readonly) bool readyForMoreMediaData;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription { }*sourceFormatHint;
@property (getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:, nonatomic, copy) NSDictionary *sourcePixelBufferAttributes;
@property (getter=_status, nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (getter=_trackReferences, nonatomic, readonly) NSDictionary *trackReferences;
@property (getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:, nonatomic, retain) AVWeakReference *weakReferenceToAssetWriter;

+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
+ (void)initialize;

- (short)_alternateGroupID;
- (bool)_appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (long long)_appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (id)_attachedAdaptor;
- (void)_didStartInitialSession;
- (id)_helper;
- (bool)_isAttachedToAdaptor;
- (id)_outputSettingsObject;
- (struct __CVPixelBufferPool { }*)_pixelBufferPool;
- (bool)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaFileType:(id)arg2 error:(id*)arg3;
- (void)_prepareToEndSession;
- (bool)_prepareToFinishWritingReturningError:(id*)arg1;
- (short)_provisionalAlternateGroupID;
- (void)_setAlternateGroupID:(short)arg1;
- (void)_setAttachedAdaptor:(id)arg1;
- (void)_setHelper:(id)arg1;
- (void)_setProvisionalAlternateGroupID:(short)arg1;
- (void)_setSourcePixelBufferAttributes:(id)arg1;
- (void)_setWeakReferenceToAssetWriter:(id)arg1;
- (id)_sourcePixelBufferAttributes;
- (long long)_status;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
- (id)_trackReferences;
- (void)_transitionToTerminalStatus:(long long)arg1;
- (id)_weakReferenceToAssetWriter;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (bool)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;
- (id)availableTrackAssociationTypes;
- (bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (bool)canPerformMultiplePasses;
- (id)currentPassDescription;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (id)description;
- (bool)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (void)finalize;
- (id)init;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
- (bool)isReadyForMoreMediaData;
- (id)languageCode;
- (long long)layer;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (bool)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadata;
- (struct CGSize { double x1; double x2; })naturalSize;
- (long long)numberOfAppendFailures;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputSettings;
- (int)outputTrackID;
- (bool)performsMultiPassEncodingIfSupported;
- (long long)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (long long)preferredMediaChunkSize;
- (float)preferredVolume;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)sampleReferenceBaseURL;
- (void)setExpectsMediaDataInRealTime:(bool)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(long long)arg1;
- (void)setMarksOutputTrackAsEnabled:(bool)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(bool)arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWritesMediaDataToBeginningOfFile:(bool)arg1;
- (const struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (bool)writesMediaDataToBeginningOfFile;

@end
