/*********************************************************************************************
 *   __      __   _         _________     _ _     _    _________   __         _         __   *
 *	 \ \    / /  | |        | _______|   | | \   | |  |  ______ |  \ \       / \       / /   *
 *	  \ \  / /   | |        | |          | |\ \  | |  | |     | |   \ \     / \ \     / /    *
 *     \ \/ /    | |        | |______    | | \ \ | |  | |     | |    \ \   / / \ \   / /     *
 *     /\/\/\    | |        |_______ |   | |  \ \| |  | |     | |     \ \ / /   \ \ / /      *
 *    / /  \ \   | |______   ______| |   | |   \ \ |  | |_____| |      \ \ /     \ \ /       *
 *   /_/    \_\  |________| |________|   |_|    \__|  |_________|       \_/       \_/        *
 *                                                                                           *
 *********************************************************************************************/

#import <UIKit/UIKit.h>

#import "XLsn0wToolbar.h"

NS_ASSUME_NONNULL_BEGIN

@class XLsn0wAddressPicker;

typedef void(^XLsn0wAddressPickerBlock)(XLsn0wAddressPicker *picker,
                                                   NSString *province,
                                                   NSString *city,
                                                   NSString *area);

@interface XLsn0wAddressPicker : UIButton

@property(nonatomic, copy) XLsn0wAddressPickerBlock pickerBlock;

@property (nonatomic, strong, nullable) XLsn0wToolbar *toolbar;

- (void)show;
@end
NS_ASSUME_NONNULL_END
