#include <iostream>
#include <string>
#include <vector>

#include "ArrayInt.h"


void testTask1();

int main() {
    testTask1();


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

    arrayInt.sort(0, arrayInt.getLength());
}











