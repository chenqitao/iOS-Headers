/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHLegendKnob.h>

// Not exported
@interface TSCHLegendResizeKnob : TSCHLegendKnob
{
    int mEdge;
}

@property(readonly) int edge; // @synthesize edge=mEdge;
- (void)updateHUDForRep:(id)arg1 delta:(struct CGPoint)arg2 point:(struct CGPoint)arg3;
- (struct CGPoint)constrainedKnobDragPosition:(struct CGPoint)arg1 fromPosition:(struct CGPoint)arg2 chartRep:(id)arg3 startingLegendFrame:(struct CGRect)arg4;
- (_Bool)isSimilarToKnob:(id)arg1;
- (struct CGRect)legendModelFrameForInfo:(id)arg1 delta:(struct CGPoint)arg2;
- (id)knobImage;
- (id)initWithEdge:(int)arg1 onRep:(id)arg2;

@end

