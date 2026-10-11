#include <iostream>
#include <fmt/core.h>
#include "calculator/Calculator.hpp"

int main() {
    math::Calculator calc;

    double a = 10.5;
    double b = 2.5;

    double result = calc.add(a, b);

    fmt::print("Result of {} + {} = {}\n", a, b, result);

    return 0;
}