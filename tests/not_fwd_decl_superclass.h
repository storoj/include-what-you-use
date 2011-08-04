//===--- not_fwd_decl_superclass.h - test input file for iwyu -------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that forward declaration of superclass is removed in favor of import

#import "tests/imported_class.h"

@class ImportedClass;


@interface C : ImportedClass {
 @private
  ImportedClass *var;
}
@end

/**** IWYU_SUMMARY

tests/not_fwd_decl_superclass.h should add these lines:

tests/not_fwd_decl_superclass.h should remove these lines:
- @class ImportedClass;  // lines XX-XX

The full include-list for tests/not_fwd_decl_superclass.h:
#import "tests/imported_class.h"  // for ImportedClass

***** IWYU_SUMMARY */
