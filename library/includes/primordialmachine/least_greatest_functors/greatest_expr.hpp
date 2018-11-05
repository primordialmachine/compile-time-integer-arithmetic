///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Primordial Machine's Least Greatest Functors Library
// Copyright (C) 2017-2019 Michael Heilmann
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the
// use of this software.
//
// Permission is granted to anylowest to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <limits>

namespace primordialmachine {
 
template<typename TYPE>
struct greatest_expr;

template<>
struct greatest_expr<char>
{
  using result_type = char;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<char>::max();
  }
}; // struct greatest_expr

template<>
struct greatest_expr<signed char>
{
  using result_type = signed char;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<signed char>::max();
  }
}; // struct greatest_expr
template<>
struct greatest_expr<unsigned char>
{
  using result_type = unsigned char;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<unsigned char>::max();
  }
}; // struct greatest_expr

template<>
struct greatest_expr<signed short int>
{
  using result_type = signed short int;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<signed short int>::max();
  }
}; // struct greatest_expr
template<>
struct greatest_expr<unsigned short int>
{
  using result_type = unsigned short int;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<unsigned short int>::max();
  }
}; // struct greatest_expr

template<>
struct greatest_expr<signed int>
{
  using result_type = signed int;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<signed int>::max();
  }
}; // struct greatest_expr
template<>
struct greatest_expr<unsigned int>
{
  using result_type = unsigned int;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<unsigned int>::max();
  }
}; // struct greatest_expr

template<>
struct greatest_expr<signed long int>
{
  using result_type = signed long int;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<signed long int>::max();
  }
}; // struct greatest_expr
template<>
struct greatest_expr<unsigned long int>
{
  using result_type = unsigned long int;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<unsigned long int>::max();
  }
}; // struct greatest_expr

template<>
struct greatest_expr<signed long long int>
{
  using result_type = signed long long int;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<signed long long int>::max();
  }
}; // struct greatest_expr
template<>
struct greatest_expr<unsigned long long int>
{
  using result_type = unsigned long long int;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<unsigned long long int>::max();
  }
}; // struct greatest_expr

template<>
struct greatest_expr<float>
{
  using result_type = float;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<float>::max();
  };
}; // struct greatest_expr
template<>
struct greatest_expr<double>
{
  using result_type = double;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<double>::max();
  };
}; // struct greatest_expr
template<>
struct greatest_expr<long double>
{
  using result_type = long double;
  constexpr operator result_type() const noexcept
  {
    return std::numeric_limits<long double>::max();
  }
}; // struct greatest_expr

} // namespace primordialmachine
