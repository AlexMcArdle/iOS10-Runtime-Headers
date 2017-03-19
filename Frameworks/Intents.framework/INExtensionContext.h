/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INExtensionContext : NSExtensionContext <INCacheableObjectManagerObserver, INExtensionContextVending>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (void)load;

- (void)_deliverIntent:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_errorHandlingHostProxy;
- (void)_processIntentResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_validateExtension;
- (void)cacheableObjectManager:(id)arg1 wasToldAboutCacheableObject:(id)arg2;
- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)completeTransaction;
- (oneway void)confirmIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (oneway void)confirmationResponseForIntent:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)getApplicationContextWithCompletion:(id /* block */)arg1;
- (oneway void)handleIntent:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)handleIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)handleIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (void)stopSendingUpdatesForIntent:(id)arg1;

@end
