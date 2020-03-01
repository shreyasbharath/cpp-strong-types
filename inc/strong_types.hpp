#ifndef STRONG_TYPES_HPP
#define STRONG_TYPES_HPP

#include <named_type/named_type.hpp>

using Speed = fluent::NamedType<double, struct SpeedParameter, fluent::Comparable, fluent::Printable>;

constexpr Speed operator"" _mps(long double value) { return Speed(value); }
constexpr Speed operator"" _kph(long double value) { return Speed(value / 3.6); }
constexpr Speed operator"" _mph(long double value) { return Speed(value * 0.44704); }

using Distance = fluent::NamedType<double, struct DistanceParameter, fluent::Addable, fluent::Comparable, fluent::Printable>;
constexpr Distance operator"" _km(long double value) { return Distance(value * 1000.0); }
constexpr Distance operator"" _mi(long double value) { return Distance(value / 0.000621371); }
constexpr Distance operator"" _metres(long double value) { return Distance(value); }

#endif /* STRONG_TYPES_HPP */
