//===---------------------------- any.cpp ---------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// New file. Not analyzed. TBD.
#include "__config"
#if !defined(_LIBCPP_SGX_CONFIG)

#include "experimental/any"

_LIBCPP_BEGIN_NAMESPACE_LFTS

const char* bad_any_cast::what() const _NOEXCEPT {
    return "bad any cast";
}

_LIBCPP_END_NAMESPACE_LFTS

#endif // !defined(_LIBCPP_SGX_CONFIG)
