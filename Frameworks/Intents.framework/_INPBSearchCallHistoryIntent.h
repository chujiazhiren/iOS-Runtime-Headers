/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchCallHistoryIntent : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _callCapabilities;
    int  _callType;
    _INPBDateTimeRange * _dateCreated;
    struct { 
        unsigned int callType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBContact * _recipient;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*callCapabilities;
@property (nonatomic, readonly) unsigned int callCapabilitiesCount;
@property (nonatomic) int callType;
@property (nonatomic, retain) _INPBDateTimeRange *dateCreated;
@property (nonatomic) BOOL hasCallType;
@property (nonatomic, readonly) BOOL hasDateCreated;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic, readonly) BOOL hasRecipient;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBContact *recipient;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (void)addCallCapabilities:(int)arg1;
- (int*)callCapabilities;
- (int)callCapabilitiesAtIndex:(unsigned int)arg1;
- (unsigned int)callCapabilitiesCount;
- (int)callType;
- (void)clearCallCapabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCallType;
- (BOOL)hasDateCreated;
- (BOOL)hasIntentMetadata;
- (BOOL)hasRecipient;
- (unsigned int)hash;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recipient;
- (void)setCallCapabilities:(int*)arg1 count:(unsigned int)arg2;
- (void)setCallType:(int)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setHasCallType:(BOOL)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRecipient:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
