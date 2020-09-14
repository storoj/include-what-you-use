//===--- fwd_declarable_decl_in_same_file.h - test input file for iwyu ----===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that we don't forward declare class which is defined in the same file

#import <objc/NSObject.h>


@interface Foo : NSObject {
}
@end

@interface Bar : NSObject {
 @private
  Foo *foo;
}
@end

/**** IWYU_SUMMARY

(tests/objc-apple/fwd_declarable_decl_in_same_file.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
