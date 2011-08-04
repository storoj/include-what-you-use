//===--- not_fwd_decl_superclass.m - test input file for iwyu -------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#import "tests/not_fwd_decl_superclass.h"

@implementation C
@end

/**** IWYU_SUMMARY

(tests/not_fwd_decl_superclass.m has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
