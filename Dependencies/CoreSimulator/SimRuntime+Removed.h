//
//  SimRuntime+Removed.h
//  SimulatorLauncher
//
//  Created by Chandler, Scott on 3/9/17.
//
//

#import <CoreSimulator/SimRuntime.h>

@interface SimRuntime(Removed)
// Removed in Xcode 8.1
+(NSArray<SimRuntime *> *)supportedRuntimes;
@end
