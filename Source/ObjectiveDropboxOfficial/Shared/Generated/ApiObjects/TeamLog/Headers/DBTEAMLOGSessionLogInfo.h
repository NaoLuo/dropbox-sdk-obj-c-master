///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSessionLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SessionLogInfo` struct.
///
/// Session's logged information.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSessionLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Session ID. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *sessionId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sessionId Session ID. Might be missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithSessionId:(nullable NSString *)sessionId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SessionLogInfo` struct.
///
@interface DBTEAMLOGSessionLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGSessionLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGSessionLogInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSessionLogInfo` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGSessionLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGSessionLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSessionLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGSessionLogInfo` object.
///
+ (DBTEAMLOGSessionLogInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
