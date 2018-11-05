# Primordial Machine's Least Greatest Functors Library
C++ 17 library providing extendable abstractions of the least value and greatest value.

The library is made available publicly on [GitHub](https://github.com/primordialmachine/least-greatest-functors) under the [MIT License](https://github.com/primordialmachine/safe-arithmetic-functors/blob/master/LICENSE).

## Usage Example

To obtain the least value value and the greatest value of the builtin type `float+:
```
using primordialmachine;
least<float>(); /* -FLT_MAX */
greatest<float>(); /* - FLT_MAX */
```
To obtain the least value and the greatest value of the builtin type `uint64_t`:
```
using primordialmachine;
least<uint64_t>(); /* UINT64_C(0) */
greatest<uint64_t>(); /* UINt64_MAX */
```

Consumers can implement these functors for their own types by adding (partial) specializations of `least_expr` and `greatest_expr`. The following example implements the least functor for a user-defined type `template<typename U> V` (we assume for this example that `V<U>::least()` yields the least value of the type `V<U>`).
```
namespace primordialmachine {
template<typename U>
struct least_expr<V<U>, void>
{
  using result_type = V<U>;
  operator result_type() const noexcept(noexcept(result_type::least()))
  { return result_type::least(); };
}; // struct least_expr
} // namespace primordialmachine
```

If `V<U>::least()` is constexpr, one may add the `constexpr` keyword.
```
namespace primordialmachine {
template<typename U>
struct least_expr<V<U>, void>
{
  using result_type = V<U>;
  constexpr result_type() const noexcept(noexcept(result_type::least()))
  { return result_type::least(); };
}; // struct least_expr
} // namespace primordialmachine
```

Furthermore, `least_expr` and `greatest_expr` support SFINAE. The following example implements the same functor only if some side condition `C` evaluates to `true`.
```
namespace primordialmachine {
template<typename U>
struct least_expr<V<U>, std::enable_if_t<C()>>
{
  using result_type = V<U>;
  constexpr auto operator()() const noexcept(noexcept(result_type::value()))
  { return result_type::value(); };
}; // struct least_expr
} // namespace primordialmachine
```

## Restrictions
*The library officially only supports Visual Studio 2017.*

## Releases
Relases of this library are made available via [GitHub releases](https://github.com/primordialmachine/least-greatest-functors/releases/). A Github Release contains the *source code*, *prebuilt documentation*, and *prebuilt binaries for Visual Studio 2017*. The latest release is [version 0.1](https://github.com/primordialmachine/least-greatest-functors/releases/latest).
