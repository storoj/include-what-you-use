//===--- objc_protocol.h - test input file for iwyu -----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// One more protocol to make protocol list contain more than 1 protocol

@protocol BarProtocol
@optional // optional not to require implementation in other test files
- (void)barMethod;
@end
