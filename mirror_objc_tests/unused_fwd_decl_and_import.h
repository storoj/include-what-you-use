//===--- unused_fwd_decl_and_import.h - test input file for iwyu ----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that unused forward declaration and import are removed. Main difference
// from unused_fwd_decl is that here is available definition and it causes
// slightly different flow of logic.

#include "mirror_objc_tests/not_fwd_decl_superclass-i1.h"

class Impl;

class C {
 public:
  C();
};
