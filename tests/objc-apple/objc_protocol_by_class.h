//===--- objc_protocol_by_class.h - test input file for iwyu --------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that if class conforms to protocol, it requires full protocol use. Also
// tests that all protocols from protocol list are required.

#import <objc/NSObject.h>
#import "objc_protocol.h"
#import "objc_protocol_by_class-i1.h"

@interface Foo : NSObject <FooProtocol, BarProtocol> {
}
@end

/**** IWYU_SUMMARY

(tests/objc-apple/objc_protocol_by_class.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
