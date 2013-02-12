/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISReviewInfo : ISItemInfo <NSCopying> {
    NSString *_text;
    NSString *_userName;
    float _userRating;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)loadFromDictionary:(id)arg1 dataSource:(id)arg2;
- (id)text;
- (id)userName;
- (float)userRating;

@end