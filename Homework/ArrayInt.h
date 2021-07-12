
#ifndef HOMEWORK_ARRAYINT_H
#define HOMEWORK_ARRAYINT_H

#include <iostream>
#include <cassert>
#include <algorithm>

class ArrayInt {
private:
    int m_length{};
    int *m_data{};
public:
    ArrayInt() : m_length(0), m_data(nullptr) {}
    explicit ArrayInt(int length) : m_length(length) {
        assert(length >= 0);
        if (length > 0){
            m_data = new int[length];
        }
        else
            m_data = nullptr;
    }
    ~ArrayInt() {
        delete[] m_data;
    }

    int& operator[](int index) {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }
    friend std::ostream& operator<<(std::ostream& os, const ArrayInt& arrayInt);

    void erase() {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    [[nodiscard]]int getLength() const{return m_length;}

    void resize(int newLength);
    void insertBefore(int value, int index);
    void push_back(const int& value);
    void pop_back();
    void pop_front();

    void sort();
};

void ArrayInt::resize(int newLength) {
    if (newLength == m_length) {
        return;
    }
    if (newLength <= 0) {
        erase();
        return;
    }
    int *data = new int[newLength];
    if (m_length > 0) {
        int elementsToCopy = (newLength > m_length) ? m_length : newLength;
        for (int index = 0; index < elementsToCopy; ++index) {
            data[index] = m_data[index];
        }
    }
    delete[] m_data;
    m_data = data;
    m_length = newLength;
}

std::ostream &operator<<(std::ostream &os, const ArrayInt &arrayInt) {
    for (int i = 0; i < arrayInt.getLength(); ++i) {
        std::cout << arrayInt.m_data[i] << " ";
    }
    std::cout << std::endl;

    return os;
}

void ArrayInt::insertBefore(int value, int index) {
    assert(index >= 0 && index <= m_length);
    int *data = new int[m_length + 1];
    for (int before = 0; before < index; ++before) {
        data[before] = m_data[before];
    }
    data[index] = value;
    for (int after = index; after < m_length; ++after) {
        data[after + 1] = m_data[after];
    }
    delete[] m_data;
    m_data = data;
    ++m_length;
}

void ArrayInt::push_back(const int& value) {
    size_t capacity = m_length + 1;

    int *data = new int[capacity];
    for (int i = 0; i < m_length; ++i) {
        data[i] = m_data[i];
    }
    delete[] m_data;
    m_data = data;
    m_data[m_length++] = value;
}

void ArrayInt::pop_back() {
    if (m_length > 0) {
        size_t capacity = m_length - 1;
        int *tmp = new int[capacity];
        for (int i = 0; i < capacity; ++i) {
            tmp[i] = m_data[i];
        }
        delete[] m_data;
        m_data = tmp;
        --m_length;
    }
}

void ArrayInt::pop_front() {
    assert(m_length > 0);

    size_t capacity = m_length - 1;
    int *tmp = new int[capacity];
    for (size_t i = 1; i < m_length; ++i) {
        tmp[i - 1] = m_data[i];
    }

    delete[] m_data;
    m_data = tmp;
    m_length--;
}

void ArrayInt::sort() {
    std::sort(m_data, m_data + m_length);
}


#endif //HOMEWORK_ARRAYINT_H











