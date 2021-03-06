/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMMapView : UIView <FMMapAnnotationGestureRecognizerDelegate, FMMapGestureRecognizerDelegate, MKMapViewDelegate, MKUserTrackingView> {
    NSMutableArray * _accuracyOverlays;
    MKMapCamera * _cameraBefore3DRendering;
    BOOL  _canChangeUserTrackingMode;
    BOOL  _canSelectUserAnnotation;
    <FMAnnotation><MKAnnotation> * _currentDeviceAnnotation;
    int  _currentSelectedState;
    int  _currentTrackingMode;
    <FMMapViewDelegate> * _delegate;
    CADisplayLink * _displayLink;
    int  _doubleSelectionMode;
    BOOL  _isAllAnnotationsShown;
    BOOL  _isFingerOnAnnotation;
    BOOL  _isFingerOnMap;
    BOOL  _isGoingBackToAllAnnotation;
    BOOL  _isMapAnimating;
    BOOL  _isMapMoved;
    BOOL  _isMapPositioningDisabled;
    BOOL  _isNearbyModeDisabled;
    BOOL  _isPreventingMapUpdates;
    BOOL  _isPreviewing;
    BOOL  _isSwipeGestureEnabled;
    BOOL  _isSwitchingTrackingMode;
    BOOL  _isUserLocationUpdated;
    BOOL  _isUserSwiping;
    <FMAnnotation><MKAnnotation> * _lastSelectedAnnotationBeforeTracking;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _lastVisibleInsets;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _lastVisibleMapRect;
    NSTimer * _layoutTimer;
    FMMapGestureRecognizer * _mapGesture;
    MKMapView * _mapView;
    float  _maxZoomLevel;
    <MKAnnotation> * _otherSelectedAnnotation;
    FMAnnotationView * _potentiallySelectedAnnotationView;
    int  _renderingMode;
    <FMAnnotation><MKAnnotation> * _selectedAnnotation;
    FMAnnotationView * _selectedAnnotationView;
    BOOL  _shouldDisplayOverlay;
    BOOL  _showUserLocationCallout;
    MKUserLocation * _userLocation;
    UIColor * _userLocationTintColor;
    MKUserLocationView * _userLocationView;
    NSTimer * _userSelectionTimer;
    _MKUserTrackingButton * _userTrackingButton;
}

@property (nonatomic, retain) NSMutableArray *accuracyOverlays;
@property (nonatomic, retain) MKMapCamera *cameraBefore3DRendering;
@property (nonatomic) BOOL canChangeUserTrackingMode;
@property (nonatomic) BOOL canSelectUserAnnotation;
@property (nonatomic) <FMAnnotation><MKAnnotation> *currentDeviceAnnotation;
@property (nonatomic) int currentSelectedState;
@property (nonatomic) int currentTrackingMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FMMapViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic) int doubleSelectionMode;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isAllAnnotationsShown;
@property (nonatomic) BOOL isFingerOnAnnotation;
@property (nonatomic) BOOL isFingerOnMap;
@property (nonatomic) BOOL isGoingBackToAllAnnotation;
@property (nonatomic) BOOL isMapAnimating;
@property (nonatomic) BOOL isMapMoved;
@property (nonatomic) BOOL isMapPositioningDisabled;
@property (nonatomic) BOOL isNearbyModeDisabled;
@property (nonatomic) BOOL isPreventingMapUpdates;
@property (nonatomic) BOOL isPreviewing;
@property (nonatomic) BOOL isSwipeGestureEnabled;
@property (nonatomic) BOOL isSwitchingTrackingMode;
@property (nonatomic) BOOL isUserLocationUpdated;
@property (nonatomic) BOOL isUserSwiping;
@property (nonatomic) <FMAnnotation><MKAnnotation> *lastSelectedAnnotationBeforeTracking;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } lastVisibleInsets;
@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } lastVisibleMapRect;
@property (nonatomic, retain) NSTimer *layoutTimer;
@property (nonatomic, retain) FMMapGestureRecognizer *mapGesture;
@property (nonatomic, readonly) MKMapView *mapView;
@property (nonatomic) float maxZoomLevel;
@property (nonatomic) <MKAnnotation> *otherSelectedAnnotation;
@property (nonatomic, retain) FMAnnotationView *potentiallySelectedAnnotationView;
@property (nonatomic) int renderingMode;
@property (nonatomic) <FMAnnotation><MKAnnotation> *selectedAnnotation;
@property (nonatomic, retain) FMAnnotationView *selectedAnnotationView;
@property (nonatomic) BOOL shouldDisplayOverlay;
@property (nonatomic) BOOL showUserLocationCallout;
@property (readonly) Class superclass;
@property (nonatomic, retain) MKUserLocation *userLocation;
@property (nonatomic, retain) UIColor *userLocationTintColor;
@property (nonatomic) MKUserLocationView *userLocationView;
@property (nonatomic, retain) NSTimer *userSelectionTimer;
@property (nonatomic, retain) _MKUserTrackingButton *userTrackingButton;

+ (BOOL)hasUserLocation;

- (void).cxx_destruct;
- (void)_setUserTrackingMode:(int)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3;
- (id)accuracyOverlays;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)animateMapToPosition:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 withInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 andZoom:(BOOL)arg3;
- (void)animateRenderingModeChange;
- (void)animateToAllAnnotation;
- (id)annotationsSortedByDistance;
- (void)calloutButtonTapped:(id)arg1;
- (id)cameraBefore3DRendering;
- (BOOL)canChangeUserTrackingMode;
- (BOOL)canRotateForHeading;
- (BOOL)canSelectUserAnnotation;
- (void)clearUserLocation;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinateForAnnotationView:(id)arg1;
- (void)createMKMapView;
- (void)createUserTrackingButton;
- (id)currentDeviceAnnotation;
- (int)currentSelectedState;
- (int)currentTrackingMode;
- (float)dampingForAltitude:(double)arg1 andDistance:(double)arg2;
- (void)dealloc;
- (id)delegate;
- (void)depthSortAnnotations;
- (void)deselectAllAnnotations;
- (void)deselectAnnotationView:(id)arg1;
- (void)deselectAnnotationViewIfNeeded:(id)arg1;
- (void)didDoubleSelectAnnotation:(id)arg1;
- (void)didMoveToSuperview;
- (void)didSelectAnnotation:(id)arg1;
- (void)displayAllAnnotations;
- (id)displayLink;
- (double)distanceBetweenOrigin:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 andDestination:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (void)doubleSelectAnnotation:(id)arg1;
- (int)doubleSelectionMode;
- (void)fingerOffAnnotation:(id)arg1;
- (void)fingerOnAnnotation:(id)arg1;
- (void)flashMapInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)hasUserLocation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)initialize;
- (void)invalidateLayoutTimer;
- (BOOL)isAllAnnotationsShown;
- (BOOL)isFingerOnAnnotation;
- (BOOL)isFingerOnMap;
- (BOOL)isGoingBackToAllAnnotation;
- (BOOL)isMapAnimating;
- (BOOL)isMapMoved;
- (BOOL)isMapPositioningDisabled;
- (BOOL)isNearbyModeDisabled;
- (BOOL)isOverlayOnMap:(id)arg1;
- (BOOL)isPreventingMapUpdates;
- (BOOL)isPreviewing;
- (BOOL)isSwipeGestureEnabled;
- (BOOL)isSwitchingTrackingMode;
- (BOOL)isUserLocationUpdated;
- (BOOL)isUserSwiping;
- (BOOL)isValidLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)lastSelectedAnnotationBeforeTracking;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })lastVisibleInsets;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })lastVisibleMapRect;
- (void)layoutMapView;
- (void)layoutSubviews;
- (id)layoutTimer;
- (void)mapDoubleTapped:(id)arg1;
- (id)mapGesture;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectForAnnotations:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectMakeWithRadialDistanceForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 andRadius:(double)arg2;
- (void)mapSwiped:(id)arg1 withPercent:(float)arg2;
- (void)mapSwipedBegin:(id)arg1;
- (void)mapSwipedEnd:(id)arg1 withPercent:(float)arg2;
- (void)mapTapped:(id)arg1;
- (void)mapTouchBegan:(id)arg1;
- (void)mapTouchEnded:(id)arg1;
- (void)mapTouchMoved:(id)arg1;
- (id)mapView;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidStopLocatingUser:(id)arg1;
- (float)maxZoomLevel;
- (void)moveCenterByOffset:(struct CGPoint { float x1; float x2; })arg1 from:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)nearbyAnnotations;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })normalizeMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toZoomScale:(float)arg2;
- (id)otherSelectedAnnotation;
- (id)potentiallySelectedAnnotationView;
- (void)recenterVisibleAnnotations;
- (void)refreshCameraPosition;
- (void)refreshOverlayForAnnotation:(id)arg1 andCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (void)removeAllOverlaysAndCurrentAnnotationOverlay:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removeOverlays:(id)arg1;
- (void)removeUserAnnotationIfNeeded:(id)arg1;
- (int)renderingMode;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })repositionOnAnnotation:(id)arg1 withZoom:(BOOL)arg2;
- (void)repositionOnMapRectIfNeeded:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)repositionToMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 withZoom:(BOOL)arg2;
- (void)selectAnnotation:(id)arg1;
- (void)selectAnnotationForPreview:(id)arg1;
- (void)selectOrDeselectAnnotationView:(id)arg1;
- (id)selectedAnnotation;
- (id)selectedAnnotationView;
- (void)setAccuracyOverlays:(id)arg1;
- (void)setCameraBefore3DRendering:(id)arg1;
- (void)setCanChangeUserTrackingMode:(BOOL)arg1;
- (void)setCanSelectUserAnnotation:(BOOL)arg1;
- (void)setCurrentDeviceAnnotation:(id)arg1;
- (void)setCurrentSelectedState:(int)arg1;
- (void)setCurrentTrackingMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setDoubleSelectionMode:(int)arg1;
- (void)setIsAllAnnotationsShown:(BOOL)arg1;
- (void)setIsFingerOnAnnotation:(BOOL)arg1;
- (void)setIsFingerOnMap:(BOOL)arg1;
- (void)setIsGoingBackToAllAnnotation:(BOOL)arg1;
- (void)setIsMapAnimating:(BOOL)arg1;
- (void)setIsMapMoved:(BOOL)arg1;
- (void)setIsMapPositioningDisabled:(BOOL)arg1;
- (void)setIsNearbyModeDisabled:(BOOL)arg1;
- (void)setIsPreventingMapUpdates:(BOOL)arg1;
- (void)setIsPreviewing:(BOOL)arg1;
- (void)setIsSwipeGestureEnabled:(BOOL)arg1;
- (void)setIsSwitchingTrackingMode:(BOOL)arg1;
- (void)setIsUserLocationUpdated:(BOOL)arg1;
- (void)setIsUserSwiping:(BOOL)arg1;
- (void)setLastSelectedAnnotationBeforeTracking:(id)arg1;
- (void)setLastVisibleInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLastVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutTimer:(id)arg1;
- (void)setMapGesture:(id)arg1;
- (void)setMaxZoomLevel:(float)arg1;
- (void)setOtherSelectedAnnotation:(id)arg1;
- (void)setPotentiallySelectedAnnotationView:(id)arg1;
- (void)setRenderingMode:(int)arg1;
- (void)setSelectedAnnotation:(id)arg1;
- (void)setSelectedAnnotationView:(id)arg1;
- (void)setShouldDisplayOverlay:(BOOL)arg1;
- (void)setShowUserLocationCallout:(BOOL)arg1;
- (void)setUserLocation:(id)arg1;
- (void)setUserLocationTintColor:(id)arg1;
- (void)setUserLocationView:(id)arg1;
- (void)setUserSelectionTimer:(id)arg1;
- (void)setUserTrackingButton:(id)arg1;
- (void)setupCamera;
- (void)setupConstraints;
- (void)setupGestures;
- (BOOL)shouldDisplayOverlay;
- (BOOL)showUserLocationCallout;
- (void)slideAnnotationIntoViewIfNeeded:(id)arg1;
- (void)synchronize;
- (void)updateAccordingToUserTrackingMode;
- (void)updateAnnotationPositionAfterPreview:(id)arg1;
- (void)updateAnnotationStyle:(id)arg1;
- (void)updateCameraPositionForAnnotation:(id)arg1;
- (void)updateCameraPositionForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 withZoom:(BOOL)arg2;
- (void)updateCameraPositionForNoLocation;
- (void)updateCameraPositionWithLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 andAltitude:(double)arg2;
- (void)updateCanSelectUserAnnotation;
- (void)updateOverlayForAnnotation:(id)arg1 withForce:(BOOL)arg2;
- (void)updatePreviewLocationForAnnotation:(id)arg1;
- (void)updateUserTrackingButtonState;
- (id)userLocation;
- (void)userLocationTapped:(id)arg1;
- (id)userLocationTintColor;
- (id)userLocationView;
- (id)userSelectionTimer;
- (id)userTrackingButton;
- (int)userTrackingMode;
- (id)viewForAnnotation:(id)arg1;

@end
