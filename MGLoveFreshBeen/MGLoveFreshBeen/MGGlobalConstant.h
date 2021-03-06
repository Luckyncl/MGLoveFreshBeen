//
//  MGGlobalConstant.h
//  MGLoveFreshBeen
//
//  Created by ming on 16/7/15.
//  Copyright © 2016年 ming. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MGGlobalConstant : NSObject

/** 优惠劵使用规则的网址  */
UIKIT_EXTERN NSString * const MGCouponUserRuleURLString;


#pragma mark - 间距
/** 全局间距10 */
UIKIT_EXTERN CGFloat const MGMargin;

/** 全局小间距5 */
UIKIT_EXTERN CGFloat const MGSmallMargin;

/** 默认导航栏的高度64 */
UIKIT_EXTERN CGFloat const MGNavHeight;


#pragma mark - 通知
/** 通知：添加地址的通知 */
UIKIT_EXTERN NSString * const MGAddAddressNotification;

/** 通知：编辑地址的通知 */
UIKIT_EXTERN NSString * const MGEditAddressNotification;

/** 通知：分类栏选中的的通知 */
UIKIT_EXTERN NSString * const MGCategortsSelectedIndexPathNotification;

/** 通知：头部即将消失的的通知 */
UIKIT_EXTERN NSString * const MGWillDisplayHeaderViewNotification;

/** 通知：头部完全消失的的通知 */
UIKIT_EXTERN NSString * const MGDidEndDisplayingHeaderViewNotification;

/** 通知：hotView点击的的通知 */
UIKIT_EXTERN NSString * const MGHotPanClickNotification;

/** 通知：轮播器图片被点击的点击的的通知 */
UIKIT_EXTERN NSString * const MGCarouseViewImageClickNotification;


#pragma mark - 友盟分享APPKey
UIKIT_EXTERN NSString * const MGUmengAppkey;



@end
