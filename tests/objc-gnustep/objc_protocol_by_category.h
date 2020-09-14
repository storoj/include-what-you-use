//===--- objc_protocol_by_category.h - test input file for iwyu -----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that if class category conforms to protocol, it requires full protocol
// use.

#import "imported_class.h"
#import "objc_protocol.h"

@interface ImportedClass(FooCategory) <FooProtocol>
@end

/**** IWYU_SUMMARY

(tests/objc-gnustep/objc_protocol_by_category.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
