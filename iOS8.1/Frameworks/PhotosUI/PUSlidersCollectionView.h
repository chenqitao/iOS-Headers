//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@class PUSlidersCollectionViewLayout;

@interface PUSlidersCollectionView : UICollectionView
{
    PUSlidersCollectionViewLayout *_tableLikeLayout;
    float _rowHeight;
    int _scrollDirection;
}

@property(nonatomic) int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) float rowHeight; // @synthesize rowHeight=_rowHeight;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

