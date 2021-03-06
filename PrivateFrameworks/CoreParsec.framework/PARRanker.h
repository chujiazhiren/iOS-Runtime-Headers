/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRanker : NSObject <PARRanker> {
    <IFCentroidModel> * _model;
    PARRankerParameters * _parameters;
    NSObject<OS_dispatch_queue> * _queue;
    PARSession * _session;
    <IFCentroidStore> * _store;
    NSArray * _topicsForRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) <IFCentroidModel> *model;
@property (readonly) PARRankerParameters *parameters;
@property (nonatomic) PARSession *session;
@property (readonly) <IFCentroidStore> *store;
@property (readonly) Class superclass;
@property (readonly) NSArray *topicsForRequest;

+ (id)getCentroidScoringParameters:(id)arg1 topicScale:(double)arg2 tldScale:(double)arg3 mtScale:(double)arg4 rankingAlgorithm:(id)arg5;
+ (double)getOverallScore:(double)arg1 serverScore:(double)arg2 rankingAlgorithm:(id)arg3;
+ (id)rankerWithParameters:(id)arg1 session:(id)arg2;
+ (id)rankerWithParameters:(id)arg1 store:(id)arg2 session:(id)arg3;
+ (BOOL)resultOutsideMovementRange:(id)arg1 otherResult:(id)arg2 rankingAlgorithm:(id)arg3;
+ (BOOL)resultOutsideRankingRange:(id)arg1 rankingAlgorithm:(id)arg2;

- (void).cxx_destruct;
- (void)_addFeatureVectors:(id)arg1 update:(BOOL)arg2;
- (void)_enqueueAsynchronousWriteBlock:(id /* block */)arg1;
- (id)_featureVectorFromURL:(id)arg1 topicModel:(id)arg2;
- (void)_periodicTask;
- (void)_rank:(id)arg1 withAlgorithms:(id)arg2 enableSectionRanking:(BOOL)arg3;
- (void)_setTopicsForRequest;
- (void)addFeatureVectorsFromFeedbackItems:(id)arg1;
- (void)addFeatureVectorsFromURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)addFeatureVectorsFromURLsAndTopicModel:(id)arg1 topicModel:(id)arg2;
- (id)computeTopicsForRequest;
- (void)deleteFeatureVectorsWithDomains:(id)arg1;
- (double)domainScoreForResult:(id)arg1 rankingAlgorithm:(id)arg2;
- (id)generatePersonalizationScore:(id)arg1 rankingAlgorithm:(id)arg2;
- (id)getSectionName:(unsigned int)arg1;
- (id)getURLTopics:(id)arg1 topicModel:(id)arg2;
- (id)initWithParameters:(id)arg1 client:(id)arg2 store:(id)arg3 session:(id)arg4;
- (double)mediaTypeScoreForResult:(id)arg1 rankingAlgorithm:(id)arg2;
- (id)model;
- (id)parameters;
- (void)rank:(id)arg1;
- (void)rank:(id)arg1 enableSectionRanking:(BOOL)arg2;
- (void)rank:(id)arg1 withAlgorithms:(id)arg2;
- (void)rank:(id)arg1 withAlgorithms:(id)arg2 enableSectionRanking:(BOOL)arg3;
- (double)scoreForResult:(id)arg1 rankingAlgorithm:(id)arg2;
- (id)session;
- (void)setSession:(id)arg1;
- (id)store;
- (double)topicScoreForResult:(id)arg1 rankingAlgorithm:(id)arg2;
- (id)topicsForRequest;

@end
