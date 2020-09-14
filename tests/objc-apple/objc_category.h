//===--- objc_category.h - test input file for iwyu -----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that extended by category class is imported.

#import "imported_class.h"

@interface ImportedClass(FooCategory)
@end

/**** IWYU_SUMMARY

(tests/objc-apple/objc_category.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
