/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSNumber, NSMutableDictionary, NSValue;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject  {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSNumber *backgroundVerticalAdjustment;
    NSNumber *miniBackgroundVerticalAdjustment;
}

@property(retain) NSValue * titlePositionOffset;
@property(retain) NSValue * miniTitlePositionOffset;
@property(retain) NSNumber * backgroundVerticalAdjustment;
@property(retain) NSNumber * miniBackgroundVerticalAdjustment;


- (id)anyBackgroundImage;
- (void)setTitlePositionOffset:(id)arg1;
- (void)setMiniTitlePositionOffset:(id)arg1;
- (void)setBackgroundVerticalAdjustment:(id)arg1;
- (void)setMiniBackgroundVerticalAdjustment:(id)arg1;
- (id)miniBackgroundVerticalAdjustment;
- (id)backgroundVerticalAdjustment;
- (id)titlePositionOffset;
- (id)miniTitlePositionOffset;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (id)backgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (void)dealloc;

@end