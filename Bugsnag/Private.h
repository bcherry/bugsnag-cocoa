/**
 * Exposes non-public interfaces between the components of the library for
 * internal use
 */
#ifndef BUGSNAG_PRIVATE_H
#define BUGSNAG_PRIVATE_H

#import "BSG_RFC3339DateTool.h"
#import "Bugsnag.h"
#import "BugsnagBreadcrumb.h"
#import "BugsnagKeys.h"
#import "BugsnagLogger.h"
#import "BugsnagMetadataInternal.h"
#import "BugsnagPlatformConditional.h"

@class BugsnagConfiguration;

#pragma mark -

@interface BugsnagBreadcrumb ()

- (NSDictionary *_Nullable)objectValue;

@end

#endif // BUGSNAG_PRIVATE_H
