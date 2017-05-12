// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from service.djinni

#import <Foundation/Foundation.h>
@class IPSICoreService;
@class IPSIFingerprint;
@class IPSIPosition;


@interface IPSICoreService : NSObject

+ (nullable IPSICoreService *)createCoreService:(nonnull NSArray *)data;

- (nullable IPSIPosition *)updateFingerprint:(nullable IPSIFingerprint *)fingerprint;

- (nullable IPSIPosition *)updateMotion:(float)accX
                                   accY:(float)accY
                                   accZ:(float)accZ
                                     dt:(float)dt;

- (void)onGyroUpdate:(float)gyroX
               gyroY:(float)gyroY
               gyroZ:(float)gyroZ
                  dt:(float)dt;

- (void)onMagnetometerUpdate:(float)magX
                        magY:(float)magY
                        magZ:(float)magZ
                          dt:(float)dt;

- (nullable IPSIPosition *)getAbsolutePosition;

- (void)reset;

- (nullable IPSIPosition *)getFingerprintBasedPosition:(nullable IPSIFingerprint *)fingerprint;

- (BOOL)wasStepMade:(float)accX
               accY:(float)accY
               accZ:(float)accZ
                 dt:(float)dt;

- (void)updateYaw:(float)yaw;

- (void)updateDirection:(float)direction;

- (float)getDirection;

- (nullable IPSIPosition *)updateStep:(double)distanceMade;

- (nonnull NSString *)getVersion;

@end
