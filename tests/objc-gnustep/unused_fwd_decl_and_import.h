//===--- unused_fwd_decl_and_import.h - test input file for iwyu ----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that unused forward declaration and import are removed. Main difference
// from unused_fwd_decl is that here is available definition and it causes
// slightly different flow of logic.

#import <objc/Object.h>
#import "imported_class.h"

@class ImportedClass;


@interface C : Object {
}
@end

/**** IWYU_SUMMARY

tests/objc-gnustep/unused_fwd_decl_and_import.h should add these lines:

tests/objc-gnustep/unused_fwd_decl_and_import.h should remove these lines:
- #import "imported_class.h"  // lines XX-XX
- @class ImportedClass;  // lines XX-XX

The full include-list for tests/objc-gnustep/unused_fwd_decl_and_import.h:
#import <objc/Object.h>  // for Object

***** IWYU_SUMMARY */
