//===--- fwd_decl_class_as_ivar.h - test input file for iwyu --------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "mirror_objc_tests/fwd_decl_class_as_ivar-i1.h"

class C {
  Impl *impl_;
 public:
  C();
};
