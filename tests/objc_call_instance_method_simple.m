#include "tests/objc_call_instance_method_simple.h"
#include "tests/objc_call_instance_method_simple-i1.h"

void foo(Bar *b) {
    [b instanceMethod];
}

/**** IWYU_SUMMARY

(tests/objc_call_instance_method_simple.m has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
