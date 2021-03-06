//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, EAGLContext;

@interface _UISiriWaveyView : UIView
{
    struct {
        CDStruct_23957544 m_axisX;
        CDStruct_23957544 m_axisY;
        CDStruct_23957544 m_axisZ;
        CDStruct_23957544 m_trans;
    } _projection;
    CADisplayLink *_displayLink;
    EAGLContext *_eaglContext;
    unsigned int _framebufferHandle;
    unsigned int _renderbufferHandle;
    unsigned int _vertexBufferHandle;
    unsigned int _textureHandle;
    unsigned int _programHandle;
    int _attribPosition;
    int _uniformProjection;
    int _uniformOpacity;
    int _uniformLineWidth;
    int _uniformPowerLevel;
    int _uniformDisplayWidth;
    int _uniformTimeOffset;
    int _uniformTexture;
    int _viewWidth;
    int _viewHeight;
    float _projection11;
    double _startTime;
    float _runningPowerLevels[5];
    unsigned int _powerPointer;
    BOOL _isInitialized;
    BOOL _justStarted;
    int _state;
    id <_UISiriWaveyViewDelegate> _delegate;
    int _mode;
}

+ (Class)layerClass;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) id <_UISiriWaveyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (float)_currentMicPowerLevel;
- (float)_powerLevelForMicPower:(float)arg1;
- (float)_updateMedianWithNewValue:(float)arg1;
- (void)_updateCurveLayer:(id)arg1;
- (BOOL)inDictationMode;
- (BOOL)inSiriMode;
- (void)startListening;
- (void)start;
- (void)_tearDownDisplayLink;
- (void)layoutSubviews;
- (void)_updateOrthoProjection;
- (BOOL)_resizeFromLayer:(id)arg1;
- (void)_cleanupGL;
- (BOOL)_initGL;
- (BOOL)_setupTexture;
- (BOOL)_setupVertexBuffer;
- (BOOL)_setupShaders;
- (BOOL)_setupFramebuffer;
- (void)_setupDisplayLink;
- (void)setHidden:(BOOL)arg1;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

