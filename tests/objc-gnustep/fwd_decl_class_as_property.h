//===--- fwd_decl_class_as_property.h - test input file for iwyu ----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that ObjC class as property type is forward declared.

#import <objc/Object.h>
#import "imported_class.h"


@interface Foo : Object {
}
@property (retain, nonatomic) ImportedClass *fooProperty;
// test non-class properties
@property (assign, nonatomic) id idProperty;
@property (assign, nonatomic) int intProperty;
@end

/**** IWYU_SUMMARY

tests/objc-gnustep/fwd_decl_class_as_property.h should add these lines:
@class ImportedClass;

tests/objc-gnustep/fwd_decl_class_as_property.h should remove these lines:
- #import "imported_class.h"  // lines XX-XX

The full include-list for tests/objc-gnustep/fwd_decl_class_as_property.h:
#import <objc/Object.h>  // for Object
@class ImportedClass;

***** IWYU_SUMMARY */
