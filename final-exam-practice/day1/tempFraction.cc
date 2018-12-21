#include <iostream>
using namespace std;

template<typename T>
class Fraction{
private:
    T num, den;

public: 
    Fraction(T num, T den) : num(num), den(den){}
    Fraction (T num) : num(num), den(0){}
    friend Fraction operator+ (Fraction a, Fraction b){
        return Fraction(a.num + b.num, a.den + b.den);
    }

    friend ostream& operator<<(ostream& s, Fraction a){
        s << a.num << "/" << a.den;
        return s;
    }
};


int main() {
	Fraction<int> f1(1,2);
	Fraction<int> f2(1,3);
	Fraction<int> f3 = f1 + f2;
	Fraction<int> f4 = f1 + 2; // f1 + Fraction(2) = f1 + 2/1
	Fraction<int> f5 = 2 + f1; // Fraction(2) + f1
    cout << f1 << '\n';
    cout << f2 << '\n';
    cout << f3 << '\n';
    cout << f4 << '\n';
    cout << f5 << '\n';

}