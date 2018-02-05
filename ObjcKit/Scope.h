//
//  Scope.h
//  ObjcKit
//
//  Created by Zhu Shengqi on 04/02/2018.
//  Copyright © 2018 Zhu Shengqi. All rights reserved.
//

#pragma once

#import "Keyword.h"
#import "CommonMacros.h"
#import "VariadicSubscription.h"
#import "VariadicMapping.h"

#pragma mark - Defer

typedef void (^_CleanupBlock)(void);

#if defined(__cplusplus)
extern "C" {
#endif
  void _executeCleanupBlock(_CleanupBlock _Nonnull * _Nonnull block __attribute__((__noescape__)));
#if defined(__cplusplus)
}
#endif

#define defer \
        _keywordify \
        _CleanupBlock metamacro_expand_then_cat(_deferredBlock_, __LINE__)  __attribute__((cleanup(_executeCleanupBlock), unused)) = ^

#pragma mark - Weakify

#define _weakify_iter(INDEX, CONTEXT, VAR) \
        __weak __typeof__(VAR) metamacro_cat(VAR, _weak_) = VAR;

#define weakify(...) \
        _keywordify \
        metamacro_foreach_ctx(_weakify_iter,,, __VA_ARGS__)

#pragma mark - Unsafeify

#define _unsafeify_iter(INDEX, CONTEXT, VAR) \
        __unsafe_unretained __typeof__(VAR) metamacro_cat(VAR, _weak_) = VAR;

#define unsafeify(...) \
        _keywordify \
        metamacro_foreach_ctx(_unsafeify_iter,,, __VA_ARGS__)

#pragma mark - Strongify

#define _strongify_iter(INDEX, CONTEXT, VAR) \
        __strong __typeof__(VAR) VAR = metamacro_cat(VAR, _weak_);

#define strongify(...) \
        _keywordify \
        metamacro_foreach_ctx(_strongify_iter,,, __VA_ARGS__)

