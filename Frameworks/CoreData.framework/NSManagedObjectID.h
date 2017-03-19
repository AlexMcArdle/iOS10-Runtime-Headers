/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSManagedObjectID : NSObject <NSCopying, NSFetchRequestResult>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSEntityDescription *entity;
@property (readonly) unsigned long long hash;
@property (readonly) NSPersistentStore *persistentStore;
@property (readonly) Class superclass;
@property (getter=isTemporaryID, readonly) bool temporaryID;

+ (id)_newArchiveForScalarObjectIDs:(id)arg1;
+ (bool)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (id)unarchivedScalarObjectIDsFromData:(id)arg1 withCoordinator:(id)arg2;
+ (long long)version;

- (id)URIRepresentation;
- (bool)_isDeallocating;
- (bool)_isPersistentStoreAlive;
- (id)_referenceData;
- (long long)_referenceData64;
- (id)_retainedURIString;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (bool)_tryRetain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (id)entityName;
- (id)initWithCoder:(id)arg1;
- (bool)isTemporaryID;
- (id)persistentStore;

@end
