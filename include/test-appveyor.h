// Copyright (c) 2018 Oscar Torreno <oscartorreno@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <arrayfire.h>
#include <Eigen/EigenValues>

int add(int lhs, int rhs);

Eigen::scomplex *eigVals(float coeffs[], int n);

float pvalue(long df, float test);

af::array afRange(int n);

int afBackends();