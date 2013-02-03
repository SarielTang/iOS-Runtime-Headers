/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSDictionary;

@interface ISURLBag : NSObject {
    NSDictionary *_dictionary;
    NSDictionary *_headerPatterns;
    double _invalidationTime;
    NSArray *_networkConstraints;
}

@property(readonly) NSArray *networkConstraints;
@property double invalidationTime;
@property(getter=isValid,readonly) BOOL valid;

+ (BOOL)_allowUnsignedBags;
+ (id)_copyFallbackContextForContext:(id)arg1;
+ (id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2;
+ (void)invalidateAllBags;
+ (id)networkConstraintsForNetworkType:(NSInteger)arg1 inBagContext:(id)arg2;
+ (void)setURLBag:(id)arg1 forContext:(id)arg2;
+ (id)urlBagForContext:(id)arg1;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;

- (id)_copyHeaderPatternsFromDictionary:(id)arg1;
- (id)_copyNetworkConstraintsFromDictionary:(id)arg1;
- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (void)_writeURLResolutionCacheFile;
- (id)copyExtraHeadersForURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRawDictionary:(id)arg1;
- (double)invalidationTime;
- (BOOL)isValid;
- (BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (NSInteger)minimumNetworkTypeForAssetType:(NSInteger)arg1 fileSize:(long long)arg2;
- (id)networkConstraints;
- (id)networkConstraintsForNetworkType:(NSInteger)arg1;
- (id)sanitizedURLForURL:(id)arg1;
- (void)setInvalidationTime:(double)arg1;
- (id)urlForKey:(id)arg1;
- (BOOL)urlIsTrusted:(id)arg1;
- (id)valueForKey:(id)arg1;

@end