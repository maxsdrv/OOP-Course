#include <iostream>
#include <cmath>
#include <cassert>
#include <array>

#include "Stack.h"

using namespace std;

using color = uint8_t;
using ui = unsigned int;

enum class Colors {
    Clear = 1u, //clear smile color
    White = 2u //white smile color
};

void smileSurprise(const Colors c) {
    auto smile = static_cast<color>(c);
    int length = 50;
    for (int i = 0; i < length; ++i) {
        cout << smile;
    }
}

class  RGB {
public:
    explicit RGB(color red = 0, color green = 0, color blue = 0, color alpha = 255) : m_red(red), m_green(green),
                                                        m_blue(blue), m_alpha(alpha) {}
    void print() const {
        cout << "Red " << (int)m_red << " Green " << (int)m_green << " Blue " << (int)m_blue <<
        " Alpha " << (int)m_alpha << endl;
    }
    template <typename T>
    void setColor(const T value, const std::string &c) {
        if (c == "red") {
            m_red = value;
        }
        else if (c == "green") {
            m_green = value;
        }
        else if (c == "blue") {
            m_blue = value;
        }
        else if (c == "alpha") {
            m_alpha = value;
        }
        else
            std::cout << "Unknown color" << std::endl;

    }
    [[nodiscard]]int getColor(const std::string &c) const {
        if (c == "red") {
            return m_red;
        }
        else if (c == "green") {
            return m_green;
        }
        else if (c == "blue") {
            return m_blue;
        }
        else if (c == "alpha") {
            return m_alpha;
        }
        else {
            std::cout << "Unknown color" << std::endl;
            return -1;
        }
    }

private:
    color m_red;
    color m_green;
    color m_blue;
    color m_alpha;
};

class Power {

public:
    explicit Power(double v1 = 5.0, double v2 = 2.0) {
        m_first = v1;
        m_second = v2;
    }

    void set(const double v1, const double v2) {
        assert(v1 && v2 > 0);
        m_first = v1;
        m_second = v2;
    }
    void calculate() const {
        cout << "Result = " << pow(m_first, m_second) << endl;
    }

private:
    double m_first;
    double m_second;

};



void solution() {
   /*TASK 1) Создать класс Power, который содержит два вещественных числа.
    Этот класс должен иметь две переменные-члена для хранения этих вещественных
    чисел. Еще создать два метода: один с именем set, который позволит присваивать
    значения переменным, второй — calculate, который будет выводить результат
    возведения первого числа в степень второго числа. Задать значения этих двух
    чисел по умолчанию.*/
    {
        Power p;
        p.calculate();
        p.set(2.3, 10.5);
        p.calculate();
        // p.set(2.0, 0.0);
        smileSurprise(Colors::White);
        cout << endl;
    }

    /*TASK 2) Написать класс с именем RGBA, который содержит 4 переменные-члена
     типа std::uint8_t: m_red, m_green, m_blue и m_alpha (#include cstdint для
     доступа к этому типу). Задать 0 в качестве значения по умолчанию для m_red,
     m_green, m_blue и 255 для m_alpha. Создать конструктор со списком инициализации
     членов, который позволит пользователю передавать значения для m_red, m_blue,
     m_green и m_alpha. Написать функцию print(), которая будет выводить значения
     переменных-членов.*/
     {
        RGB rgb(1);
        rgb.print();
        RGB rgb1(0, 1, 1, 250);
        rgb1.print();
        cout << endl;
        rgb1.setColor(1, "red");
        rgb1.print();
        std::cout << rgb1.getColor("blue") << std::endl;
        smileSurprise(Colors::White);
     }

    /*TASK 3)  Написать класс, который реализует функциональность стека. Класс Stack
     * должен иметь:
    private-массив целых чисел длиной 10;
    private целочисленное значение для отслеживания длины стека;
    public-метод с именем reset(), который будет сбрасывать длину и все значения
     элементов на 0;
    public-метод с именем push(), который будет добавлять значение в стек.
    push() должен возвращать значение false, если массив уже заполнен, и true в
    противном случае;
    public-метод с именем pop() для вытягивания и возврата значения из стека.
    Если в стеке нет значений, то должно выводиться предупреждение;
    public-метод с именем print(), который будет выводить все значения стека.*/
    {
        Stack stack;
        stack.reset();
        stack.print();

        stack.push(3);
        stack.push(7);
        stack.push(5);
        stack.print();

        stack.pop();
        stack.print();

        stack.pop();
        stack.pop();
        stack.print();
        smileSurprise(Colors::White);
        cout << endl;
    }


}

int main() {

    solution(); 


	return 0;
}