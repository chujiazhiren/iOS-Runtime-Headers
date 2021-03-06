/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTriggerItemProvider : HFItemProvider {
    id /* block */  _filter;
    NSMutableSet * _triggerItems;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) NSMutableSet *triggerItems;

- (void).cxx_destruct;
- (id /* block */)filter;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setTriggerItems:(id)arg1;
- (id)triggerItems;

@end
