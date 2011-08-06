//===--- unused_fwd_decl.h - test input file for iwyu ---------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that unused forward declaration is removed

class Impl;

class C {
 public:
  C();
};
