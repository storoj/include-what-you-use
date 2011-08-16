//===--- fwd_decl_class_as_method_argument.h - test input file for iwyu ---===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that ObjC class as method argument is forward declared

#import <objc/Object.h>

@class ImportedClass;


@interface C : Object {
}

- (void)handleFoo:(ImportedClass *)foo;
@end

/**** IWYU_SUMMARY

(tests/fwd_decl_class_as_method_argument.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
