#include <iostream>
#include "MyVector.h"
#include <iostream>

MyVector::MyVector() : capacity(5), size(0) {
    data = new int[capacity];
}

MyVector::~MyVector() {
    delete[] data;
}

void MyVector::resize() {
    capacity *= 2;
    int* newData = new int[capacity];
    for (int i = 0; i < size; ++i) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
}

void MyVector::push_back(int value) {
    if (size == capacity) {
        resize();
    }
    data[size++] = value;
}

int MyVector::get(int index) const {
    return (index >= 0 && index < size) ? data[index] : -1;
}

int MyVector::getSize() const {
    return size;
}