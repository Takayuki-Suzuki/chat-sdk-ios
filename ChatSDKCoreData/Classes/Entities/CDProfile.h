//
//  CDProfile.h
//  
//
//  Created by 鈴木貴之 on 2018/07/24.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import <ChatSDK/PProfile.h>

@class CDUser;

NS_ASSUME_NONNULL_BEGIN

@interface CDProfile : NSManagedObject<PProfile>

@end

NS_ASSUME_NONNULL_END

#import "CDProfile+CoreDataProperties.h"
