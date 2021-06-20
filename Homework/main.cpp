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


int main() {
    Employee employee("maxim", 10, "egor", 3.5);
    std::cout << "Name for human class: " << employee.getName() << " age for human class: " << employee.getAge()
    << " Name for employee class: " << employee.m_employer << " age for employee class: " << employee.m_wage << std::endl;


    return 0;
}














