/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MKOverlay-Protocol.h"

@class GEORoute, MKDate, MKRouteStep, NSArray, NSDictionary, NSMutableArray, NSString;

@interface MKRoute : NSObject <MKOverlay>
{
    GEORoute *_route;
    int _mode;
    CDStruct_c3b9c2ee *_mapPoints;
    double *_distancesFromStart;
    double *_distancesFromEnd;
    unsigned int _pointCount;
    NSMutableArray *_steps;
    NSMutableArray *_simplifiedSteps;
    MKRouteStep *_step;
    MKRouteStep *_previousStep;
    MKRouteStep *_highlightedStep;
    unsigned int *_simplifiedPointIndexes;
    unsigned int _simplifiedPointCount;
    CDStruct_c3b9c2ee *_simplifiedPoints;
    NSMutableArray *_segmentBoundingPolygons;
    BOOL _displaysDistanceInMetric;
    CDStruct_02837cd9 _boundingMapRect;
    CDStruct_2c43369c _coordinate;
    CDStruct_2c43369c _preferredCoordinate;
    float _coordinateOffset;
    struct _NSRange _uniqueRange;
    int _orientation;
    int _preferredOrientation;
    NSArray *_viaWaypoints;
    NSString *_key;
}

+ (id)_nameForMode:(int)arg1;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) BOOL displaysDistanceInMetric; // @synthesize displaysDistanceInMetric=_displaysDistanceInMetric;
@property(retain, nonatomic) NSArray *viaWaypoints; // @synthesize viaWaypoints=_viaWaypoints;
@property(nonatomic) int preferredOrientation; // @synthesize preferredOrientation=_preferredOrientation;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct _NSRange uniqueRange; // @synthesize uniqueRange=_uniqueRange;
@property(nonatomic) float coordinateOffset; // @synthesize coordinateOffset=_coordinateOffset;
@property(nonatomic) CDStruct_c3b9c2ee preferredCoordinate; // @synthesize preferredCoordinate=_preferredCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) unsigned int simplifiedPointCount; // @synthesize simplifiedPointCount=_simplifiedPointCount;
@property(readonly, nonatomic) unsigned int *simplifiedPointIndexes; // @synthesize simplifiedPointIndexes=_simplifiedPointIndexes;
@property(retain, nonatomic) MKRouteStep *highlightedStep; // @synthesize highlightedStep=_highlightedStep;
@property(readonly, nonatomic) MKRouteStep *previousStep; // @synthesize previousStep=_previousStep;
@property(retain, nonatomic) MKRouteStep *step; // @synthesize step=_step;
@property(readonly, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(readonly, nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) double *distancesFromEnd; // @synthesize distancesFromEnd=_distancesFromEnd;
@property(readonly, nonatomic) double *distancesFromStart; // @synthesize distancesFromStart=_distancesFromStart;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *mapPoints; // @synthesize mapPoints=_mapPoints;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
- (id)boundingPolygonForSimplifiedSegmentIndex:(unsigned int)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *simplifiedPoints;
@property(readonly, nonatomic) unsigned int simplifiedSegmentCount;
- (double)shortestMapPointDistanceToMapPoint:(CDStruct_c3b9c2ee)arg1;
- (id)boundingPolygonForStep:(id)arg1;
- (CDStruct_02837cd9)boundingRectForStep:(id)arg1;
- (BOOL)intersectsMapRect:(CDStruct_02837cd9)arg1;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, nonatomic) CDStruct_c3b9c2ee midPoint;
@property(readonly, nonatomic) CDStruct_c3b9c2ee endCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee startCoordinate;
@property(readonly, nonatomic) BOOL hasTraffic;
@property(readonly, nonatomic) NSString *cost;
@property(readonly, nonatomic) MKDate *arrivalDate;
@property(readonly, nonatomic) MKDate *departureDate;
@property(readonly, nonatomic) NSString *abbreviatedTravelTimeWithTraffic;
@property(readonly, nonatomic) NSString *expandedTravelTimeWithTraffic;
- (id)abbreviatedTravelTimeForInterval:(int)arg1;
@property(readonly, nonatomic) NSString *abbreviatedTravelTime;
@property(readonly, nonatomic) NSString *expandedTravelTime;
@property(readonly, nonatomic) int durationSeconds;
- (id)_timeForSeconds:(unsigned int)arg1 withTraffic:(BOOL)arg2 abbreviated:(BOOL)arg3;
@property(readonly, nonatomic) NSString *expandedDistance;
@property(readonly, nonatomic) MKRouteStep *lastMiddleStep;
@property(readonly, nonatomic) MKRouteStep *firstMiddleStep;
@property(readonly, nonatomic) NSArray *simplifiedSteps;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;
- (void)dealloc;
- (id)_initWithResponse:(id)arg1 routeIndex:(unsigned int)arg2 startInstructions:(id)arg3 endInstructions:(id)arg4;
- (void)resetStep;
- (BOOL)_createTransitStepsWithEndInstructions:(id)arg1 forResponse:(id)arg2;
- (void)_createSteps;
@property(readonly, nonatomic) BOOL isComplete;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *points;
- (BOOL)isEqual:(id)arg1;
- (id)GEORoute;

// Remaining properties
@property(readonly, nonatomic) NSString *subtitle;

@end
