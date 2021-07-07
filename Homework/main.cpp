#include <iostream>

void format() {
    uint8_t ch = 31;
    static const int length = 50;
    for (int i = 0; i < length; ++i) {
        std::cout << ch;
    }
    std::cout << "<NEXT TASK>" << std::endl;
}

std::ostream& endll(std::ostream& os) {
    os << std::endl << std::endl;
    return os;
}

void testTask1();

int main() {
    testTask1();
    format();
    std::cout << "Hello GeekBrains!!!" << endll;

    return 0;
}

void testTask1() {
   int value{};
   while (true) {
       std::cout << "Enter your number: ";
       std::cin >> value;
       if (std::cin.fail()) {
           std::cin.clear();
           std::cin.ignore(32767, '\n');
           std::cout << "Incorrect number!!!" << std::endl;
           continue;
       }
       std::cin.ignore(32767, '\n');
       if (std::cin.gcount() > 1) {
           std::cout << "Incorrect number!!!" << std::endl;
           continue;
       }
       break;
   }
    std::cout.flush();
    std::cout << "You entered: " << value << std::endl;
}

