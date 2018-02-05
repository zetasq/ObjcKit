//
//  CppTests.c
//  ObjcKitTests
//
//  Created by Zhu Shengqi on 04/02/2018.
//  Copyright © 2018 Zhu Shengqi. All rights reserved.
//

#import <XCTest/XCTest.h>
#import <ObjcKit/Templates.h>

@interface CppTests : XCTestCase

@end

@implementation CppTests

- (void)testCompare {
  XCTAssertEqual(NSCompare(1, 2), NSOrderedAscending);
  XCTAssertEqual(NSCompare(1, 1), NSOrderedSame);
  XCTAssertEqual(NSCompare(2, 1), NSOrderedDescending);
}

- (void)testDynamicCasting {
  XCTAssert(NSDynamicCast<NSString>(@"abc") != nil);
  XCTAssert(NSDynamicCast<NSNumber>(@"abc") == nil);
  XCTAssert(NSDynamicCast<NSString>(nil) == nil);
}

@end
