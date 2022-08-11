#pragma once

#include "types.h"

class LinearRegression {
public:
    LinearRegression();
    void fit(Matrix X, Matrix y); // Cambie y de matriz a vector.
    Matrix predict(Matrix X);

private:
    Matrix alpha;
};
