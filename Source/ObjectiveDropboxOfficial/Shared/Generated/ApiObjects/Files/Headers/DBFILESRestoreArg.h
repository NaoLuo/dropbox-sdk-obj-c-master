///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESRestoreArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RestoreArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESRestoreArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The path to the file you want to restore.
@property (nonatomic, readonly, copy) NSString *path;

/// The revision to restore for the file.
@property (nonatomic, readonly, copy) NSString *rev;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path to the file you want to restore.
/// @param rev The revision to restore for the file.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path rev:(NSString *)rev;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RestoreArg` struct.
///
@interface DBFILESRestoreArgSerializer : NSObject

///
/// Serializes `DBFILESRestoreArg` instances.
///
/// @param instance An instance of the `DBFILESRestoreArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESRestoreArg` API object.
///
+ (NSDictionary *)serialize:(DBFILESRestoreArg *)instance;

///
/// Deserializes `DBFILESRestoreArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESRestoreArg` API object.
///
/// @return An instantiation of the `DBFILESRestoreArg` object.
///
+ (DBFILESRestoreArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
