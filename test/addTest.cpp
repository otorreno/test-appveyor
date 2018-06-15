// Copyright (c) 2018 Oscar Torreno <oscartorreno@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <gtest/gtest.h>
#include <test-appveyor.h>

TEST(Tests, AddTrue) { ASSERT_EQ(add(1, 2), 3); }

TEST(Tests, AddFalse) { ASSERT_NE(add(1, 2), 4); }
