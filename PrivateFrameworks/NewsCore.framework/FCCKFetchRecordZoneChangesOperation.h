/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKFetchRecordZoneChangesOperation : FCNetworkOperation {
    NSMutableDictionary * _changedRecordsByRecordType;
    FCCKDatabase * _database;
    NSMutableDictionary * _deletedRecordIDsByRecordType;
    BOOL  _fetchAllChanges;
    id /* block */  _finishedBlock;
    NSError * _operationError;
    NSDictionary * _optionsByRecordZoneID;
    NSMutableDictionary * _recordZoneChangeResultsByRecordZoneID;
    NSArray * _recordZoneIDs;
}

@property (nonatomic, retain) NSMutableDictionary *changedRecordsByRecordType;
@property (nonatomic, retain) FCCKDatabase *database;
@property (nonatomic, retain) NSMutableDictionary *deletedRecordIDsByRecordType;
@property (nonatomic) BOOL fetchAllChanges;
@property (nonatomic, copy) id /* block */ finishedBlock;
@property (nonatomic, retain) NSError *operationError;
@property (nonatomic, copy) NSDictionary *optionsByRecordZoneID;
@property (nonatomic, retain) NSMutableDictionary *recordZoneChangeResultsByRecordZoneID;
@property (nonatomic, copy) NSArray *recordZoneIDs;

- (void).cxx_destruct;
- (void)_fetchRecordZoneChanges;
- (id)changedRecordsByRecordType;
- (id)database;
- (id)deletedRecordIDsByRecordType;
- (BOOL)fetchAllChanges;
- (id /* block */)finishedBlock;
- (id)init;
- (id)operationError;
- (void)operationWillFinishWithError:(id)arg1;
- (id)optionsByRecordZoneID;
- (void)performOperation;
- (id)recordZoneChangeResultsByRecordZoneID;
- (id)recordZoneIDs;
- (void)resetForRetry;
- (void)setChangedRecordsByRecordType:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDeletedRecordIDsByRecordType:(id)arg1;
- (void)setFetchAllChanges:(BOOL)arg1;
- (void)setFinishedBlock:(id /* block */)arg1;
- (void)setOperationError:(id)arg1;
- (void)setOptionsByRecordZoneID:(id)arg1;
- (void)setRecordZoneChangeResultsByRecordZoneID:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (BOOL)validateOperation;

@end
