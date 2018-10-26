//
//  Scope.c
//  ObjcKit
//
//  Created by Zhu Shengqi on 04/02/2018.
//  Copyright © 2018 Zhu Shengqi. All rights reserved.
//

#include "Scope.h"

#import "Foundation/Foundation.h"

void _executeCleanupBlock(_CleanupBlock _Nonnull * _Nonnull block __attribute__((__noescape__)))
{
  (*block)();
}

