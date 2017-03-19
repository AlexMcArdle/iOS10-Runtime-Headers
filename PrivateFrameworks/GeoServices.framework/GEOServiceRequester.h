/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOServiceRequester : NSObject {
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
}

+ (id)_debugRequestName;
+ (int)_experimentDispatcherRequestTypeForRequest:(id)arg1;
+ (long long)_experimentType;
+ (unsigned char)_requestCounterInfoTypeForRequest:(id)arg1;
+ (id)_serviceTypeNumber;
+ (bool)_shouldThrottleRequests;
+ (id)_throttleKey;
+ (unsigned long long)_urlType;

- (void)_cancelRequest:(id)arg1;
- (void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_validateResponse:(id)arg1;
- (void)dealloc;
- (id)init;

@end
