//
// Created by Larry Tin on 15/12/28.
//

#import <Foundation/Foundation.h>
#import <GPUImage/GPUImageRawDataOutput.h>
#import <GPUImage/GPUImageVideoCamera.h>
#import "GDLStreamUploader.h"

@class GPUImageVideoCamera;
@protocol GPUImageAudioEncodingTarget
- (BOOL)hasAudioTrack;

- (void)processAudioBuffer:(CMSampleBufferRef)audioBuffer;
@end

@interface GDLRawDataOutput : GPUImageRawDataOutput <GDLStreamUploader>

- (instancetype)initWithVideoCamera:(GPUImageVideoCamera *)camera withImageSize:(CGSize)newImageSize;

@end