#include <iostream>
#include <string>


void format() {
    uint8_t ch = 31;
    static const int length = 50;
    for (size_t i = 0; i < length; ++i) {
        std::cout << ch;
    }
    std::cout << "<NEXT TASK>" << std::endl;
}

void testTask1();
void testTask2();
void testTask3();

template <typename T>
class Pair1 {
public:
    Pair1(const T& first, const T& second) : m_first(first), m_second(second) {}
    [[nodiscard]]T first() const{return m_first;}
    [[nodiscard]]T second() const{return m_second;}
private:
    T m_first{};
    T m_second{};
};


template <typename T, typename U>
class Pair {
public:
    Pair(const T& first, const U& second) : m_first(first), m_second(second) {}
    [[nodiscard]]T first() const{return m_first;}
    [[nodiscard]]U second() const{return m_second;}
private:
    T m_first;
    U m_second;
};


template <typename S>
class StringValuePair : public Pair<std::string, S> {
public:
    StringValuePair(const std::string& str, const S& value) : Pair<std::string, S>(str, value) {}
private:
};

int main() {
    testTask1();
    format();
    testTask2();
    format();
    testTask3();

    return 0;
}


void testTask1() {
    Pair1<int> p1(6, 9);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}

void testTask2() {
    Pair<int, double> p1(6, 7.8);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair<double, int> p2(3.4, 5);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}

void testTask3() {
    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
}




