#include <iostream>
#include <string>
#include <utility>
#include <cassert>

class Human {
public:
    std::string m_name;
    int m_age;

    explicit Human(std::string name = "", int age = 0) : m_name(std::move(name)), m_age(age) {

    }
    [[nodiscard]] std::string getName() const {
        return m_name;
    }
    [[nodiscard]] int getAge() const {
        return m_age;
    }
private:
};

class Employee : public Human {
public:
    std::string m_employer;
    double m_wage;

    explicit Employee(std::string name = "", int age = 0, std::string employer = "", double wage = 0.0) : Human(std::move(name), age), m_employer(std::move(employer)), m_wage(wage) {}
};



namespace Swap {
    template<typename T>
    void swap(T &x, T &y) {
        T tmp{std::move(x)};
        x = std::move(y);
        y = std::move(tmp);
    }
}

class Person {
public:

private:
    int m_age;
    int m_gender;
    int m_weight;
};

class Student : public Person {
public:

private:
    int m_year;
    int count;
};


int main() {



    return 0;
}














