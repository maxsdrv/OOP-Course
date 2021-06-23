#include <iostream>

class Parent {
protected:
    int m_age;
public:
    explicit Parent(int age) : m_age(age) {}
    virtual int getAge() {
        return m_age;
    }
};

class Child : public Parent {
public:
    explicit Child(int age) : Parent(age) {}
    int getAge() override {
        return m_age / 2;
    }
};

void writeAge(Parent &someChild) {
    std::cout << "rParent age " << someChild.getAge() << "\n";
}
int main() {

    Child child(40);
    Parent &rParent = child;
    writeAge(rParent);

    return 0;
}
