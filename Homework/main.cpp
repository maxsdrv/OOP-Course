#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <iterator>
#include <set>

#include "ArrayInt.h"

void format() {
    uint8_t character = 35;
    static const int length = 50;
    for (size_t i = 0; i < length; ++i) {
        std::cout << character;
    }
    std::cout << "<NEXT TASK>" << std::endl;
}

void testTask1();
void testTask2();
void testTask3();

int main() {
    /*testTask1();
    format();
    testTask2();
    format();*/
    testTask3();

    return 0;
}


void testTask1() {
    ArrayInt arrayInt;
    arrayInt.push_back(10);
    arrayInt.push_back(20);
    arrayInt.insertBefore(15, 1);
    arrayInt.pop_back();
    arrayInt.pop_front();
    arrayInt.push_back(50);
    arrayInt.push_back(30);
    arrayInt.push_back(40);

    std::cout << arrayInt << std::endl;

    arrayInt.sort();
    std::cout << arrayInt << std::endl;
}

void testTask2() {
    std::vector<int> other_values(100);

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    for (auto& i : other_values) {
        i = dist(rd);
    }
    std::cout << "Before: " << std::endl;
    for (const auto& i : other_values) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "other_values contains: ";
    std::set s(other_values.begin(), other_values.end());
    std::copy(s.begin(), s.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << "\n";
    std::cout << "Count values = " << s.size() << std::endl;
}

void testTask3() {

}







