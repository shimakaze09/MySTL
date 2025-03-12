//
// Created by Admin on 12/03/2025.
//

#pragma once

#include <tuple>

namespace My::MySTL {
template <bool... Masks, typename Tuple, typename Init, typename Func>
constexpr auto tuple_accumulate(Tuple&&, Init&&, Func&&);
}  // namespace My::MySTL

#include "detail/tuple.inl"
