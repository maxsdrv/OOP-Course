#include "Fraction.h"


Fraction::Fraction(int numerator, int denominator) : m_numerator(numerator),
                                                     m_denominator(denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Invalid argument <denominator>");
    }
}

std::ostream &operator<<(std::ostream &os, const Fraction &fractions) {
    os << fractions.m_numerator << "/" << fractions.m_denominator << std::endl;
    return os;
}

Fraction &Fraction::operator+(const Fraction &fraction) {
    int union_denominator = std::lcm(m_denominator, fraction.m_denominator);
    int add_for_left = union_denominator / m_denominator;
    int add_for_right = union_denominator / fraction.m_denominator;
    int right_numerator = m_numerator * add_for_left;
    int left_numerator = fraction.m_numerator * add_for_right;
    m_denominator = union_denominator;
    m_numerator = right_numerator + left_numerator;
    reduce();

    return *this;
}

void Fraction::reduce() {
     int _gcd = std::gcd(m_numerator, m_denominator);
     if (_gcd != 1) {
         m_numerator /= _gcd;
         m_denominator /= _gcd;
     }
}

int Fraction::getDenominator() const{
    return m_denominator;
}

int Fraction::getNumerator() const{
    return m_numerator;
}
