/* Generated by RuntimeBrowser.
 */

@protocol _EditScriptData <NSObject>

@required

+ (<_EditScriptData> *)EditScriptDataWithArray:(NSArray *)arg1;
+ (<_EditScriptData> *)EditScriptDataWithString:(NSString *)arg1 chunkSize:(long long)arg2;

- (long long)characterIndexForItem:(long long)arg1;
- (long long)indexOfFirstDifferenceWithOtherData:(id <_EditScriptData>)arg1 shouldReverseIterate:(bool)arg2;
- (long long)length;
- (long long)lengthOfItem:(long long)arg1;
- (NSString *)stringAtIndex:(long long)arg1;
- (NSString *)stringValue;

@end
