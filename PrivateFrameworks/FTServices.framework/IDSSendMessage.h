/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSSendMessage : IDSFaceTimeMessage <NSCopying> {
    NSArray *_peers;
    NSNumber *_reason;
    NSData *_selfPushToken;
}

@property (copy) NSArray *peers;
@property (copy) NSNumber *reason;
@property (copy) NSData *selfPushToken;

- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)messageBody;
- (id)peers;
- (id)reason;
- (id)requiredKeys;
- (id)selfPushToken;
- (void)setPeers:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSelfPushToken:(id)arg1;

@end
