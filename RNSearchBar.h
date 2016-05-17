#import <UIKit/UIKit.h>

@class RCTEventDispatcher;

@interface RNSearchBar : UISearchBar

@property (nonatomic) bool hidesCancelButton;
- (instancetype)initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher NS_DESIGNATED_INITIALIZER;

@end
