#pragma once

#include <iostream>

template <typename T>
class GrowArray {
private:
    int length;
    T* data;

    void grow(){
        T* old = data;
        data = new T[length+1];
        for (int i = 0; i < length; i++)
            data[i] = old[i];
        length++;
    }
public:
    GrowArray() : length(0), data(nullptr){}

    void addEnd(const T& in) {
        grow();
        data[length-1] = in;
    }

    T removeEnd(){
        length--;
        return data[length];
    }

    T operator [](int num) const {
        return data[num];
    }

    T& operator[] (int num) {
        return data[num];
    }

    friend std::ostream& operator<<(std::ostream& s, const GrowArray<T>& list){
        for (int i = 0; i < list.length; i++)
            s << list[i] << '\t';
        return s;
    }

};
