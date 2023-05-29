/*
 * This code is a modified version of Benjamin Jurke's work in 2015. You can read his blog post
 * here:
 * https://benjaminjurke.com/content/articles/2015/compile-time-numerical-unit-dimension-checking/
*/
#pragma once

#include "apollo/api/units/QAngle.h"
#include "apollo/api/units/QFrequency.h"
#include "apollo/api/units/QTime.h"
#include "apollo/api/units/RQuantity.h"

namespace apollo {
QUANTITY_TYPE(0, 0, -1, 1, QAngularSpeed)

constexpr QAngularSpeed radps = radian / second;
constexpr QAngularSpeed rpm = (360 * degree) / minute;
constexpr QAngularSpeed cps = (0.01 * degree) / second; // centidegree per second

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
static QAngularSpeed convertHertzToRadPerSec(QFrequency in) {
  return (in.convert(Hz) / 2_pi) * radps;
}
#pragma GCC diagnostic pop

inline namespace literals {
constexpr QAngularSpeed operator"" _rpm(long double x) {
  return x * rpm;
}
constexpr QAngularSpeed operator"" _rpm(unsigned long long int x) {
  return static_cast<double>(x) * rpm;
}
} // namespace literals
} // namespace apollo
