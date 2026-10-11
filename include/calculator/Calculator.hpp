#pragma once

namespace math {

class Calculator {
public:
    Calculator() = default;
    ~Calculator() = default;

    double add(double a, double b) const;
    double subtract(double a, double b) const;
    double multiply(double a, double b) const;
    double divide(double a, double b) const;
};

} // namespace math