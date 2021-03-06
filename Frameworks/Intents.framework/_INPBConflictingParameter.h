/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBConflictingParameter : PBCodable <NSCopying> {
    NSMutableArray * _alternateItems;
    NSString * _keyPath;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *alternateItems;
@property (nonatomic, readonly) BOOL hasKeyPath;
@property (nonatomic, retain) NSString *keyPath;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)alternateItemsType;
+ (id)options;

- (void).cxx_destruct;
- (void)addAlternateItems:(id)arg1;
- (id)alternateItems;
- (id)alternateItemsAtIndex:(unsigned int)arg1;
- (unsigned int)alternateItemsCount;
- (void)clearAlternateItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasKeyPath;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keyPath;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAlternateItems:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
