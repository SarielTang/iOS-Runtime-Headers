/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudScenarioExecutionResult : NSObject {
    BOOL _duplicateScenario;
    NSMutableArray *_failedOperations;
    NSMutableArray *_successfullOperations;
}

@property (nonatomic) BOOL duplicateScenario;
@property (nonatomic, retain) NSMutableArray *failedOperations;
@property (nonatomic, retain) NSMutableArray *successfullOperations;

- (void)dealloc;
- (BOOL)duplicateScenario;
- (id)failedOperations;
- (id)init;
- (void)setDuplicateScenario:(BOOL)arg1;
- (void)setFailedOperations:(id)arg1;
- (void)setSuccessfullOperations:(id)arg1;
- (id)successfullOperations;

@end
