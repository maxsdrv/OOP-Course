#ifndef HOMEWORK_PERSON_H
#define HOMEWORK_PERSON_H

#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <algorithm>

class Person {
public:
    explicit Person(std::string name = "", int age = 18, std::string gender = "", int weight = 70) :
            m_name(std::move(name)), m_age(age), m_gender(std::move(gender)), m_weight(weight) {}

    ~Person() = default;
    //Setters
    void setAge(int age);
    void setGender(const std::string& gender);
    void setWeight(int weight);
    void setAll(int age, const std::string& gender, int weight);


    //Getters
    template <typename T>
    T getAge() const;
    template <typename T>
    T getGender() const;
    template <typename T>
    T getWeight() const;
    template <typename T>
    T getName() const;

private:
protected:
    std::string m_name;
    int m_age{};
    std::string m_gender;
    int m_weight{};
};

class Student : public Person {
public:
    explicit Student(std::string name = "", int age = 18, const std::string& gender = "", int weight = 70, int year_study = 2000)
            : Person(std::move(name), age, gender, weight), m_year_study(year_study) {
        ++count;
    }
    ~Student() = default;

    void changeName(std::string& name);
    void changeGender(const std::string& gender);
    void changeWeight(int weight);
    void setYear(int year);
    void increaseYear();
    void addStudent(const Student& student);

    //Getters
    [[nodiscard]]int getCount() const;
    friend std::ostream& operator<<(std::ostream& os, const Student& student);

    void printStudents(int index) const;
    void printAllStudents() const;

private:
    int m_year_study{};
    int count{};
    std::vector<Student> m_arrayStudents;
};

#endif //HOMEWORK_PERSON_H
