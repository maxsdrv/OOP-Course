#include "Person.h"


void Person::setAge(int age) {
    assert(age > 0);
    this->m_age = age;
}

void Person::setGender(const std::string& gender) {
    if (gender != "man" || gender != "women") {
        std::cout << "Incorrect gender name!!!" << std::endl;
        return;
    }
    this->m_gender = gender;
}

void Person::setWeight(int weight) {
    assert(weight > 0);
    this->m_weight = weight;
}

void Person::setAll(int age, const std::string& gender, int weight) {
    setAge(age);
    setGender(gender);
    setWeight(weight);
}


template<typename T>
T Person::getAge() const {
    return m_age;
}

template<typename T>
T Person::getGender() const {
    return m_gender;
}

template<typename T>
T Person::getWeight() const {
    return m_weight;
}

template<typename T>
T Person::getName() const {
    return m_name;
}


void Student::printStudents(int index) const {
    std::cout << m_arrayStudents.at(index) << std::endl;
}

void Student::setYear(int year) {
    assert(year > 0);
    this->m_year_study = year;
    for (auto& i : m_arrayStudents) {
        i.m_year_study = year;
    }
}

void Student::increaseYear() {
    for (auto& i : m_arrayStudents) {
        if (i.m_year_study == this->m_year_study) {
            i.m_year_study = ++this->m_year_study;
        }
    }
}

int Student::getCount() const {
    return count;
}


std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << "Name: " << student.m_name << ", Age: " << student.m_age <<
       ", Gender: " << student.m_gender << ", Weight: " << student.m_weight <<
       ", Year of study: " << student.m_year_study;

    return os;
}

void Student::addStudent(const Student &student) {
    m_arrayStudents.push_back(student);
}

void Student::changeName(std::string &name) {
    for (auto& i : m_arrayStudents) {
        i.m_name = name;
    }
}

void Student::changeGender(const std::string &gender) {
    for (auto& i : m_arrayStudents) {
        i.m_gender = gender;
    }
}

void Student::changeWeight(int weight) {
    for (auto& i : m_arrayStudents) {
        i.m_weight = weight;
    }
}

void Student::printAllStudents() const {
    for (const auto& i : m_arrayStudents) {
        std::cout << i << std::endl;
    }
}




