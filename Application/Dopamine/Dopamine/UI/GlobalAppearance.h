//
//  GlobalAppearance.h
//  Dopamine
//
//  Created by Lars Fröder on 10.10.23.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GlobalAppearance : NSObject

+ (UIImageSymbolConfiguration *)smallIconImageConfiguration;
+ (UIButtonConfiguration *)defaultButtonConfiguration;
+ (UIButtonConfiguration *)defaultButtonConfigurationWithImagePadding:(CGFloat)imagePadding;

@end

NS_ASSUME_NONNULL_END
