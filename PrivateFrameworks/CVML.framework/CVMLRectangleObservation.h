/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLRectangleObservation : CVMLDetectedObject {
    struct CGPoint { 
        float x; 
        float y; 
    }  _bottomLeft;
    struct CGPoint { 
        float x; 
        float y; 
    }  _bottomRight;
    struct CGPoint { 
        float x; 
        float y; 
    }  _topLeft;
    struct CGPoint { 
        float x; 
        float y; 
    }  _topRight;
}

@property struct CGPoint { float x1; float x2; } bottomLeft;
@property struct CGPoint { float x1; float x2; } bottomRight;
@property struct CGPoint { float x1; float x2; } topLeft;
@property struct CGPoint { float x1; float x2; } topRight;

- (struct CGPoint { float x1; float x2; })bottomLeft;
- (struct CGPoint { float x1; float x2; })bottomRight;
- (void)setBottomLeft:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBottomRight:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTopLeft:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTopRight:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })topLeft;
- (struct CGPoint { float x1; float x2; })topRight;

@end