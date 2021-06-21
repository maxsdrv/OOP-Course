#include <iostream>
#include <string>
#include <utility>
#include <cassert>
#include <vector>
#include <map>

class Human {
public:
    std::string m_name;
    int m_age;

    explicit Human(std::string name = "", int age = 0) : m_name(std::move(name)), m_age(age) {

    }
    [[nodiscard]] std::string getName() const {
        return m_name;
    }
    [[nodiscard]] int getAge() const {
        return m_age;
    }
private:
};

class Employee : public Human {
public:
    std::string m_employer;
    double m_wage;

    explicit Employee(std::string name = "", int age = 0, std::string employer = "", double wage = 0.0) : Human(std::move(name), age), m_employer(std::move(employer)), m_wage(wage) {}
};



namespace Swap {
    template<typename T>
    void swap(T &x, T &y) {
        T tmp{std::move(x)};
        x = std::move(y);
        y = std::move(tmp);
    }
}

void myAssertInt(int value, const std::string& name) {
    std::cout << name << " mustn't be 0 or negative!!!" << std::endl;
    assert(value > 0);
}
class Person {
public:
    Person() = default;
    explicit Person(int age = 18, std::string gender = "", int weight = 70) : m_age(age), m_gender(std::move(gender)), m_weight(weight) {}
    ~Person() = default;
    void setAge(int age);
    void setGender(std::string& gender);
    void setWeight(int weight);
    void setAll(int age, std::string& gender, int weight);

    template <typename T>
    T getAge();

    template <typename T>
    T getGender();

    template <typename T>
    T getWeight();

private:
    int m_age{};
    std::string m_gender;
    int m_weight{};
    std::vector<Person> m_arrayStudents;
};


void Person::setAge(int age) {
    myAssertInt(age, "age");
    this->m_age = age;
}

void Person::setGender(std::string& gender) {
    if (gender != "man" || gender != "women") {
        std::cout << "Incorrect gender name!!!" << std::endl;
    }
    this->m_gender = gender;
}

void Person::setWeight(int weight) {
    myAssertInt(weight, "weight");
    this->m_weight = weight;
}

void Person::setAll(int age, std::string& gender, int weight) {
    setAge(age);
    setGender(gender);
    setWeight(weight);
}

template<typename T>
T Person::getAge() {
    return m_age;
}

template<typename T>
T Person::getGender() {
    return m_gender;
}

template<typename T>
T Person::getWeight() {
    return m_weight;
}


class Student : public Person {
public:
    explicit Student(int age = 18, const std::string& gender = "", int weight = 70, int year_study = 2000)
    : Person(age, gender, weight), m_year_study(year_study) {
        ++count;
    }
    ~Student() = default;

    void setYear(int year);
    void increaseYear();

    template <typename T>
    T getCount();

    void printStudents();
    friend std::ostream& operator<<(std::ostream& os, const Student& student);

private:
    int m_year_study{};
    int count{};
};


void Student::setYear(int year) {
    myAssertInt(year, "year_study");
    this->m_year_study = year;
}

void Student::increaseYear() {
    ++m_year_study;
    std::cout << "Increase successful" << std::endl;
}

template<typename T>
T Student::getCount() {
    return count;
}

void Student::printStudents() {
    std::cout << "Gender: " << Student::getGender<std::string>() << " Age: " << Student::getAge<int>() <<
            " Weight: " << Student::getWeight<int>() << " Year of study: " << m_year_study << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Student &student) {
    return os;
}

int main() {
    std::vector<Student> arrayStudent;
    Student student {20, "maxim", 90, 2017};
    arrayStudent.push_back(student);
    for (const auto& i : arrayStudent) {
        std::cout << i << std::endl;
    }

    return 0;
}














