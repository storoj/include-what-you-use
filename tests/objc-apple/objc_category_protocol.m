#import <objc/NSObject.h>
#import "objc_category_protocol.h"
#import "objc_category_protocol-1.h"
#import "objc_category_protocol-2.h"

@interface NSObject(Foo) <Foo>
@end

@implementation NSObject(Foo)
@end

void funcBar(id<Foo, Bar> x) {}

/**** IWYU_SUMMARY

tests/objc-apple/objc_category_protocol.m should add these lines:

tests/objc-apple/objc_category_protocol.m should remove these lines:
- #import "objc_category_protocol-2.h"  // lines XX-XX

The full include-list for tests/objc-apple/objc_category_protocol.m:
#import "objc_category_protocol.h"
#import <objc/NSObject.h>  // for NSObject
#import "objc_category_protocol-1.h"  // for Foo

***** IWYU_SUMMARY */
