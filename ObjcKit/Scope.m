//
//  Scope.c
//  ObjcKit
//
//  Created by Zhu Shengqi on 04/02/2018.
//  Copyright © 2018 Zhu Shengqi. All rights reserved.
//

#include "Scope.h"

void _executeCleanupBlock(_CleanupBlock _Nonnull * _Nonnull block)
{
  (*block)();
}

#import "Foundation/Foundation.h"
void test() {
  NSObject *abc = NSObject.new;
  
  if (abc == nil) {
    
  }
  @weakify(abc);
  dispatch_async(dispatch_get_main_queue(), ^{
    @strongify(abc);
    
    @weakify(abc);
    dispatch_async(dispatch_get_main_queue(), ^{
      @strongify(abc);
      
    });
  });
}

