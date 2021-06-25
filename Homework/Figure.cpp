//
// Created by maxim on 25.06.2021.
//

#include "Figure.h"


void Parallelogram::area() {
    m_area = m_base * m_height;
}


void Circle::area() {
    m_area = m_pi * (m_radius * m_radius);
}

std::ostream &operator<<(std::ostream &os, const Figure &figure) {
    os << "Area = " << figure.m_area << std::endl;

    return os;
}

std::string Figure::getName() {
    return m_name;
}

void Rectangle::area() {
    m_area = m_length * m_width;
}

void Square::area() {
    m_area = m_a * m_a;
}

void Rhombus::area() {
    m_area = (p_diagonal * q_diagonal) / 2;
}
