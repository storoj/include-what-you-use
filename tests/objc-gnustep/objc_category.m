//===--- objc_category.m - test input file for iwyu -----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that category @interface is imported.

#import "objc_category.h"

@implementation ImportedClass(FooCategory)
@end

/**** IWYU_SUMMARY

(tests/objc-gnustep/objc_category.m has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
