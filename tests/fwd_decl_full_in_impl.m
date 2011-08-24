//===--- fwd_decl_full_in_impl.m - test input file for iwyu ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#import "tests/fwd_decl_full_in_impl.h"
#import "tests/imported_class.h"

@implementation C
@end

/**** IWYU_SUMMARY

tests/fwd_decl_full_in_impl.m should add these lines:

tests/fwd_decl_full_in_impl.m should remove these lines:
- #import "tests/imported_class.h"  // lines XX-XX

The full include-list for tests/fwd_decl_full_in_impl.m:
#import "tests/fwd_decl_full_in_impl.h"

***** IWYU_SUMMARY */
