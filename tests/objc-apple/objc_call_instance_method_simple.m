#include "objc_call_instance_method_simple.h"
#include "objc_call_instance_method_simple-i1.h"

void foo(Bar *b) {
    [b instanceMethod];
}

/**** IWYU_SUMMARY

(tests/objc-apple/objc_call_instance_method_simple.m has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
