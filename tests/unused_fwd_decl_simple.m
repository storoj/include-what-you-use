@class Unused;
@class Used;

void foo(Used *used) {}

/**** IWYU_SUMMARY

tests/unused_fwd_decl_simple.m should add these lines:

tests/unused_fwd_decl_simple.m should remove these lines:
- @class Unused;  // lines XX-XX

The full include-list for tests/unused_fwd_decl_simple.m:
@class Used;  // lines XX-XX

***** IWYU_SUMMARY */
