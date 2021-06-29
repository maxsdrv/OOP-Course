#ifndef HOMEWORK_FRACTION_H
#define HOMEWORK_FRACTION_H

#include <iostream>
#include <numeric>

class Fraction {
public:
    Fraction(int numerator, int denominator);
    friend std::ostream& operator<<(std::ostream& os, const Fraction& fractions);
    Fraction& operator+(const Fraction& fraction);
    Fraction& operator-(const Fraction& fraction);
    Fraction& operator*(const Fraction& fraction);
    Fraction& operator/(const Fraction& fraction);
    Fraction operator-() const;
    friend bool operator==(const Fraction& lhs, const Fraction& rhs);
    friend bool operator!=(const Fraction& lhs, const Fraction& rhs);

    friend bool operator>(const Fraction& lhs, const Fraction& rhs);
    friend bool operator<=(const Fraction& lhs, const Fraction& rhs);
    friend bool operator<(const Fraction& lhs, const Fraction& rhs);
    friend bool operator>=(const Fraction& lhs, const Fraction& rhs);

    [[nodiscard]]int getNumerator() const;
    [[nodiscard]]int getDenominator() const;
private:
    int m_numerator{};
    int m_denominator{};
    void reduce();
};


#endif //HOMEWORK_FRACTION_H
