//===--- objc_empty_category.h - test input file for iwyu -----------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that empty category aka continuation (e.g. Foo()) is handled correctly.

#import <objc/NSObject.h>

@interface Foo : NSObject {
}
@end

/**** IWYU_SUMMARY

(tests/objc-apple/objc_empty_category.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
