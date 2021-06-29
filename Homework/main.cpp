#include <iostream>

#include "Figure.h"
#include "Car.h"
#include "Fraction.h"
#include "Card.h"


void format() {
    uint8_t smile = 35;
    int length = 50;
    for (int i = 0; i < length; ++i) {
        std::cout << smile;
    }
    std::cout << "<NEXT TASK>" << std::endl;
}

void testTask1();
void testTask2();
void testTask3();
void testTask4();

int main() {

    testTask1();
    format();
    testTask2();
    format();
    testTask3();
    format();
    testTask4();



    return 0;
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

void testTask3() {
    try {
        Fraction a1(29, 30);
        Fraction a2(44, 45);
        std:: cout << a1 + a2 << std::endl;
        Fraction a3(3, 10);
        Fraction a4(1, 6);
        std::cout << a3 - a4 << std::endl;
        Fraction a5(2, 5);
        Fraction a6(3, 4);
        std::cout << a5 * a6 << std::endl;
        Fraction a7(4, 7);
        Fraction a8(2, 5);
        std::cout << a7 * a8 << std::endl;
        const Fraction a9(8, 9);
        std::cout << -a9.getNumerator() << " " << -a9.getDenominator() << std::endl;
        Fraction a10(10, 15);
        Fraction a11(11, 16);
        if (a10 == a11) {
            std::cout << "Fractions is equal" << std::endl;
        }
        if (a10 != a11) {
            std::cout << "Fraction isn't equal" << std::endl;
        }
        Fraction fraction1(13, 15);
        Fraction fraction2(20, 27);
        if (fraction1 > fraction2) {
            std::cout << "fraction1 > fraction2" << std::endl;
        }
        if (fraction1 >= fraction2) {
            std::cout << "fraction1 >= fraction2" << std::endl;
        }
        if (fraction1 < fraction2) {
            std::cout << "fraction1 < fraction2" << std::endl;
        }
        if (fraction1 <= fraction2) {
            std::cout << "fraction1 <= fraction2" << std::endl;
        }

    }
    catch(std::exception& ex) {
        std::cout << "Something went wrong: " << ex.what() << std::endl;
    }
}

void testTask4() {
    Card card{};
    std::cout << card;
}




