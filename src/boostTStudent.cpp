// Copyright (c) 2018 Oscar Torreno <oscartorreno@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <test-appveyor.h>
#include <boost/math/distributions/students_t.hpp>

float pvalue(long df, float test) {
    boost::math::students_t dist(df);
    return 2.0f * (1.0f - static_cast<float>(boost::math::cdf(dist, test)));
}