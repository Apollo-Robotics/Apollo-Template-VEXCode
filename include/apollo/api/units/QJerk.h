/*
 * This code is a modified version of Benjamin Jurke's work in 2015. You can read his blog post
 * here:
 * https://benjaminjurke.com/content/articles/2015/compile-time-numerical-unit-dimension-checking/
*/
#pragma once

#include "apollo/api/units/QLength.h"
#include "apollo/api/units/QTime.h"
#include "apollo/api/units/RQuantity.h"

namespace apollo {
QUANTITY_TYPE(0, 1, -3, 0, QJerk)
}
