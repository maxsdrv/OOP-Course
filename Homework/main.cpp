#include <iostream>
#include <string>

#include "Person.h"

/* 1) Создать класс Person (человек) с полями: имя, возраст, пол и вес. Определить методы
 * переназначения имени, изменения возраста и веса. Создать производный класс Student (студент),
 * имеющий поле года обучения. Определить методы переназначения и увеличения этого значения.
 * Создать счетчик количества созданных студентов. В функции main() создать несколько студентов.
 * По запросу вывести определенного человека.*/

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
    student1.increaseYear();
    student1.printStudents(0);


}

/* Создать классы Apple (яблоко) и Banana (банан), которые наследуют класс Fruit (фрукт).
 * У Fruit есть две переменные-члена: name (имя) и color (цвет). Добавить новый класс GrannySmith,
 * который наследует класс Apple.
*/
namespace Task2 {
    class Fruit {
    public:
        /*Fruit(std::string name, std::string color) : m_color(std::move(name)), m_name(std::move(color)) {}*/
    protected:
        std::string m_name;
        std::string m_color;
    };

    class Apple : public Fruit {
    public:
        /*explicit Apple(std::string name, std::string color = "") : Fruit(std::move(name), std::move(color))
        , name_apple(name), color_apple(color){}*/
        explicit Apple(std::string color = "", std::string name = "apple") : m_name(std::move(name)),
        m_color(std::move(color)) {}

        std::string getName() {
            return m_name;
        }
        std::string getColor() {
            return m_color;
        }
    private:
        std::string m_name;
        std::string m_color;
    };

    class Banana : public Fruit {
    public:
        explicit Banana(std::string color = "yellow", std::string name = "banana") : m_name(std::move(name)),
        m_color(std::move(color)) {}

        std::string getName() {
            return Banana::m_name;
        }
        std::string getColor() {
            return Banana::m_color;
        }
    private:
        std::string m_name;
        std::string m_color;
    };

    class GrannySmith : public Apple {
    public:

    private:
    };

    void testTask2() {
        Apple a("red");
        Banana b;
//        GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";

    }
}

int main() {
//    testTask1();
    Task2::testTask2();

    return 0;
}














