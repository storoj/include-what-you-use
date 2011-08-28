//===--- move_import.h - test input file for iwyu -------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that import replaced by forward declaration in .h file is moved to .m
// file as #import, not as #include.
//
// Also it is one of the most common IWYU problems in Objective-C.

#import <objc/Object.h>
#import "tests/objc_call_instance_method-i1.h"


@interface Foo : Object {
}
- (void)method:(Bar *)var;
@end

/**** IWYU_SUMMARY

tests/move_import.h should add these lines:
@class Bar;

tests/move_import.h should remove these lines:
- #import "tests/objc_call_instance_method-i1.h"  // lines XX-XX

The full include-list for tests/move_import.h:
#import <objc/Object.h>  // for Object
@class Bar;

***** IWYU_SUMMARY */
