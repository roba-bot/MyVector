#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
private:
    int* data;
    int capacity;
    int size;

    void resize(); // Внутренняя логика

public:
    MyVector();  // Конструктор - init
    ~MyVector(); // Деструктор - deinit

    void push_back(int value);
    int get(int index) const;
    int getSize() const;
};

#endif
