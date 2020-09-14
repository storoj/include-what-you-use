#import "objc_protocol_simple.h"

void funcFoo(Foo *foo) {}
void funcBar(id<Bar> bar) {}

/**** IWYU_SUMMARY

(tests/objc-gnustep/objc_protocol_simple.m has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
