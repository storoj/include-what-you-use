//===--- imported_class.m - test input file for iwyu ----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// This file contains implementation of class intended to be imported. Also it
// tests that for @implementation we import file with @interface.

#import "imported_class.h"

@implementation ImportedClass
@end

/**** IWYU_SUMMARY

(tests/objc-gnustep/imported_class.m has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
