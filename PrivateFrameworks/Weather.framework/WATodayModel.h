/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WATodayModel : NSObject {
    WAForecastModel * _forecastModel;
    NSError * _lastError;
    NSDate * _lastUpdateDate;
    WFLocation * _location;
}

@property (nonatomic, retain) WAForecastModel *forecastModel;
@property (nonatomic, retain) NSError *lastError;
@property (nonatomic, retain) NSDate *lastUpdateDate;
@property (nonatomic, retain) WFLocation *location;

+ (id)autoupdatingLocationModelWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
+ (id)modelOperationQueue;
+ (id)modelWithLocation:(id)arg1;

- (void).cxx_destruct;
- (void)_executeForecastRetrievalForLocation:(id)arg1 completion:(id /* block */)arg2;
- (void)_executeLocationUpdateWithCompletion:(id /* block */)arg1;
- (void)_fireEventNotification:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_fireNotification:(id)arg1 event:(unsigned int)arg2 userInfo:(id)arg3;
- (void)_fireWantsUpdateNotificationBecauseOfEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_fireWasUpdatedNotificationForEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_fireWillUpdateNotificationForEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_persistState;
- (BOOL)executeModelUpdateWithCompletion:(id /* block */)arg1;
- (id)forecastModel;
- (id)initWithLocation:(id)arg1;
- (id)lastError;
- (id)lastUpdateDate;
- (id)location;
- (void)setForecastModel:(id)arg1;
- (void)setLastError:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setLocation:(id)arg1;

@end
