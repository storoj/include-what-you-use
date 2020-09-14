//===--- fwd_decl_full_in_impl.h - test input file for iwyu ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that #import in implementation file doesn't break handling forward
// declaration in .h file.
//
// Looks like we can see full ImportedClass decl (not fwd-decl) from
// @class ImportedClass, but there is no way how we can do it from .h file, if
// we don't include it directly or indirectly

#import <objc/NSObject.h>

@class ImportedClass;
@protocol FooProtocol;

@interface C : NSObject {
 @private
  ImportedClass <FooProtocol> *var;
}
@end

/**** IWYU_SUMMARY

(tests/objc-apple/fwd_decl_full_in_impl.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
