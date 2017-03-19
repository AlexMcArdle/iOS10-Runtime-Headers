/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface HapticServer : NSObject <NSXPCListenerDelegate> {
    unsigned long long  _initCount;
    NSXPCListener * _listener;
    struct ServerManager { struct map<unsigned long, std::__1::shared_ptr<ClientEntry>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<ClientEntry> > > > { struct __tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::less<unsigned long>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; } * _manager;
    unsigned long long  _prewarmCount;
    struct map<int, std::__1::bitset<255>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::bitset<255> > > > { 
        struct __tree<std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::bitset<255> > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::bitset<255> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _processIndexMap;
    unsigned long long  _runningChannelIDCount;
    unsigned long long  _runningCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long initCount;
@property (readonly) /* Warning: unhandled struct encoding: '{ServerManager={map<unsigned long' */ struct *manager; /* unknown property attribute:  unsigned int>=II}^{HapticSynth}{HapticMutex=^^?*^{_opaque_pthread_t}{_opaque_pthread_mutex_t=q[56c]}}^{VibeEngine}d^{opaqueCMSession}iBiBBBBB@^{RealtimeMessenger}} */
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)addProcessEntry:(int)arg1;
- (int)cancelPatternWithOptions:(struct __CFDictionary { }*)arg1;
- (void)dealloc;
- (void)decrementInit;
- (void)decrementPrewarmCount;
- (void)decrementRunningCount:(id /* block */)arg1;
- (struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })entryWithID:(unsigned long long)arg1;
- (unsigned long long)getChannelID;
- (bool)incrementInit:(id*)arg1;
- (unsigned long long)incrementPrewarmCount;
- (unsigned long long)incrementRunningCount;
- (id)init;
- (unsigned long long)initCount;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (int)loadSynthPreset;
- (struct ServerManager { struct map<unsigned long, std::__1::shared_ptr<ClientEntry>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<ClientEntry> > > > { struct __tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::less<unsigned long>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)manager;
- (int)playVibePattern:(struct __CFDictionary { }*)arg1 gain:(float)arg2 synchronizer:(struct SSPlayerSynchronizer { }*)arg3 flags:(unsigned int)arg4 atTime:(double)arg5 completionHandler:(id /* block */)arg6;
- (void)removeProcessEntry:(unsigned long long)arg1;
- (int)setupClient:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (int)startPrewarm;
- (int)stopPrewarm;

@end
