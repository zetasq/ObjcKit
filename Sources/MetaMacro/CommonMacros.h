//
//  CommonMacros.h
//  ObjcKit
//
//  Created by Zhu Shengqi on 04/02/2018.
//  Copyright © 2018 Zhu Shengqi. All rights reserved.
//

#pragma once

#define metamacro_cat(A, B) A ## B
#define metamacro_expand_then_cat(A, B) \
        metamacro_cat(A, B)

#define metamacro_first_atleast_two_args(FIRST, ...) \
        FIRST
#define metamacro_first(...) \
        metamacro_first_atleast_two_args(__VA_ARGS__, 0)

#define metamacro_drop_first(FIRST, ...) __VA_ARGS__

