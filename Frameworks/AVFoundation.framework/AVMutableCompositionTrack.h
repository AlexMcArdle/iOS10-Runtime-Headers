/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableCompositionTrack : AVCompositionTrack {
    AVMutableCompositionTrackInternal * _mutablePriv;
}

@property (nonatomic, copy) NSString *extendedLanguageTag;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) int naturalTimeScale;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic, copy) NSArray *segments;

- (void)_notifyAssetThatDurationDidChangeWithSuccess:(bool)arg1;
- (void)_notifyAssetThatDurationWillChange;
- (void)_notifySelfThatSegmentsDidChangeWithSuccess:(bool)arg1;
- (void)_notifySelfThatSegmentsWillChange;
- (void)_setTrackReaderPropertyValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)_updateTrackAssociationToTrack:(id)arg1 type:(id)arg2 operation:(long long)arg3;
- (void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2;
- (long long)alternateGroupID;
- (id)extendedLanguageTag;
- (void)insertEmptyTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)insertTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 ofTrack:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(id*)arg4;
- (bool)insertTimeRanges:(id)arg1 ofTracks:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(id*)arg4;
- (id)languageCode;
- (int)naturalTimeScale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (void)removeTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2;
- (void)scaleTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 toDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)segments;
- (void)setAlternateGroupID:(long long)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNaturalTimeScale:(int)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSegments:(id)arg1;
- (bool)validateTrackSegments:(id)arg1 error:(id*)arg2;

@end
