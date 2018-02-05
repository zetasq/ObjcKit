//
//  Templates.h
//  ObjcKit
//
//  Created by Zhu Shengqi on 04/02/2018.
//  Copyright © 2018 Zhu Shengqi. All rights reserved.
//

#pragma once

#if defined(__cplusplus)

#import <Foundation/Foundation.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
template <typename T>
static inline NSComparisonResult NSCompare(const T &value1, const T &value2) {
  if (value1 < value2) {
    return NSOrderedAscending;
  } else if (value1 > value2) {
    return NSOrderedDescending;
  } else {
    return NSOrderedSame;
  }
}
#pragma clang diagnostic pop


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
template <typename T>
static inline T * _Nullable NSDynamicCast(__unsafe_unretained id _Nullable obj) {
  if ([obj isKindOfClass:[T class]]) {
    return obj;
  } else {
    return nil;
  }
}
#pragma clang diagnostic pop


#endif
