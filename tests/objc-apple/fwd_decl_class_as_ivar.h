//===--- fwd_decl_class_as_ivar.h - test input file for iwyu --------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that import of instance variable class is replaced with forward
// declaration

#import <objc/NSObject.h>
#import "imported_class.h"

@interface C : NSObject {
 @private
  ImportedClass *var;
}
@end

/**** IWYU_SUMMARY

tests/objc-apple/fwd_decl_class_as_ivar.h should add these lines:
@class ImportedClass;

tests/objc-apple/fwd_decl_class_as_ivar.h should remove these lines:
- #import "imported_class.h"  // lines XX-XX

The full include-list for tests/objc-apple/fwd_decl_class_as_ivar.h:
#import <objc/NSObject.h>  // for NSObject
@class ImportedClass;

***** IWYU_SUMMARY */
