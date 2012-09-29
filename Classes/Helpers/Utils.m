//
// Created by aviel on 9/29/12.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import "Utils.h"


@implementation Utils {

}

+ (NSString *)getAppVersionAndBuild {
    NSDictionary *infoDictionary = [[NSBundle mainBundle] infoDictionary];
    NSString *version = [infoDictionary objectForKey:@"CFBundleShortVersionString"];
    NSString *build = [infoDictionary objectForKey:@"CFBundleVersion"];
    return [NSString stringWithFormat:@"%@.%@", version, build];
}


+ (NSString *)uuidString {

    CFUUIDRef uuid = CFUUIDCreate(kCFAllocatorDefault);
    NSString *uuidStr = (__bridge_transfer NSString *) CFUUIDCreateString(kCFAllocatorDefault, uuid);
    CFRelease(uuid);
    return uuidStr;
}

@end

