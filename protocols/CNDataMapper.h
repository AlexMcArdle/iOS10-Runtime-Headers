/* Generated by RuntimeBrowser.
 */

@protocol CNDataMapper <NSObject>

@required

- (NSArray *)accountsMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSArray *)contactsForFetchRequest:(CNContactFetchRequest *)arg1 error:(id*)arg2;
- (NSArray *)contactsForFetchRequest:(CNContactFetchRequest *)arg1 matchInfos:(id*)arg2 error:(id*)arg3;
- (NSArray *)containersMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSString *)defaultContainerIdentifier;
- (bool)executeSaveRequest:(CNSaveRequest *)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(CNSaveRequest *)arg1 response:(id*)arg2 error:(id*)arg3;
- (NSArray *)groupsMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (id)initWithContactsEnvironment:(CNContactsEnvironment *)arg1;
- (NSString *)meContactIdentifierWithError:(id*)arg1;
- (NSArray *)membersOfGroupWithIdentifier:(NSString *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;
- (CNPolicy *)policyForContainerWithIdentifier:(NSString *)arg1 error:(id*)arg2;
- (void)requestAccessForEntityType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (NSArray *)serverSearchContainersMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSArray *)subgroupsOfGroupWithIdentifier:(NSString *)arg1 error:(id*)arg2;

@optional

- (NSArray *)_allCustomProperties;
- (id)_createInfo;
- (NSArray *)_customPropertyValuesForRecordWithIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSArray *)_groupsMatchingCoreDataPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSArray *)_infosForAccountsWithIdentifiers:(NSArray *)arg1 error:(id*)arg2;
- (NSURL *)_persistentStoreURLForRecordWithIdentifier:(NSString *)arg1;
- (bool)_saveAddedCustomProperties:(NSArray *)arg1 deletedCustomProperties:(NSArray *)arg2 error:(id*)arg3;
- (bool)_saveCustomPropertyValuesForRemoteRecords:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)_smartGroupsForAccountsWithIdentifiers:(NSArray *)arg1 contactStore:(CNContactStore *)arg2;
- (NSArray *)_smartGroupsMatchingPredicate:(NSPredicate *)arg1 contactStore:(CNContactStore *)arg2;
- (<CNBatchFetchEnumerator> *)batchEnumeratorForFetchRequest:(CNContactFetchRequest *)arg1;
- (CNChangeHistory *)changeHistoryWithFetchRequest:(CNChangeHistoryFetchRequest *)arg1 error:(id*)arg2;
- (bool)clearChangeHistoryForClient:(NSString *)arg1 toSequenceNumber:(long long)arg2 error:(id*)arg3;
- (NSString *)contactIdentifierWithMatchingDictionary:(NSDictionary *)arg1;
- (NSArray *)contactIdentifiersForFetchRequest:(CNContactFetchRequest *)arg1 error:(id*)arg2;
- (CNContact *)contactWithUserActivityUserInfo:(NSDictionary *)arg1 keysToFetch:(NSArray *)arg2;
- (NSArray *)contactsWithIdentifiers:(NSArray *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;
- (<CNKeyDescriptor> *)descriptorForRequiredKeysForMatchingDictionary;
- (<CNCancelable> *)executeFetchRequest:(void *)arg1 progressiveResults:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 14: CNContactFetchRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (NSArray *)groupsWithIdentifiers:(NSArray *)arg1 error:(id*)arg2;
- (NSString *)identifierWithError:(id*)arg1;
- (NSDictionary *)matchingDictionaryForContact:(CNContact *)arg1;
- (bool)registerClientForChangeHistory:(NSString *)arg1 error:(id*)arg2;
- (bool)setBestMeIfNeededForGivenName:(NSString *)arg1 familyName:(NSString *)arg2 email:(NSString *)arg3 error:(id*)arg4;
- (bool)setMeContact:(CNContact *)arg1 error:(id*)arg2;
- (bool)setMeContact:(CNContact *)arg1 forContainer:(CNContainer *)arg2 error:(id*)arg3;
- (void)setNotificationSource:(id)arg1;
- (NSNumber *)unifiedContactCountWithError:(id*)arg1;
- (NSArray *)unifiedContactsMatchingPredicate:(NSPredicate *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;
- (bool)unregisterClientForChangeHistory:(NSString *)arg1 error:(id*)arg2;
- (NSArray *)usedLabelsForPropertyWithKey:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)userActivityUserInfoForContact:(CNContact *)arg1;

@end
