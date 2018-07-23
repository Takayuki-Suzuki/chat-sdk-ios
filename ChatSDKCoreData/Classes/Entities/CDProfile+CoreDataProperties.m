//
//  CDProfile+CoreDataProperties.m
//  
//
//  Created by 鈴木貴之 on 2018/07/24.
//
//

#import "CDProfile+CoreDataProperties.h"

@implementation CDProfile (CoreDataProperties)

+ (NSFetchRequest<CDProfile *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"CDProfile"];
}

@dynamic name;
@dynamic image;
@dynamic thumbnail;
@dynamic text;
@dynamic userEndityID;
@dynamic user;

@end
