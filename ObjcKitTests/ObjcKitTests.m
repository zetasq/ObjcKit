//
//  ObjcKitTests.m
//  ObjcKitTests
//
//  Created by Zhu Shengqi on 01/02/2018.
//  Copyright © 2018 Zhu Shengqi. All rights reserved.
//

@import XCTest;
@import ObjcKit;

@interface ObjcKitTests : XCTestCase

@end

@implementation ObjcKitTests

//#define zsq(format, ...) printf(format __VA_OPT__(,) __VA_ARGS__)
- (void)testExample {
  NSArray<NSString *> * a = @[@"abc", @"xyz"];
  foreach (xyz, (@[@"abc", @"xxx"])) {
    NSLog(@"xyz = %@", xyz);
  }
  let x = @keyPath(a, firstObject.length);
  NSLog(@"x = %@", x);

}

@end
