// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Array {
public:
    Array();
    Array(int size);
    ~Array();
    int getSize();
    void setSize(int size);
    int getCount();
    void setCount(int count);
    bool isFull();
    void setFull(bool full);
    int getData(int index);
    void setData(int index, int value);
    void Expand();
    void Clear();
private:
    int size;
    int count;
    bool full;
    int* data;
};

class OrderedArray : public Array {
public:
    OrderedArray();
    OrderedArray(int size, bool allowDuplicates);
    ~OrderedArray();
    void setAllowDuplicates(bool allowDuplicates);
    bool getAllowDuplicates();
    int find(int value);
    void insert(int value);
    void remove(int value);
private:
    bool allowDuplicates;
};

class UnorderedArray : public Array {
public:
    UnorderedArray();
    UnorderedArray(int size);
    ~UnorderedArray();
    int find(int value);
    void insert(int value);
    void remove(int value);
};


