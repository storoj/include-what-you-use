#import <objc/Object.h>
#import "tests/objc_category_protocol.h"
#import "tests/objc_category_protocol-1.h"
#import "tests/objc_category_protocol-2.h"

@interface Object(Foo) <Foo>
@end

@implementation Object(Foo)
@end

void funcBar(id<Foo, Bar> x) {}

/**** IWYU_SUMMARY

tests/objc_category_protocol.m should add these lines:
@protocol Bar;

tests/objc_category_protocol.m should remove these lines:
- #import "tests/objc_category_protocol-2.h"  // lines XX-XX

The full include-list for tests/objc_category_protocol.m:
#import "tests/objc_category_protocol.h"
#import <objc/Object.h>  // for Object
#import "tests/objc_category_protocol-1.h"  // for Foo
@protocol Bar;

***** IWYU_SUMMARY */
