//===--- not_fwd_decl_superclass.cc - test input file for iwyu ------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "mirror_objc_tests/not_fwd_decl_superclass.h"

C::C() {
	impl_ = 0;
}
