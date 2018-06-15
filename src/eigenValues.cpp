// Copyright (c) 2018 Oscar Torreno <oscartorreno@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <test-appveyor.h>
#include <Eigen/EigenValues>

Eigen::scomplex *eigVals(float coeffs[], int n) {
    Eigen::VectorXf vec = Eigen::VectorXf::Ones(n);
    Eigen::MatrixXf diag = vec.asDiagonal();

    Eigen::MatrixXf diag2(diag.rows(), diag.cols());
    int rest = static_cast<int>(diag.rows()) - 1;
    diag2.topRows(1) = Eigen::Map<Eigen::MatrixXf>(coeffs, 1, n);
    diag2.bottomRows(rest) = diag.topRows(rest);

    Eigen::VectorXcf eivals = diag2.eigenvalues();

    return eivals.data();
}