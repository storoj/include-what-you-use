//===--- objc_protocol_fwd_declare.h - test input file for iwyu -----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that if protocol is encountered in a type of a variable, it is forward
// declared. Tests protocol list for id and concrete class. Tests that existing
// protocol forward declarations are not ignored.
// It also tests that concrete class with protocol list is still forward
// declared (e.g. ImportedClass <BarProtocol> *).

#import <objc/Object.h>
#import "tests/objc_protocol.h"
@class ImportedClass;
@protocol BarProtocol;
@protocol ClassProtocol;

@interface Foo : Object {
 @private
  id <FooProtocol> fooVar;
  ImportedClass <BarProtocol> *barVar;
  Class <ClassProtocol> classVar;
}
@end

/**** IWYU_SUMMARY

tests/objc_protocol_fwd_declare.h should add these lines:
@protocol FooProtocol;

tests/objc_protocol_fwd_declare.h should remove these lines:
- #import "tests/objc_protocol.h"  // lines XX-XX

The full include-list for tests/objc_protocol_fwd_declare.h:
#import <objc/Object.h>  // for Object
@class ImportedClass;  // lines XX-XX
@protocol BarProtocol;  // lines XX-XX
@protocol ClassProtocol;  // lines XX-XX
@protocol FooProtocol;

***** IWYU_SUMMARY */
