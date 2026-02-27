#include <iostream>
#include "MyVector.h"

int main() {
    MyVector v;
    v.push_back(100);
    std::cout << "Первый элемент: " << v.get(0) << std::endl;
    return 0;
}