//
//  RuntimeAdditions.h
//  simplearray
//
//  Created by satyso on 14-2-12.
//  Copyright (c) 2014年 song4@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 @abstract replace originalSelector with newSelector.
 */

BOOL classEx_exchangeMethod(Class c, SEL originalSEL, SEL newSEL);

BOOL classEx_replaceMethodWithBlock(Class c, SEL originalSEL, id block);

BOOL classEx_replaceMethodWithIMP(Class c, SEL originalSEL, IMP newIMP);

BOOL classEx_addMethodWithBlock(Class c, NSString* selString, id block);

