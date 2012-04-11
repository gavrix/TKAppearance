//
//  NSObject+TKSwizzle.h
//
//  Created by Taras Kalapun on 4/10/12.
//

#import <Foundation/Foundation.h>

@interface NSObject (TKSwizzle)

+ (BOOL)swizzleMethod:(SEL)origSel with:(SEL)altSel;
+ (BOOL)swizzleMethod:(SEL)origSel with:(IMP)altImp store:(IMP *)storeImp;
+ (BOOL)swizzleClassMethod:(SEL)origSel with:(IMP)altImp store:(IMP *)storeImp;
+ (BOOL)addMethod:(SEL)origSel with:(IMP)altImp types:(const char *)types;
+ (BOOL)addClassMethod:(SEL)origSel with:(IMP)altImp types:(const char *)types;

+ (NSString *)encodingForMethod:(SEL)sel;
+ (void)printClassMethods;

@end
