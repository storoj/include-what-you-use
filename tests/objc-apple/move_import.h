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

#import <objc/NSObject.h>
#import "objc_call_instance_method-i1.h"


@interface Foo : NSObject {
}
- (void)method:(Bar *)var;
@end

/**** IWYU_SUMMARY

tests/objc-apple/move_import.h should add these lines:
@class Bar;

tests/objc-apple/move_import.h should remove these lines:
- #import "objc_call_instance_method-i1.h"  // lines XX-XX

The full include-list for tests/objc-apple/move_import.h:
#import <objc/NSObject.h>  // for NSObject
@class Bar;

***** IWYU_SUMMARY */
