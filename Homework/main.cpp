#include <iostream>

#include "Figure.h"

void testTask1() {
    Parallelogram parallelogram(7, 5);
    parallelogram.area();
    std::cout << parallelogram.getName() << " " << parallelogram;
    Circle circle(2);
    circle.area();
    std::cout << circle.getName() << " " << circle;
    Rectangle rectangle(10, 20);
    rectangle.area();
    std::cout << rectangle.getName() << " " << rectangle;
    Square square(10);
    square.area();
    std:: cout << square.getName() << " " << square;
    Rhombus rhombus(5, 6);
    rhombus.area();
    std::cout << rhombus.getName() << " " << rhombus;
}


int main() {

    testTask1();

    return 0;
}
