/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection <GEOComposedRouteTransitSection> {
    struct { 
        unsigned long long stopID; 
        unsigned long long hallID; 
        unsigned long long stationID; 
    }  _fromNodeID;
    struct { 
        double latitude; 
        double longitude; 
    }  _fromNodeLocation;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _lineColor;
    unsigned long long  _lineID;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _originalBounds;
    struct { 
        unsigned long long stopID; 
        unsigned long long hallID; 
        unsigned long long stationID; 
    }  _toNodeID;
    struct { 
        double latitude; 
        double longitude; 
    }  _toNodeLocation;
    int  _toNodeSignificance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } fromNodeID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTransfer;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  lineColor; /* unknown property attribute:  1>=[4f]} */
@property (nonatomic, readonly) unsigned long long lineID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } toNodeID;
@property (nonatomic, readonly) int toNodeSignificance;

- (id).cxx_construct;
- (id)description;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })fromNodeID;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 toNodeSignificance:(int)arg6 currentTransitLineColor:(id)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9;
- (bool)isTransfer;
- (struct Matrix<float, 4, 1> { float x1[4]; })lineColor;
- (unsigned long long)lineID;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })toNodeID;
- (int)toNodeSignificance;

@end
