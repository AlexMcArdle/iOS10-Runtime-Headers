/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMXPathResult : DOMObject

@property (readonly) bool booleanValue;
@property (readonly) bool invalidIteratorState;
@property (readonly) double numberValue;
@property (readonly) unsigned short resultType;
@property (readonly) DOMNode *singleNodeValue;
@property (readonly) unsigned int snapshotLength;
@property (readonly, copy) NSString *stringValue;

- (bool)booleanValue;
- (void)dealloc;
- (bool)invalidIteratorState;
- (id)iterateNext;
- (double)numberValue;
- (unsigned short)resultType;
- (id)singleNodeValue;
- (id)snapshotItem:(unsigned int)arg1;
- (unsigned int)snapshotLength;
- (id)stringValue;

@end
