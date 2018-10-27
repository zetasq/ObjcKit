//
//  KeyPath.h
//  ObjcKit
//
//  Created by Zhu Shengqi on 04/02/2018.
//  Copyright © 2018 Zhu Shengqi. All rights reserved.
//

#pragma once

@import Foundation;

#if defined(DEBUG) && !defined(NDEBUG)
#define keyPath(OBJECT, PROPERTY) \
        ((((__typeof__(OBJECT))nil).PROPERTY, #PROPERTY))
#else
#define keyPath(OBJECT, PROPERTY) \
        #PROPERTY
#endif
