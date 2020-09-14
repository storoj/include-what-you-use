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

#import <objc/NSObject.h>
#import "imported_class.h"

@class ImportedClass;


@interface C : NSObject {
}
@end

/**** IWYU_SUMMARY

tests/objc-apple/unused_fwd_decl_and_import.h should add these lines:

tests/objc-apple/unused_fwd_decl_and_import.h should remove these lines:
- #import "imported_class.h"  // lines XX-XX
- @class ImportedClass;  // lines XX-XX

The full include-list for tests/objc-apple/unused_fwd_decl_and_import.h:
#import <objc/NSObject.h>  // for NSObject

***** IWYU_SUMMARY */
