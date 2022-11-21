
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Fri, 18 Nov 2022 00:52:46 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBaseGrayLight,
ColorBaseGrayMedium,
ColorBaseGrayDark,
ColorBaseRed,
ColorBaseGreen,
ColorFontBase,
ColorFontSecondary,
ColorFontTertiary
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
