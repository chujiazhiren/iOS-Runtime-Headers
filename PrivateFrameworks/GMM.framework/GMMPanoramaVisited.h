/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMMapPoint;



@interface GMMPanoramaVisited : PBCodable 
{
    NSString *_panoId;
    GMMMapPoint *_latLon;
}

@property(retain) GMMMapPoint *latLon;
@property(retain) NSString *panoId;


- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)latLon;
- (void)setLatLon:(id)arg1;
- (id)panoId;
- (void)setPanoId:(id)arg1;
- (void)writeTo:(id)arg1;

@end