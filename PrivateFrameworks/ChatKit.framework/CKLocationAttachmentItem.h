/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLocationAttachmentItem : CKAttachmentItem {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;

+ (id)UTITypes;

- (id)_generateThumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1;
- (struct { double x1; double x2; })coordinate;
- (void)generatePreviewWithCompletion:(id /* block */)arg1;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 guid:(id)arg3;
- (BOOL)isDroppedPin;
- (id)pin;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (id)vCardURLProperties;

@end
