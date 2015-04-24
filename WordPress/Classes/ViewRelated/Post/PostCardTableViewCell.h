#import <UIKit/UIKit.h>
#import "PostCardActionBar.h"
#import "WPPostContentViewProvider.h"
#import "PostCardTableViewCellDelegate.h"

@protocol PostCardTableViewCellDelegate;

@interface PostCardTableViewCell : UITableViewCell

@property (nonatomic, weak) id<PostCardTableViewCellDelegate>delegate;
@property (nonatomic, assign) BOOL canShowRestoreView;

- (void)configureCell:(id<WPPostContentViewProvider>)contentProvider;

@end
