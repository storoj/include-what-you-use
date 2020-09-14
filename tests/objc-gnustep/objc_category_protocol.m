#import <objc/Object.h>
#import "objc_category_protocol.h"
#import "objc_category_protocol-1.h"
#import "objc_category_protocol-2.h"

@interface Object(Foo) <Foo>
@end

@implementation Object(Foo)
@end

void funcBar(id<Foo, Bar> x) {}

/**** IWYU_SUMMARY

tests/objc-gnustep/objc_category_protocol.m should add these lines:

tests/objc-gnustep/objc_category_protocol.m should remove these lines:
- #import "objc_category_protocol-2.h"  // lines XX-XX

The full include-list for tests/objc-gnustep/objc_category_protocol.m:
#import "objc_category_protocol.h"
#import <objc/Object.h>  // for Object
#import "objc_category_protocol-1.h"  // for Foo

***** IWYU_SUMMARY */
