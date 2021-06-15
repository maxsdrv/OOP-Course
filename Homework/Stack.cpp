#include "Stack.h"

void Stack::reset() {

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

}

void Stack::print() {

}

