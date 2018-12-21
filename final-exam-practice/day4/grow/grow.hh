#pragma once
#include <iostream>

template<typename T>
class GrowArray {
private:
    int length;
    T* data;
    void grow(){
        T* old  = data;
        data = new T[length + 1];
        for (int i = 0; i < length; i++){
            data[i] = old[i];
        }
        length++;
    }
public:
    // constructor
    GrowArray() : length(0), data(nullptr) {}
    // addEnd
    void addEnd(const T& i){
        grow();
        data[length-1] = i;
    }
    // removeEnd
    T removeEnd(){
        length--;
        return data[length];
    }

    T&  operator [] (int i) {
        return data[i];
    }

    T  operator [] (int i) const {
        return data[i];
    }

    friend std::ostream& operator <<(std::ostream& s, const GrowArray<T>& list){
        for (int i = 0; i < list.length; i++)
            s << list[i] << '\t';
        return s;
    }


};