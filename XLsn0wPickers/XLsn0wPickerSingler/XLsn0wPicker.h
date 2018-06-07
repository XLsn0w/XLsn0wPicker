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

@class XLsn0wPicker;

typedef void(^XLsn0wPickerBlock)(XLsn0wPicker *picker, NSString *selectedTitle, NSInteger selectedRow);

@interface XLsn0wPicker : UIButton

@property(nonatomic, copy) XLsn0wPickerBlock pickerBlock;

@property (nonatomic, strong, nullable) XLsn0wToolbar *toolbar;

/** 1.设置字符串数据数组 */
@property (nonatomic, strong)NSMutableArray<NSString *> *arrayData;
/** 2.设置单位标题 */
@property (nonatomic, strong)NSString *unitTitle;
/** 3.标题 */
@property (nonatomic, strong)NSString *title;

- (instancetype)initWithData:(NSArray<NSString *>*)data
                   unitTitle:(NSString *)unitTitle;

- (void)show;
@end
NS_ASSUME_NONNULL_END
