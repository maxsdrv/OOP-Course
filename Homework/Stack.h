#ifndef HOMEWORK_STACK_H
#define HOMEWORK_STACK_H

#include <iostream>
#include <array>


class Stack {
public:
   void reset();
   bool push(const int &item);
   bool pop();
   void print();
private:
    static const size_t MAX = 10;
    std::array<int, MAX> arr;
    int top;
};


#endif //HOMEWORK_STACK_H
