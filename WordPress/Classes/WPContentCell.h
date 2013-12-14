//
//  WPContentCell.h
//  
//
//  Created by Tom Witkin on 12/12/13.
//
//

#import <UIKit/UIKit.h>

#import "WPTableViewCell.h"
#import "WPContentViewProvider.h"

@interface WPContentCell : WPTableViewCell

@property (nonatomic, strong) id<WPContentViewProvider> contentProvider;


+ (CGFloat)rowHeightForContentProvider:(id<WPContentViewProvider>)contentProvider andWidth:(CGFloat)width;
+ (BOOL)shortDateString;
+ (BOOL)showGravatarImage;
+ (UIFont *)statusFont;
+ (NSDictionary *)statusAttributes;
+ (NSString *)statusTextForContentProvider:(id<WPContentViewProvider>)contentProvider;
+ (UIColor *)statusColorForContentProvider:(id<WPContentViewProvider>)contentProvider;
+ (UIFont *)titleFont;
+ (NSDictionary *)titleAttributes;
+ (NSDictionary *)titleAttributesBold;
+ (NSAttributedString *)titleAttributedTextForContentProvider:(id<WPContentViewProvider>)contentProvider;
+ (UIFont *)detailFont;
+ (NSDictionary *)detailAttributes;
+ (NSString *)detailTextForContentProvider:(id<WPContentViewProvider>)contentProvider;


@end
