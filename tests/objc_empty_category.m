//===--- objc_empty_category.m - test input file for iwyu -----------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#import "tests/objc_empty_category.h"

@interface Foo()
// some private stuff
@end

@implementation Foo
@end

/**** IWYU_SUMMARY

(tests/objc_empty_category.m has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
