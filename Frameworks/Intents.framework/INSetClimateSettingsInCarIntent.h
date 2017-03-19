/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetClimateSettingsInCarIntent : INIntent <INSetClimateSettingsInCarIntentExport>

@property (nonatomic, readonly) long long airCirculationMode;
@property (nonatomic, readonly) long long climateZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enableAirConditioner;
@property (nonatomic, readonly, copy) NSNumber *enableAutoMode;
@property (nonatomic, readonly, copy) NSNumber *enableClimateControl;
@property (nonatomic, readonly, copy) NSNumber *enableFan;
@property (nonatomic, readonly, copy) NSNumber *fanSpeedIndex;
@property (nonatomic, readonly, copy) NSNumber *fanSpeedPercentage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long relativeFanSpeedSetting;
@property (nonatomic, readonly) long long relativeTemperatureSetting;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSMeasurement *temperature;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (long long)airCirculationMode;
- (long long)climateZone;
- (id)description;
- (id)domain;
- (id)enableAirConditioner;
- (id)enableAutoMode;
- (id)enableClimateControl;
- (id)enableFan;
- (id)fanSpeedIndex;
- (id)fanSpeedPercentage;
- (id)initWithEnableFan:(id)arg1 enableAirConditioner:(id)arg2 enableClimateControl:(id)arg3 enableAutoMode:(id)arg4 airCirculationMode:(long long)arg5 fanSpeedIndex:(id)arg6 fanSpeedPercentage:(id)arg7 relativeFanSpeedSetting:(long long)arg8 temperature:(id)arg9 relativeTemperatureSetting:(long long)arg10 climateZone:(long long)arg11;
- (id)parametersByName;
- (long long)relativeFanSpeedSetting;
- (long long)relativeTemperatureSetting;
- (void)setAirCirculationMode:(long long)arg1;
- (void)setClimateZone:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setEnableAirConditioner:(id)arg1;
- (void)setEnableAutoMode:(id)arg1;
- (void)setEnableClimateControl:(id)arg1;
- (void)setEnableFan:(id)arg1;
- (void)setFanSpeedIndex:(id)arg1;
- (void)setFanSpeedPercentage:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRelativeFanSpeedSetting:(long long)arg1;
- (void)setRelativeTemperatureSetting:(long long)arg1;
- (void)setTemperature:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)temperature;
- (id)verb;

@end
