/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreSharedBufferData : NSData {
    struct RefPtr<WebCore::SharedBuffer::DataBuffer> { 
        struct DataBuffer {} *m_ptr; 
    }  sharedBufferDataBuffer;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)bytes;
- (void)dealloc;
- (id)initWithSharedBufferDataBuffer:(struct DataBuffer { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct Vector<char, 0, WTF::CrashOnOverflow, 16> { char *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; }*)arg1;
- (unsigned long long)length;

@end
