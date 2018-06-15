// Copyright (c) 2018 Oscar Torreno <oscartorreno@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <gtest/gtest.h>
#include <test-appveyor.h>

TEST(TestsArrayFire, AfRange) {
    af::array a = afRange(2);

    float *calculated = a.host<float>();

    ASSERT_EQ(calculated[0], 0);
    ASSERT_EQ(calculated[1], 1);
}

TEST(TestsArrayFire, AfGetAvailableBackends) {
    int bs = afBackends();

    std::cout << "Backends: " << bs << std::endl;
}
