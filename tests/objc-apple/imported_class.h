//===--- imported_class.h - test input file for iwyu ----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// This file is meant to be imported by other test files.

#import <objc/NSObject.h>

@interface ImportedClass : NSObject {
}
@end

/**** IWYU_SUMMARY

(tests/objc-apple/imported_class.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
