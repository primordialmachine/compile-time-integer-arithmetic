///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Primordial Machine's Least Greatest Functors Library
// Copyright (c) 2017-2019 Michael Heilmann
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the
// use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
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

#include "primordialmachine/least_greatest_functors/include.hpp"
#include "gtest/gtest.h"

// Performs the following tests:
// c == f
// where c is a literal of type T representing the least value and f is the
// least functor of type T.
TEST(least_greatest_functors_tests, least_functor_test)
{
  using namespace primordialmachine;

  ASSERT_EQ(CHAR_MIN, least_functor<char>()());
  ASSERT_EQ(SCHAR_MIN, least_functor<signed char>()());
  ASSERT_EQ(0, least_functor<unsigned char>()());

  ASSERT_EQ(SHRT_MIN, least_functor<signed short int>()());
  ASSERT_EQ(0, least_functor<unsigned short int>()());

  ASSERT_EQ(LONG_MIN, least_functor<signed long int>()());
  ASSERT_EQ(0UL, least_functor<unsigned long int>()());

  ASSERT_EQ(LLONG_MIN, least_functor<signed long long int>()());
  ASSERT_EQ(0ULL, least_functor<unsigned long long int>()());

  ASSERT_EQ(INT8_MIN, least_functor<int8_t>()());
  ASSERT_EQ(UINT8_C(0), least_functor<uint8_t>()());

  ASSERT_EQ(INT16_MIN, least_functor<int16_t>()());
  ASSERT_EQ(UINT16_C(0), least_functor<uint16_t>()());

  ASSERT_EQ(INT32_MIN, least_functor<int32_t>()());
  ASSERT_EQ(UINT32_C(0), least_functor<uint32_t>()());

  ASSERT_EQ(INT64_MIN, least_functor<int64_t>()());
  ASSERT_EQ(UINT64_C(0), least_functor<uint64_t>()());

  ASSERT_FLOAT_EQ(-FLT_MAX, least_functor<float>()());
  ASSERT_DOUBLE_EQ(-DBL_MAX, least_functor<double>()());
  ASSERT_DOUBLE_EQ(-LDBL_MAX, least_functor<long double>()());
}
