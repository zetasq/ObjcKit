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


- (void)testExample {
  NSArray<NSString *> * stringArray = @[@"abc", @"xyz"];
  foreach (xyz, stringArray) {
    NSLog(@"xyz = %@", xyz);
  }
  
  {
    NSLog(@"1");
    @defer {
      NSLog(@"2");
    };
    
    NSLog(@"3");
  }
  
  let x = @keyPath(stringArray, firstObject.length);
  NSLog(@"x = %@", x);
  
  NSLog(@"Static var = %@", CreateOnce(@"SVAR"));
  
  let equal = ObjectIsEqual(@"abc", @"abc");
  NSLog(@"Is equal = %@", @(equal));
  
  let iskind = ObjectIsMemberOf(@"abc", NSString);
  
}

@end
