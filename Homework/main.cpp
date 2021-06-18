#include <iostream>
#include <string>
#include <utility>
#include <cassert>

class Human {
public:
    std::string m_name;
    int m_age;

    explicit Human(std::string name = "", int age = 0) : m_name(name), m_age(age) {

    }
    [[nodiscard]] std::string getName() const {
        return m_name;
    }
    [[nodiscard]] int getAge() const {
        return m_age;
    }
private:
};

template <typename T>
void swap(T& x, T& y) {
    T tmp {x};
    x = y;
    y = tmp;
}


int main() {
    std::string x {"Anton"};
    std::string y {"Max"};

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    swap(x, y);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}
