#include "Stack.h"

void Stack::reset() {
    if (arr.empty()) {
        std::cout << "Stack is empty" << std::endl;
    }
    else {
        while (top > 0) {
            pop();
        }
    }
}

bool Stack::push(const int &item) {
    if (top < MAX) {
        arr[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop() {
    if (top > 0) {
        arr[--top] = 0;
        return true;
    }
    else {
        std::cout << "Error stack is empty!" << std::endl;
        return false;
    }

}

void Stack::print() {
    std::stringstream ss;
    bool first = true;
    std::cout << "(";
    for (const auto& i : arr) {
        if (i == 0) {
            std::cout << ss.str() << ")" << std::endl;
            return;
        }
        if (!first) {
            ss << ", ";
        }
        first = false;
        ss << i;
    }
    std::cout << ss.str() << ")" << std::endl;
}

Stack::Stack() {
    top = 0;
}

