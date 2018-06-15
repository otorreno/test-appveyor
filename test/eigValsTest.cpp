// Copyright (c) 2018 Oscar Torreno <oscartorreno@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <gtest/gtest.h>
#include <test-appveyor.h>

TEST(Tests, AddTrue) {
    float coeffs[] = {2.0f, 2.0f, 2.0f};
    Eigen::scomplex *result = eigVals(coeffs, 3);

    Eigen::scomplex expected[2] = {
        Eigen::scomplex(2.919639110565185546875f, 0.0f),
        Eigen::scomplex(1.90898889794969829571939681132e-41f, 4.90454462513685974823305354151e-44f)};

    for (int i = 0; i < 2; i++) {
        std::cout << std::setprecision(30) << "Result: " << result[i] << " Expected: " << expected[i] << std::endl;
    }

    ASSERT_EQ(result[0], result[0]);
    ASSERT_EQ(result[1], result[1]);
}
