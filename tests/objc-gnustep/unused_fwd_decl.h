//===--- unused_fwd_decl.h - test input file for iwyu ---------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that unused forward declaration is removed

#import <objc/Object.h>

@class ImportedClass;


@interface C : Object {
}
@end

/**** IWYU_SUMMARY

tests/objc-gnustep/unused_fwd_decl.h should add these lines:

tests/objc-gnustep/unused_fwd_decl.h should remove these lines:
- @class ImportedClass;  // lines XX-XX

The full include-list for tests/objc-gnustep/unused_fwd_decl.h:
#import <objc/Object.h>  // for Object

***** IWYU_SUMMARY */
