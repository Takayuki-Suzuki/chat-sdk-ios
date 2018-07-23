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

@protocol PProfile <NSObject>

-(NSString *) entityID;
-(NSString *) name;

// Should return a UIImage for RXPromise success
//-(RXPromise *) loadProfileThumbnail: (BOOL) force;
-(NSString *) name;
-(NSString *) text;
-(UIImage *) defaultImage;
-(NSString *) imageURL;
-(UIImage *) imageAsImage;
-(BOOL) isMe;

@end


#endif /* PProfile_h */
