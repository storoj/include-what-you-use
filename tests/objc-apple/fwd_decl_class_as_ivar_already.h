//===--- fwd_decl_class_as_ivar_already.h - test input file for iwyu ------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that forward declaration is respected. Actually it is
// fwd_decl_class_as_ivar.h, .cc with applied IWYU recommendations. Obviously
// IWYU should not offer more changes.

#import <objc/NSObject.h>

@class ImportedClass;

@interface C : NSObject {
 @private
  ImportedClass *var;
}
@end

/**** IWYU_SUMMARY

(tests/objc-apple/fwd_decl_class_as_ivar_already.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
