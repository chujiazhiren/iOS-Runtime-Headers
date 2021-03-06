/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMHAPMetadataCharacteristic : NSObject <NSSecureCoding> {
    NSString * _chrDescription;
    NSString * _format;
    NSString * _localizedDescription;
    NSString * _name;
    NSString * _type;
    NSString * _unit;
}

@property (nonatomic, retain) NSString *chrDescription;
@property (nonatomic, retain) NSString *format;
@property (nonatomic, retain) NSString *localizedDescription;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *unit;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chrDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescription;
- (id)name;
- (void)setChrDescription:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)type;
- (id)unit;

@end
