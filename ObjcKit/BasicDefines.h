//
//  TypeInfer.h
//  ObjcKit
//
//  Created by Zhu Shengqi on 01/02/2018.
//  Copyright © 2018 Zhu Shengqi. All rights reserved.
//

#pragma once

@import Foundation;

#pragma mark - Type Infer

#if defined(__cplusplus)

#define let auto const
#define var auto

#else

#define let const __auto_type
#define var __auto_type

#endif





