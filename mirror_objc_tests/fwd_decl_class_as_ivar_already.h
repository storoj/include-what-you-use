//===--- fwd_decl_class_as_ivar_already.h - test input file for iwyu ------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

class Impl;

class C {
  Impl *impl_;
 public:
  C();
};
