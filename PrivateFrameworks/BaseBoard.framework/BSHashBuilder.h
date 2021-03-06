/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSHashBuilder : NSObject {
    unsigned long long  _hash;
}

+ (id)builder;

- (void)_append:(unsigned long long)arg1;
- (id)appendArray:(id)arg1;
- (id)appendBool:(bool)arg1;
- (id)appendCGFloat:(double)arg1;
- (id)appendDouble:(double)arg1;
- (id)appendFloat:(float)arg1;
- (id)appendHashingBlocks:(id /* block */)arg1;
- (id)appendInteger:(long long)arg1;
- (id)appendObject:(id)arg1;
- (id)appendPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)appendPointer:(void*)arg1;
- (id)appendRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)appendSize:(struct CGSize { double x1; double x2; })arg1;
- (id)appendUnsignedInteger:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;

@end
