/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    struct { 
        unsigned int _isEmpty : 1; 
        unsigned int _hasSingleRange : 1; 
        unsigned int _cacheValid : 1; 
        unsigned int _reservedArrayBinderController : 29; 
    } _indexSetFlags;
    union { 
        struct { 
            struct _NSRange { 
                NSUInteger location; 
                NSUInteger length; 
            } _range; 
        } _singleRange; 
        struct { 
            void *_data; 
            void *_reserved; 
        } _multipleRanges; 
    } _internal;
}

+ (id)indexSetWithIndexes:(NSUInteger*)arg1 count:(NSUInteger)arg2;
+ (id)indexSet;
+ (id)indexSetWithIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
+ (id)indexSetWithIndex:(NSUInteger)arg1;

- (NSUInteger)__getContainmentVector:(out BOOL*)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)rangeCount;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeAtIndex:(NSUInteger)arg1;
- (void)_setContentToContentFromIndexSet:(id)arg1;
- (id)initWithIndexes:(NSUInteger*)arg1 count:(NSUInteger)arg2;
- (NSUInteger)_indexOfRangeContainingIndex:(NSUInteger)arg1;
- (NSUInteger)_indexOfRangeBeforeOrContainingIndex:(NSUInteger)arg1;
- (NSUInteger)_indexOfRangeAfterOrContainingIndex:(NSUInteger)arg1;
- (BOOL)isEqualToIndexSet:(id)arg1;
- (NSUInteger)_indexClosestToIndex:(NSUInteger)arg1 equalAllowed:(BOOL)arg2 following:(BOOL)arg3;
- (NSUInteger)indexLessThanOrEqualToIndex:(NSUInteger)arg1;
- (BOOL)containsIndexes:(id)arg1;
- (BOOL)intersectsIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)_numberEnumerator;
- (void)enumerateIndexesUsingBlock:(id)arg1;
- (void)enumerateIndexesWithOptions:(NSUInteger)arg1 usingBlock:(id)arg2;
- (void)enumerateIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3;
- (NSUInteger)indexPassingTest:(id)arg1;
- (NSUInteger)indexWithOptions:(NSUInteger)arg1 passingTest:(id)arg2;
- (NSUInteger)indexInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 options:(NSUInteger)arg2 passingTest:(id)arg3;
- (id)indexesPassingTest:(id)arg1;
- (id)indexesWithOptions:(NSUInteger)arg1 passingTest:(id)arg2;
- (id)indexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 options:(NSUInteger)arg2 passingTest:(id)arg3;
- (id)initWithIndexSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)indexLessThanIndex:(NSUInteger)arg1;
- (NSUInteger)indexGreaterThanOrEqualToIndex:(NSUInteger)arg1;
- (Class)classForCoder;
- (BOOL)containsIndex:(NSUInteger)arg1;
- (NSUInteger)lastIndex;
- (NSUInteger)firstIndex;
- (NSUInteger)indexGreaterThanIndex:(NSUInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)_init;
- (id)init;
- (NSUInteger)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)containsIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (NSUInteger)countOfIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)initWithIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)initWithIndex:(NSUInteger)arg1;
- (NSUInteger)getIndexes:(NSUInteger*)arg1 maxCount:(NSUInteger)arg2 inIndexRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg3;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeStartingAtLocation:(NSUInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })firstRange;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeGreaterThanRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)commaSeparatedString;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)commaSeparatedString;

@end