#ifndef HOMEWORK_FIGURE_H
#define HOMEWORK_FIGURE_H

#include <iostream>
#include <cmath>
#include <string>


class Figure {
public:
    explicit Figure(std::string name) : m_name(std::move(name)) {}
    virtual void area() = 0;
    friend std::ostream& operator<<(std::ostream& os, const Figure& figure);
    std::string getName();
protected:
    double m_area{};
    std::string m_name;
};

class Parallelogram: public Figure {
public:
    explicit Parallelogram(std::string name) : Figure(std::move(name)) {}
    Parallelogram(int base, int height, std::string name = "Parallelogram") : Figure(std::move(name)),
    m_base(base), m_height(height), m_name(std::move(name)) {}
    ~Parallelogram() = default;
    void area() override;
private:
    double m_base{};
    double m_height{};
    std::string m_name;
};



class Circle: public Figure {
public:
    explicit Circle(int radius, double pi = 3.14, std::string name = "Circle") : Figure(std::move(name)),
    m_radius(radius), m_pi(pi), m_name(std::move(name)) {}
    ~Circle() = default;
    void area() override;
private:
    int m_radius{};
    double m_pi;
    std::string m_name;
};


class Rectangle: public Parallelogram {
public:
    Rectangle(int length, int width, std::string name = "Rectangle") : Parallelogram(std::move(name)),
    m_length(length), m_width(width), m_name(std::move(name)) {}
    ~Rectangle() = default;
    void area() override;
private:
    std::string m_name;
    int m_length{};
    int m_width{};
};

class Square: public Parallelogram {
public:
    explicit Square(int a, std::string name = "Square") : Parallelogram(std::move(name)),
    m_a(a), m_name(std::move(name)) {}
    ~Square() = default;
    void area() override;
private:
    int m_a;
    std::string m_name;
};

class Rhombus: public Parallelogram {
public:
    Rhombus(int p, int q, std::string name = "Rhombus") : Parallelogram(std::move(name)),
    p_diagonal(p), q_diagonal(q), m_name(std::move(name)) {}
    ~Rhombus() = default;
    void area() override;
private:
    int p_diagonal{};
    int q_diagonal{};
    std::string m_name;
};






#endif //HOMEWORK_FIGURE_H
