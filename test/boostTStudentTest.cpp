// Copyright (c) 2018 Oscar Torreno <oscartorreno@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <gtest/gtest.h>
#include <test-appveyor.h>

TEST(TestsBoostTStudent, Pvalue) {
    float calculated = pvalue(2, 2.0f);

    ASSERT_NEAR(calculated, 0.183503f, 1e-3f);
}
