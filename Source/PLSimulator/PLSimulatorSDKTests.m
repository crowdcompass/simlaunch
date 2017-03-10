/*
 * Author: Landon Fuller <landonf@plausiblelabs.com>
 *
 * Copyright (c) 2010 Plausible Labs Cooperative, Inc.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#import "PLTestCase.h"

#import "PLSimulator.h"
#import "PLSimulatorSDK.h"

@interface PLSimulatorSDKTests : PLTestCase
@end

@implementation PLSimulatorSDKTests

- (void) testInit {
    NSError *error;
    PLSimulatorSDK *sdk = [[PLSimulatorSDK alloc] initWithPath: [self pathForResource: @"3.1.sdk"] error: &error];
    XCTAssertNotNil(sdk, @"Could not read SDK meta-data: %@", error);
    XCTAssertEqualObjects(@"3.1", sdk.version, @"Incorrect version");
    
    XCTAssertTrue([sdk.deviceFamilies containsObject: [PLSimulatorDeviceFamily iphoneFamily]], @"SDK does not include iPhone support");
}

- (void) testDeviceFamilyHandling {
    NSError *error;
    PLSimulatorSDK *sdk = [[PLSimulatorSDK alloc] initWithPath: [self pathForResource: @"3.2.sdk"] error: &error];
    XCTAssertNotNil(sdk, @"Could not read SDK meta-data: %@", error);
    XCTAssertEqualObjects(@"3.2", sdk.version, @"Incorrect version");
    
    NSLog(@"Families: %@", sdk.deviceFamilies);
    XCTAssertTrue([sdk.deviceFamilies containsObject: [PLSimulatorDeviceFamily iphoneFamily]], @"SDK does not include iPhone support");
    XCTAssertTrue([sdk.deviceFamilies containsObject: [PLSimulatorDeviceFamily ipadFamily]], @"SDK does not include iPad support");

}


@end
