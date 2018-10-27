//
//  Enumeration.h
//  ObjcKit
//
//  Created by Zhu Shengqi on 04/02/2018.
//  Copyright © 2018 Zhu Shengqi. All rights reserved.
//

#pragma once

@import Foundation;

@protocol FastEnumeration <NSFastEnumeration>
- (id)enumeratedType;
@end

#define foreach(ELEMENT, COLLECTION) \
        for (__unsafe_unretained __typeof__((COLLECTION).enumeratedType) ELEMENT in (COLLECTION))

@interface NSArray <ElementType> (Enumeration) <FastEnumeration>
- (ElementType)enumeratedType;
@end

@interface NSSet <ElementType> (Enumeration) <FastEnumeration>
- (ElementType)enumeratedType;
@end

@interface NSDictionary <KeyType, ValueType> (Enumeration) <FastEnumeration>
- (KeyType)enumeratedType;
@end

@interface NSOrderedSet <ElementType> (Enumeration) <FastEnumeration>
- (ElementType)enumeratedType;
@end

@interface NSPointerArray (Enumeration) <FastEnumeration>
- (void *)enumeratedType;
@end

@interface NSHashTable <ElementType> (Enumeration) <FastEnumeration>
- (ElementType)enumeratedType;
@end

@interface NSMapTable <KeyType, ValueType> (Enumeration) <FastEnumeration>
- (KeyType)enumeratedType;
@end

@interface NSEnumerator <ElementType> (Enumeration) <FastEnumeration>
- (ElementType)enumeratedType;
@end
