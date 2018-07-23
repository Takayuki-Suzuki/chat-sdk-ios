//
//  CDProfile+CoreDataProperties.h
//  
//
//  Created by 鈴木貴之 on 2018/07/24.
//
//

#import "CDProfile.h"

NS_ASSUME_NONNULL_BEGIN
@class CDUser;

@interface CDProfile (CoreDataProperties)

+ (NSFetchRequest<CDProfile *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, retain) NSData *image;
@property (nullable, nonatomic, retain) NSData *thumbnail;
@property (nullable, nonatomic, copy) NSString *text;
@property (nullable, nonatomic, retain) NSObject *userEndityID;
@property (nullable, nonatomic, retain) CDUser *user;

@end

NS_ASSUME_NONNULL_END
