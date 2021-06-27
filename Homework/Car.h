#ifndef HOMEWORK_CAR_H
#define HOMEWORK_CAR_H

#include <iostream>
#include <string>

class Car {
public:
    Car(std::string company, std::string model) : m_company(std::move(company)), m_model(std::move(model)) {
        std::cout << "Called constructor for a class Car" << std::endl;
    }
    ~Car() {
        std::cout << "Called destructor for a class Car" << std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os, const Car& car) {
        os << car.m_company << " " << car.m_model << std::endl;

        return os;
    }
private:
    std::string m_company;
    std::string m_model;
};


class PassengerCar: virtual public Car {
public:
    PassengerCar(std::string company, std::string model) : Car(company, model) {
        std::cout << "Called constructor for a class PassengerCar" << std::endl;
    }
    ~PassengerCar() {
        std::cout << "Called destructor for a class PassengerCar" << std::endl;
    }
private:
};

class Bus: virtual public Car {
public:
    Bus(std::string company, std::string model) : Car(company, model) {
        std::cout << "Called constructor for a class Bus" << std::endl;
    }
    ~Bus() {
        std::cout << "Called destructor for a class Bus" << std::endl;
    }
private:
};

class Minivan: public PassengerCar, public Bus {
public:
    Minivan(std::string company, std::string model) : Bus(company, model),
    PassengerCar(company,model), Car(company, model) {
        std::cout << "Called constructor for a class Minivan" << std::endl;
    }
    ~Minivan() {
        std::cout << "Called destructor for a class Minivan" << std::endl;
    }

private:
};


#endif //HOMEWORK_CAR_H
