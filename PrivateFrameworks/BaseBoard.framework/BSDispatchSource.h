/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSDispatchSource : NSObject {
    id /* block */  _cancelHandler;
    id /* block */  _eventHandler;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
}

@property (nonatomic, copy) id /* block */ cancelHandler;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *queue;

- (id /* block */)cancelHandler;
- (void)dealloc;
- (id /* block */)eventHandler;
- (id)initWithType:(struct dispatch_source_type_s { }*)arg1 handle:(unsigned long long)arg2 mask:(unsigned long long)arg3 queue:(id)arg4 configureSourceBlock:(id /* block */)arg5;
- (void)invalidate;
- (id)queue;
- (void)resume;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setEventHandler:(id /* block */)arg1;

@end
