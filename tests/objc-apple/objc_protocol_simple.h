@class Foo;
@protocol Bar;

void funcFoo(Foo *foo);
void funcFoo2(Foo *foo);
void funcBar(id<Bar> bar);

/**** IWYU_SUMMARY

(tests/objc-apple/objc_protocol_simple.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
