//===--- objc_call_class_method.h - test input file for iwyu --------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that calling class method in implementation requires full class use

#import <objc/Object.h>

@interface Foo : Object {
}
@end

/**** IWYU_SUMMARY

(tests/objc_call_class_method.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
