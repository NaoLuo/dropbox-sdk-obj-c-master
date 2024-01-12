///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBUSERSGetAccountArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetAccountArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBUSERSGetAccountArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// A user's account identifier.
@property (nonatomic, readonly, copy) NSString *accountId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accountId A user's account identifier.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccountId:(NSString *)accountId;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetAccountArg` struct.
///
@interface DBUSERSGetAccountArgSerializer : NSObject

///
/// Serializes `DBUSERSGetAccountArg` instances.
///
/// @param instance An instance of the `DBUSERSGetAccountArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBUSERSGetAccountArg` API object.
///
+ (NSDictionary *)serialize:(DBUSERSGetAccountArg *)instance;

///
/// Deserializes `DBUSERSGetAccountArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBUSERSGetAccountArg` API object.
///
/// @return An instantiation of the `DBUSERSGetAccountArg` object.
///
+ (DBUSERSGetAccountArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
