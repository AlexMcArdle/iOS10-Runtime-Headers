/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSISNode : BWNode <BWBracketSettingsProvider> {
    NSArray * _afWindowParamsArray;
    bool  _allowExperimentalOverrides;
    bool  _alwaysRequestsPreBracketedEV0;
    float  _bracketGainCap;
    NSDictionary * _cameraTuningDictionary;
    int (* _createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings * _currentCaptureSettings;
    NSArray * _exposureValues;
    NSDictionary * _fusionParamsDictionary;
    int  _fusionScheme;
    int  _lastFusionTypeUsed;
    int  _lensShadingCorrectionMode;
    int  _maxIntegrationTimeLimitMsec;
    NSDictionary * _noiseModelParamsDictionary;
    int  _numberFramesReceived;
    int  _oisBracketCount;
    NSArray * _oisExposureDurationTypes;
    bool  _preBracketedFrameReceived;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSDictionary * _sensorIDDictionary;
    int  _sisBracketCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (id)_initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(int (*)arg3 fusionScheme:(int)arg4 allowExperimentalOverrides:(bool)arg5;
- (id)_oisBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1 stillImageSettings:(id)arg2;
- (void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (int)_setupSampleBufferProcessor;
- (id)_sisBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1 stillImageSettings:(id)arg2;
- (int)_unpackSISOptions;
- (bool)alwaysRequestsPreBracketedEV0;
- (bool)attachesInputBracketToOutputSampleBuffer;
- (id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg2 stillImageSettings:(id)arg3;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 fusionScheme:(int)arg3;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAlwaysRequestsPreBracketedEV0:(bool)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1;

@end