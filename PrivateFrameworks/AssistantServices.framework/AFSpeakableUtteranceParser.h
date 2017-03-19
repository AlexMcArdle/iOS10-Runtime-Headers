/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeakableUtteranceParser : NSObject {
    id  _functionHandler;
    NSLocale * _locale;
    NSMutableDictionary * _providers;
}

@property (nonatomic) bool handleTTSCodes;
@property (nonatomic) bool handlesFunctions;

+ (bool)_shouldAutomaticallyProvideFunctions;
+ (id)parseUserGeneratedMessage:(id)arg1;

- (void).cxx_destruct;
- (id)_handleControlCodeAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; })arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int*)arg4 hadEmpties:(bool*)arg5;
- (id)_handleOptionalAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; })arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int*)arg4;
- (id)_handleProviderAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; })arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int*)arg4;
- (bool)handleTTSCodes;
- (bool)handlesFunctions;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)parseStringRemovingControlCharacters:(id)arg1 error:(id*)arg2;
- (id)parseStringWithFormat:(id)arg1 error:(id*)arg2;
- (id)parseStringWithFormat:(id)arg1 includeControlCharacters:(bool)arg2 error:(id*)arg3 hadEmpties:(bool*)arg4;
- (void)registerProvider:(id)arg1 forNamespace:(id)arg2;
- (void)setHandleTTSCodes:(bool)arg1;
- (void)setHandlesFunctions:(bool)arg1;

@end
