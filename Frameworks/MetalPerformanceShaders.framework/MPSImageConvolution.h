/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageConvolution : MPSUnaryImageKernel {
    float _fBias;
    unsigned int _fHeight;
    unsigned int _fWidth;
    bool separable;
    float *wtArray;
    unsigned short *wtArrayh;
    <MTLBuffer> *wtBuffer;
    <MTLBuffer> *wtBufferh;
}

@property (nonatomic) float bias;
@property (nonatomic, readonly) unsigned int kernelHeight;
@property (nonatomic, readonly) unsigned int kernelWidth;

- (float)bias;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 callInfo:(const struct { struct MIPixelInfo {} *x1; struct MIPixelInfo {} *x2; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_3_1_2; } x3; }*)arg5;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned int)arg2 kernelHeight:(unsigned int)arg3 weights:(const float*)arg4;
- (id)initWithDevice_private:(id)arg1;
- (unsigned int)kernelHeight;
- (unsigned int)kernelWidth;
- (void)setBias:(float)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })sourceRegionForDestinationSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;

@end