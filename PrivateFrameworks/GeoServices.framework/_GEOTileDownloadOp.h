/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTileDownloadOp : NSObject <NSURLSessionDataDelegate> {
    int  _attempts;
    NSData * _auditToken;
    _GEOTileDownloadOp * _baseTile;
    NSData * _cachedData;
    NSString * _cachedEtag;
    int  _checksumMethod;
    unsigned long long  _contentLength;
    NSMutableData * _data;
    GEOSimpleTileRequester * _delegate;
    NSOperationQueue * _delegateQueue;
    long long  _eTagType;
    NSString * _editionHeader;
    bool  _finished;
    bool  _gotData;
    int  _httpResponseStatusCode;
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    }  _key;
    _GEOTileDownloadOp * _localizationTile;
    unsigned int  _priority;
    bool  _requireWiFi;
    NSString * _responseEtag;
    GEONSURLSharedSession * _session;
    double  _startTime;
    NSURLSessionTask * _task;
    NSURLSessionTaskMetrics * _taskMetrics;
    unsigned int  _tileEdition;
    double  _timeout;
    NSURL * _url;
    bool  _useCookies;
    NSString * _userAgent;
}

@property (nonatomic, retain) NSData *auditToken;
@property (nonatomic, retain) _GEOTileDownloadOp *baseTile;
@property (nonatomic, retain) NSData *cachedData;
@property (nonatomic, retain) NSString *cachedEtag;
@property (nonatomic, readonly) unsigned long long contentLength;
@property (nonatomic, retain) NSMutableData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GEOSimpleTileRequester *delegate;
@property (nonatomic, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long eTagType;
@property (nonatomic, retain) NSString *editionHeader;
@property (nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int httpResponseStatusCode;
@property struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } key;
@property (nonatomic, retain) _GEOTileDownloadOp *localizationTile;
@property (nonatomic) unsigned int priority;
@property (nonatomic) bool requireWiFi;
@property (nonatomic, retain) NSString *responseEtag;
@property (nonatomic, retain) GEONSURLSharedSession *session;
@property (nonatomic, readonly) double startTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLSessionTask *task;
@property (nonatomic, retain) NSURLSessionTaskMetrics *taskMetrics;
@property unsigned int tileEdition;
@property (nonatomic) double timeout;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic) bool useCookies;
@property (nonatomic, retain) NSString *userAgent;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)_reportNetworkError:(id)arg1;
- (id)auditToken;
- (id)baseTile;
- (id)cachedData;
- (id)cachedEtag;
- (void)cancel;
- (unsigned long long)contentLength;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (long long)eTagType;
- (id)editionHeader;
- (double)elapsed;
- (bool)finished;
- (int)httpResponseStatusCode;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })key;
- (id)localizationTile;
- (unsigned int)priority;
- (bool)requireWiFi;
- (id)responseEtag;
- (id)session;
- (void)setAuditToken:(id)arg1;
- (void)setBaseTile:(id)arg1;
- (void)setCachedData:(id)arg1;
- (void)setCachedEtag:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setETagType:(long long)arg1;
- (void)setEditionHeader:(id)arg1;
- (void)setKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (void)setLocalizationTile:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setRequireWiFi:(bool)arg1;
- (void)setResponseEtag:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskMetrics:(id)arg1;
- (void)setTileEdition:(unsigned int)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseCookies:(bool)arg1;
- (void)setUserAgent:(id)arg1;
- (void)start;
- (double)startTime;
- (id)task;
- (id)taskMetrics;
- (unsigned int)tileEdition;
- (double)timeout;
- (id)url;
- (bool)useCookies;
- (id)userAgent;

@end
