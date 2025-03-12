//
// Created by Admin on 12/03/2025.
//

#include <MySTL/tuple.h>

int main() {
  constexpr auto rst = My::MySTL::tuple_accumulate<true, false, true>(
      std::tuple{1, 2, 3}, 6, [](auto&& acc, auto i) { return acc + i; });
  static_assert(rst == 10);
}
