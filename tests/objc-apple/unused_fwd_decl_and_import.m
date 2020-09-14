//===--- unused_fwd_decl_and_import.m - test input file for iwyu ----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#import "unused_fwd_decl_and_import.h"

@implementation C
@end

/**** IWYU_SUMMARY

(tests/objc-apple/unused_fwd_decl_and_import.m has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
