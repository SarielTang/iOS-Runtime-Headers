/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, CKSMSMessageDelivery;



@interface CKSMSMessage : CKMessage 
{
    NSMutableArray *_messages;
    NSInteger _associationID;
    CKSMSMessageDelivery *_delivery;
}

@property(retain) CKSMSMessageDelivery *delivery;
@property(readonly) NSInteger associationID;


- (void)setDelivery:(id)arg1;
- (void)dealloc;
- (void)_loadFailedSendCount;
- (BOOL)isPlaceholder;
- (BOOL)hasBeenRead;
- (NSInteger)totalMessageCount;
- (NSInteger)sentCount;
- (void)_storeUIFlags:(unsigned long)arg1;
- (void)_loadUIFlags;
- (void)_loadSubject;
- (void)_loadText;
- (BOOL)_loadOutgoing;
- (id)_createParts;
- (void)addMessage:(struct __CKSMSRecord { }*)arg1;
- (void)setMessages:(id)arg1;
- (void)markAsRead;
- (double)_loadDate;
- (void)permanentlyRemoveMessage;
- (id)messages;
- (id)initWithCTMessage:(struct __CKSMSRecord { }*)arg1 messageParts:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCTMessages:(id)arg1 messageParts:(id)arg2;
- (NSInteger)messageCount;
- (BOOL)isForward;
- (void)prepareToResend;
- (id)sender;
- (id)address;
- (id)alertImageData;
- (BOOL)isOnlyDisplayableMessagePart:(id)arg1;
- (BOOL)containsDisplayableMessageParts;
- (void)deleteMessagePart:(id)arg1;
- (void)_setupDeliveryIfPending;
- (void)deliveredSubpart:(NSInteger)arg1 totalSubparts:(NSInteger)arg2 success:(BOOL)arg3;
- (void)deliveryCompletedForMessage:(id)arg1;
- (void)deliveryFailedForMessage:(id)arg1;
- (void)deliveryPartiallyFailedForMessage:(id)arg1;
- (id)delivery;
- (NSInteger)associationID;

@end