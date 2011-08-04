//===--- not_fwd_decl_superclass.h - test input file for iwyu -------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "mirror_objc_tests/not_fwd_decl_superclass-i1.h"

class Impl;

class C : public Impl {
  Impl *impl_;
public:
  C();
};
