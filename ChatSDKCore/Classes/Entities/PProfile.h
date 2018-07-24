//
//  PProfile.h
//  Pods
//
//  Created by 鈴木貴之 on 2018/07/24.
//

#ifndef PProfile_h
#define PProfile_h

#import "PUser.h"
@class RXPromise;

@protocol PProfile <PEntity>

// Should return a UIImage for RXPromise success
//-(RXPromise *) loadProfileThumbnail: (BOOL) force;
-(void) setName: (NSString *) name;
-(NSString *) name;
-(void) setText: (NSString *) text;
-(NSString *) text;
/**
 * @brief User's large image - only ever seen by user
 * @para NSData Image in binary format
 */
-(void) setImage: (NSData *) image;

/**
 * @brief User's main image
 * @return NSData Image in binary format
 */
-(NSData *) image;
-(UIImage *) imageAsImage;
-(UIImage *) defaultImage;
-(NSString *) imageURL;
-(void) setImageURL: (NSString *) url;

-(void) setThumbnail: (NSData *) image;
-(NSData *) thumbnail;
-(UIImage *) thumbnailAsImage;
-(BOOL) isMe;

@end


#endif /* PProfile_h */
