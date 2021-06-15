#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

class Power {

public:
    Power(double v1 = 5.0, double v2 = 2.0) {
        m_first = v1;
        m_second = v2;
    }

    void set(const double v1, const double v2) {
        assert(v1 && v2 > 0);
        m_first = v1;
        m_second = v2;
    }
    void calculate() {
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
    }

    /*TASK 2) Написать класс с именем RGBA, который содержит 4 переменные-члена
     типа std::uint8_t: m_red, m_green, m_blue и m_alpha (#include cstdint для
     доступа к этому типу). Задать 0 в качестве значения по умолчанию для m_red,
     m_green, m_blue и 255 для m_alpha. Создать конструктор со списком инициализации
     членов, который позволит пользователю передавать значения для m_red, m_blue,
     m_green и m_alpha. Написать функцию print(), которая будет выводить значения
     переменных-членов.*/
     {
         

     }


}

int main() {

    solution(); 


	return 0;
}