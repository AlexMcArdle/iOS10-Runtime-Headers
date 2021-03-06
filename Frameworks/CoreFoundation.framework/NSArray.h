/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSArray : NSObject <INIntentResolutionResultDataProviding, NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding>

@property (nonatomic, readonly) IMMessageItem *__imLastMessageItem;
@property (nonatomic, readonly) NSDictionary *bw_builtInMicRouteDictionary;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IMMessage *lastFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingMessage;
@property (nonatomic, readonly) IMMessage *lastMessage;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)array;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithArray:(id)arg1 copyItems:(bool)arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)arrayWithObject:(id)arg1;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithOrderedSet:(id)arg1;
+ (id)arrayWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)arrayWithSet:(id)arg1;
+ (id)arrayWithSet:(id)arg1 copyItems:(bool)arg2;
+ (id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (id)allObjects;
- (id)arrayByAddingObject:(id)arg1;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (id)arrayByExcludingObjectsInArray:(id)arg1;
- (id)arrayByExcludingToObjectsInArray:(id)arg1;
- (id)componentsJoinedByString:(id)arg1;
- (bool)containsObject:(id)arg1;
- (bool)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)containsObjectIdenticalTo:(id)arg1;
- (bool)containsObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (unsigned long long)countForObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)firstObject;
- (id)firstObjectCommonWithArray:(id)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingComparator:(id /* block */)arg4;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)indexesOfObject:(id)arg1;
- (id)indexesOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)indexesOfObjectIdenticalTo:(id)arg1;
- (id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)indexesOfObjectsPassingTest:(id /* block */)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(bool)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArray:(id)arg1;
- (bool)isNSArray__;
- (id)lastObject;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)objectEnumerator;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)objectsPassingTest:(id /* block */)arg1;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)reverseObjectEnumerator;
- (id)reversedArray;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;
- (id)sortedArrayUsingFunction:(int (*)arg1 context:(void*)arg2;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)newWithContentsOf:(id)arg1 immutable:(bool)arg2;

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;
- (id)_stringToWrite;
- (id)_sumForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_unionOfSetsForKeyPath:(id)arg1;
- (bool)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5;
- (Class)classForCoder;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)pathsMatchingExtensions:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedArrayHint;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)sortedArrayUsingFunction:(int (*)arg1 context:(void*)arg2 hint:(id)arg3;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (id)stringsByAppendingPathComponent:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2;
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)arrayByFilteringLaunchProhibitedAppsFrom:(id)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)_filteredArrayOfObjectsPassingTest:(id /* block */)arg1;
- (id)_initWithObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct CGSize { double x1; double x2; })_legacy_drawComponentsJoinedByString:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; }*)arg2 forWidth:(double)arg3 withFont:(id)arg4 lineBreakMode:(long long)arg5;
- (void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)_nextToLastObject;
- (id)_ui_firstObject;
- (id)_ui_onlyObject;
- (id)ui_arrayByRemovingLastObjectEqualTo:(id)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (void)un_each:(id /* block */)arg1;
- (id)un_filter:(id /* block */)arg1;
- (id)un_map:(id /* block */)arg1;
- (id)un_nonEmptyCopy;
- (id)un_safeArrayContainingClass:(Class)arg1;
- (id)un_safeArrayContainingClasses:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_arrayByMappingWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)bs_containsObjectPassingTest:(id /* block */)arg1;
- (id)bs_differenceWithArray:(id)arg1;
- (void)bs_each:(id /* block */)arg1;
- (void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(id /* block */)arg2;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_first:(unsigned long long)arg1;
- (id)bs_firstObjectOfClass:(Class)arg1;
- (id)bs_firstObjectOfClassNamed:(id)arg1;
- (id)bs_firstObjectPassingTest:(id /* block */)arg1;
- (id)bs_flatten;
- (id)bs_flattenedDifferenceWithArray:(id)arg1;
- (id)bs_map:(id /* block */)arg1;
- (id)bs_mapNoNulls:(id /* block */)arg1;
- (id)bs_objectsOfClass:(Class)arg1;
- (id)bs_reverse;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

+ (id)bw_selectedInputsArrayForBuiltInMicRouteDictionary:(id)arg1 dataSource:(id)arg2 polarPattern:(unsigned int)arg3;

- (id)bw_builtInMicRouteDictionary;
- (id)pickableRouteWithUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

- (id)cutFirstObject;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (bool)_cn_all:(id /* block */)arg1;
- (bool)_cn_any:(id /* block */)arg1;
- (id)_cn_distinctObjects;
- (void)_cn_each:(id /* block */)arg1;
- (void)_cn_each:(id /* block */)arg1 untilCancelled:(id)arg2;
- (void)_cn_each_reverse:(id /* block */)arg1;
- (id)_cn_filter:(id /* block */)arg1;
- (id)_cn_firstObjectPassingTest:(id /* block */)arg1;
- (id)_cn_flatMap:(id /* block */)arg1;
- (id)_cn_flatten;
- (id)_cn_groupBy:(id /* block */)arg1;
- (id)_cn_indexBy:(id /* block */)arg1;
- (unsigned long long)_cn_indexOfFirstObjectPassingTest:(id /* block */)arg1;
- (id)_cn_indicesForObjects:(id)arg1;
- (bool)_cn_isIdenticalToArray:(id)arg1;
- (bool)_cn_isNonEmpty;
- (id)_cn_join:(id)arg1;
- (id)_cn_joinWithBlock:(id /* block */)arg1;
- (id)_cn_map:(id /* block */)arg1;
- (id)_cn_partition:(id /* block */)arg1;
- (id)_cn_reduce:(id /* block */)arg1;
- (id)_cn_reduce:(id /* block */)arg1 initialValue:(id)arg2;
- (id)_cn_safeSortedArrayUsingComparator:(id /* block */)arg1;
- (id)_cn_skip:(unsigned long long)arg1;
- (id)_cn_skipLast:(unsigned long long)arg1;
- (id)_cn_sortedArrayUsingAuxiliarySortOrder:(id)arg1 transform:(id /* block */)arg2;
- (id)_cn_tail;
- (id)_cn_take:(unsigned long long)arg1;
- (id)_cn_zip:(id)arg1;
- (void)_cn_zip:(id)arg1 withBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTFilteredArrayForAPS;
- (id)_IDsFromURIs;
- (id)_URIsFromIDs;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)_geo_bestLocalizedString;
- (id)_geo_bestLocalizedStringValue;

// Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore

- (id)componentsJoinedIntoListWithMaxItems:(int)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void)__enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)__imItems;
- (id)__imLastMessageItem;
- (id)__itemForChatItemAtIndex:(unsigned long long)arg1;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)indexesOfPartsOfMessage:(id)arg1;
- (id)indexesOfPartsOfMessageItem:(id)arg1;
- (id)lastFinishedMessage;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingMessage;
- (id)lastMessage;
- (id)messageForChatItemAtIndex:(unsigned long long)arg1;
- (id)messages;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)__IMStripPotentialTokenURIs;
- (id)__imArrayByApplyingBlock:(id /* block */)arg1;
- (id)__imArrayByApplyingBlock:(id /* block */)arg1 filter:(id /* block */)arg2;
- (id)__imArrayByFilteringWithBlock:(id /* block */)arg1;
- (id)__imDeepCopy;
- (id)__imFirstObject;
- (void)__imForEach:(id /* block */)arg1;
- (bool)__imIsMutable;
- (id)__imSetFromArray;
- (id)_copyForEnumerating;
- (bool)_hasSameMembers:(id)arg1;
- (bool)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (bool)containsObjectIdenticalTo:(id)arg1;
- (void)differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3;
- (void)differencesFromArray:(id)arg1 usingComparator:(id /* block */)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4;
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

+ (id)arrayWithValues:(id)arg1 inBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (id)_sa_mappedArrayWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

- (id)_arrayByFilteringCandidatesForNonExtendedView;

// Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices

- (id)_nextKeywordUsingCursors:(struct __CFDictionary { }*)arg1;
- (id)_scrambledKeywordsAndAddToSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_web_lowercaseStrings;

@end
