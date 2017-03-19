/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheManager : NSObject <GEOCacheManaging> {
    <GEOCacheManaging> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isLocalProxy;
+ (id)sharedManager;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;

- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (long long)invalidationStateForComponent:(id)arg1;
- (long long)invalidationStateForPlace:(id)arg1;
- (id)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2;
- (void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 handler:(id /* block */)arg5;
- (void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(id /* block */)arg4;
- (id)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2;
- (void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 handler:(id /* block */)arg5;
- (void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(id /* block */)arg4;
- (void)snapshotWithFilePathArray:(id)arg1 handler:(id /* block */)arg2;
- (void)versionsForDomains:(id)arg1 handler:(id /* block */)arg2;

@end
