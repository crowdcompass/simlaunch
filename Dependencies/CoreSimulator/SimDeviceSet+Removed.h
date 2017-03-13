//
//  SimDeviceSet+Removed.h
//  SimulatorLauncher
//
//  Created by Chandler, Scott on 3/9/17.
//
//

#import <CoreSimulator/SimDeviceSet.h>

@interface SimDeviceSet(Removed)
// Removed in Xcode 8.1
+ (instancetype)defaultSet;
+ (instancetype)setForSetPath:(NSString *)setPath;
@end
