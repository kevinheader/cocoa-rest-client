//
//  CRCconstants.h
//  
//
//  Created by Diego Massanti on 3/9/16.
//
//

#import <Foundation/Foundation.h>

#define APPLICATION_NAME @"CocoaRestClient"
#define DATAFILE_NAME @"CocoaRestClient.savedRequests"
#define BACKUP_DATAFILE_1_3_8 @"CocoaRestClient.savedRequests.backup-1.3.8"

FOUNDATION_EXPORT NSString * const FOLLOW_REDIRECTS;
FOUNDATION_EXPORT NSString * const APPLY_HTTP_METHOD_ON_REDIRECT;
FOUNDATION_EXPORT NSString * const SYNTAX_HIGHLIGHT;
FOUNDATION_EXPORT NSString * const RAW_REQUEST_BODY;
FOUNDATION_EXPORT NSString * const RESPONSE_TIMEOUT;
FOUNDATION_EXPORT NSString * const SAVED_DRAWER_SIZE;
FOUNDATION_EXPORT NSString * const THEME;
FOUNDATION_EXPORT NSUInteger const DEFAULT_FONT_SIZE;
FOUNDATION_EXPORT NSString * const SHOW_LINE_NUMBERS;
FOUNDATION_EXPORT NSString * const DISABLE_ANIMATIONS;
FOUNDATION_EXPORT NSString * const DISABLE_COOKIES;
FOUNDATION_EXPORT NSString * const FILE_REQUEST_BODY;
@interface CRCConstants : NSObject

@end
