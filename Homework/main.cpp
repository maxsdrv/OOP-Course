#include <iostream>
#include <memory>
#include <algorithm>

#include "Date.h"

void format() {
    uint8_t character = 31;
    static const int length = 50;
    for (int i = 0; i < length; ++i) {
        std::cout << character;
    }
    std::cout << "<NEXT TASK>" << std::endl;
}

void test_task1();
void test_task2();

int main() {
    test_task1();
    format();
    test_task2();
    format();

    return 0;
}


void test_task1() {
    Date date;
    std::cout << date;
    auto day = date.Get();
    std::cout << std::get<0>(day) << std::endl;

    auto today = std::make_unique<Date>(11, 7, 2021);
    std::cout << *today;
    std::cout << "Day: " << today->getDay() << " Month: " << today->getMonth() << " Year: "
                                                                       << today->getYear();
    std::cout << std::endl;
    auto ptr_date = std::make_unique<Date>();
    ptr_date = std::move(today);
    if (today == nullptr) {
        std::cout << "smart pointer <today> is equal NULL" << std::endl;
    }
    else std::cout << *today;
    if (ptr_date == nullptr) {
        std::cout << "smart pointer <ptr_date> is equal NULL" << std::endl;
    }
    else std::cout << *ptr_date;
}

std::unique_ptr<Date> smartCompare(std::unique_ptr<Date>&& date1, std::unique_ptr<Date>&& date2) {
    if (date1->getYear() < date2->getYear()) {
        return std::move(date2);
    }
    else if (date1->getMonth() < date2->getMonth()) {
        return std::move(date2);
    }
    else if (date1->getDay() < date2->getDay()) {
        return std::move(date2);
    }
    else {
        return std::move(date1);
    }
}

void mySwap(std::unique_ptr<Date>&& ptr_date1, std::unique_ptr<Date>&& ptr_date2) {
    ptr_date1.swap(ptr_date2);
    std::cout << "ptr_date1= " << *ptr_date1 << "ptr_date2= " << *ptr_date2;
}

void test_task2() {
    auto date1 = std::make_unique<Date>(01, 05, 2020);
    auto date2 = std::make_unique<Date>(12, 07, 2021);
    auto ptr_result = smartCompare(std::move(date1), std::move(date2));
    std::cout << *ptr_result;
    mySwap(std::make_unique<Date>(10, 20, 1985), std::make_unique<Date>(20, 06, 1990));

}































