//===--- fwd_declarable_decl_in_same_file.cc - test input file for iwyu ---===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#import "mirror_objc_tests/fwd_declarable_decl_in_same_file.h"


Foo::Foo() {}

Bar::Bar() {
  foo = 0;
}
