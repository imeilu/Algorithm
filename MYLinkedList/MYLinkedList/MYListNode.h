//
//  MYListNode.h
//  MYLinkedList
//
//  Created by wangmingyu on 2022/2/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MYListNode : NSObject

/// Create List
/// @param array array
+ (MYListNode *)createListWithArray:(NSArray<NSNumber *> *)array;

/// Traverse List
/// @param head List Head
+ (void)printListValueWithNodeHead:(MYListNode *)head;


/// new invert list head
/// @param head head
+ (MYListNode *)invertListWithHead:(MYListNode *)head;

@end

NS_ASSUME_NONNULL_END
