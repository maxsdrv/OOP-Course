#include <iostream>

#include "Figure.h"
#include "Car.h"


void format() {
    uint8_t smile = 35;
    int length = 50;
    for (int i = 0; i < length; ++i) {
        std::cout << smile;
    }
    std::cout << "<NEXT TASK>" << std::endl;
}

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

void testTask2() {
    Car car("opel", "kaddet");
    PassengerCar passengerCar("audi", "S8 SLine");
    Bus bus("mersedes-benz", "tourismo");
    Minivan minivan("toyota", "sienna");
    std::cout << car << std::endl;
    std::cout << passengerCar << std::endl;
    std::cout << bus << std::endl;
    std::cout << minivan << std::endl;
}

int main() {

    testTask1();
    format();
    testTask2();
    format();

    return 0;
}
