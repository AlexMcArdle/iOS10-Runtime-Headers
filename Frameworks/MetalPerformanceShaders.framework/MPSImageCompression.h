/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageCompression : MPSUnaryImageKernel {
    void _backgroundColor;
    unsigned char  _blockSize;
    unsigned long long  _destAlpha;
    unsigned long long  _destinationAlpha;
    unsigned long long  _destinationPixelFormat;
    unsigned int  _kernelID_dual;
    unsigned int  _kernelID_single;
    unsigned long long  _sourceAlpha;
    unsigned long long  _sourcePixelFormat;
}

@property (nonatomic, readonly) unsigned long long destinationAlpha;
@property (nonatomic, readonly) unsigned long long destinationPixelFormat;
@property (nonatomic, readonly) unsigned long long sourceAlpha;
@property (nonatomic, readonly) unsigned long long sourcePixelFormat;

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSKernelInfo {} *x4; struct MPSKernelInfo {} *x5; struct MPSKernelInfo {} *x6; struct MPSKernelInfo {} *x7; struct MPSKernelInfo {} *x8; struct MPSKernelInfo {} *x9; struct MPSKernelInfo {} *x10; struct MPSKernelInfo {} *x11; struct MPSKernelInfo {} *x12; struct MPSKernelInfo {} *x13; struct MPSKernelInfo {} *x14; }*)libraryInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (unsigned long long)destinationAlpha;
- (unsigned long long)destinationPixelFormat;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 srcFormat:(unsigned long long)arg2 srcAlpha:(unsigned long long)arg3 backgroundColor:(double*)arg4 destFormat:(unsigned long long)arg5 destAlpha:(unsigned long long)arg6;
- (unsigned long long)sourceAlpha;
- (unsigned long long)sourcePixelFormat;

@end
