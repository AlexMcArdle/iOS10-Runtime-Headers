/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMetalDrawable : NSObject <CAMetalDrawable, MTLDrawableSPI> {
    <MTLTexture> * _cachedTexture;
    unsigned long long  _drawableID;
    unsigned int  _insertSeed;
    CAMetalLayer * _layer;
    NSMutableArray * _presentedHandlers;
    double  _presentedTime;
    struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; struct _CAMetalLayerPrivate {} *x7; struct __IOSurface {} *x8; id x9; struct CGColorSpace {} *x10; unsigned int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; } * _priv;
    unsigned long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long drawableID;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int insertSeed;
@property (readonly) CAMetalLayer *layer;
@property (nonatomic) double presentedTime;
@property (nonatomic) unsigned long long status;
@property (readonly) Class superclass;
@property (readonly) <MTLTexture> *texture;

- (void).cxx_destruct;
- (void)addPresentedHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)didPresentAtTime:(double)arg1;
- (unsigned long long)drawableID;
- (bool)hasPresentedHandlers;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; struct _CAMetalLayerPrivate {} *x7; struct __IOSurface {} *x8; id x9; struct CGColorSpace {} *x10; unsigned int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; }*)arg1 layer:(id)arg2;
- (unsigned int)insertSeed;
- (id)layer;
- (void)present;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (double)presentedTime;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; struct _CAMetalLayerPrivate {} *x7; struct __IOSurface {} *x8; id x9; struct CGColorSpace {} *x10; unsigned int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; }*)priv;
- (void)releasePrivateReferences:(struct _CAMetalLayerPrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct SpinLock { struct { int x_1_2_1; } x_3_1_1; } x3; struct _CAImageQueue {} *x4; id x5; struct List<_CAMetalDrawablePrivate *> {} *x6; unsigned int x7; struct _CAMetalDrawablePrivate {} *x8; id x9; struct CGSize { double x_10_1_1; double x_10_1_2; } x10; unsigned int x11; unsigned int x12; unsigned long long x13; unsigned long long x14; struct Atomic { struct { int x_1_2_1; } x_15_1_1; } x15; id x16; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x17; out void*x18; int x19; BOOL x20; void*x21; struct { int x_22_1_1; } x22; }*)arg1;
- (void)setDrawableID:(unsigned long long)arg1;
- (void)setInsertSeed:(unsigned int)arg1;
- (void)setPresentedTime:(double)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (id)texture;

@end
