//===--- fwd_decl_class_as_ivar_already.cc - test input file for iwyu -----===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "mirror_objc_tests/fwd_decl_class_as_ivar_already.h"

C::C() {
	impl_ = 0;
}
