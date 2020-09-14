//===--- objc_protocol_by_class.m - test input file for iwyu --------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#import "objc_protocol_by_class.h"

@implementation Foo
@end

/**** IWYU_SUMMARY

(tests/objc-gnustep/objc_protocol_by_class.m has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
