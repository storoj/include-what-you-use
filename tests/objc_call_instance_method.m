//===--- objc_call_instance_method.m - test input file for iwyu -----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#import "tests/objc_call_instance_method.h"
#import "tests/objc_call_instance_method-i1.h"

@implementation Foo

- (void)method:(Bar *)var {
  [var instanceMethod];
}

@end

/**** IWYU_SUMMARY

(tests/objc_call_instance_method.m has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
