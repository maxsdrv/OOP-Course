#include <iostream>

#include "Person.h"

void testTask1() {
    Student student1 {"Grigory", 20, "man", 70, 2007};
    student1.addStudent(student1);
    student1.printStudents(0);
    student1.setYear(2019);
    student1.printStudents(0);
    student1.setAge(30);
    std::cout << student1 << std::endl;
    student1.changeGender("women");
    student1.printStudents(0);
    std::cout << student1.getCount() << std::endl;
    Student student2 {"Mike", 22, "man", 80, 2010};
    student1.addStudent(student2);
    student1.printAllStudents();
    student1.increaseYear();
    student1.printStudents(0);
    student1.printStudents(1);
    student2.setGender("m");


}

int main() {
    testTask1();

    return 0;
}














