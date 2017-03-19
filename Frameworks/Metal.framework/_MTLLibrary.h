/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLLibrary : NSObject <MTLLibrary> {
    struct MTLLibraryContainer { int x1; struct { unsigned char x_2_1_1[32]; } x2; struct MTLLibraryData {} *x3; id x4; id x5; } * _cacheEntry;
    <MTLDevice> * _device;
    NSMutableDictionary * _functionDictionary;
    NSArray * _functionNames;
    NSString * _label;
    /* Warning: unhandled struct encoding: '{MTLLibraryData=^^?i@}' */ struct MTLLibraryData { int (**x1)(); int x2; id x3; } * _libraryData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly, retain) NSMutableDictionary *functionDictionary;
@property (readonly, retain) NSArray *functionNames;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) /* Warning: unhandled struct encoding: '{MTLLibraryData=^^?i@}' */ struct MTLLibraryData { int (**x1)(); int x2; id x3; }*libraryData;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionDictionary;
- (id)functionNames;
- (id)initWithLibraryContainer:(struct MTLLibraryContainer { int x1; struct { unsigned char x_2_1_1[32]; } x2; struct MTLLibraryData {} *x3; id x4; id x5; }*)arg1 device:(id)arg2;
- (id)label;
- (/* Warning: unhandled struct encoding: '{MTLLibraryData=^^?i@}' */ struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)libraryData;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (void)setLabel:(id)arg1;

@end
