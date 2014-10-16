//
//  JModelTeacher.h
//  JSONModel_Demo
//
//  Created by WeiHan on 10/16/14.
//  Copyright (c) 2014 Wei Han. All rights reserved.
//

#import "JSONModel.h"

@interface JModelTeacher : JSONModel

@property (nonatomic, strong) NSString* ID;
@property (nonatomic, strong) NSString* Name;
@property (nonatomic, strong) NSString* Address;
@property (nonatomic, strong) NSString* Subject;
@property (nonatomic, strong) NSString<Ignore>* Note;

@end
