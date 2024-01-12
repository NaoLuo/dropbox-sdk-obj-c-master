///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///

#import "DBOAuthMobileManager-tvOS.h"
#import "DBOAuthManager+Protected.h"
#import "DBOAuthResult.h"
#import "DBSharedApplicationProtocol.h"

#import "DBSDKKeychain.h"

#pragma mark - OAuth manager base (iOS)

static NSString *kDBLinkNonce = @"dropbox.sync.nonce";

@implementation DBOAuthTVManager {
  NSURL *_dauthRedirectURL;
}

- (instancetype)initWithAppKey:(NSString *)appKey {
  self = [super initWithAppKey:appKey];
  if (self) {
    _dauthRedirectURL = [NSURL URLWithString:[NSString stringWithFormat:@"db-%@://1/connect", appKey]];
    [_urls addObject:_dauthRedirectURL];
  }
  return self;
}

- (instancetype)initWithAppKey:(NSString *)appKey host:(NSString *)host {
  self = [super initWithAppKey:appKey host:host];
  if (self) {
    _dauthRedirectURL = [NSURL URLWithString:[NSString stringWithFormat:@"db-%@://1/connect", appKey]];
    [_urls addObject:_dauthRedirectURL];
  }
  return self;
}

- (BOOL)checkAndPresentPlatformSpecificAuth:(id<DBSharedApplication>)sharedApplication {
  
    return YES;
}

//结果处理
- (DBOAuthResult *)handleRedirectURL:(NSURL *)url {
    DBOAuthResult *result = [self extractFromRedirectURL:url];
    
    if ([result isSuccess]) {
        [DBSDKKeychain storeValueWithKey:result.accessToken.uid value:result.accessToken.accessToken];
    }
    
    return result;
}
@end
