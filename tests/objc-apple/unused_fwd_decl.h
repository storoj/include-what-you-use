//===--- unused_fwd_decl.h - test input file for iwyu ---------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that unused forward declaration is removed

#import <objc/NSObject.h>

@class ImportedClass;


@interface C : NSObject {
}
@end

/**** IWYU_SUMMARY

tests/objc-apple/unused_fwd_decl.h should add these lines:

tests/objc-apple/unused_fwd_decl.h should remove these lines:
- @class ImportedClass;  // lines XX-XX

The full include-list for tests/objc-apple/unused_fwd_decl.h:
#import <objc/NSObject.h>  // for NSObject

***** IWYU_SUMMARY */
