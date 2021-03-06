/*
Author: Justin Trugman
HW3A Complex

I pledge my honor that I abided by the Stevens Honor System
*/


/*
	Make the following main work by writing a class Complex.
	Replace this comment with your author information and cite as necessary.

	Notice that since objects are const, you will have to promise not to change them
 */
#include <iostream>

using namespace std;

class Complex {
private:
  double real, imag;
public:
  Complex(double a, double b) : real(a), imag(b) {}

  Complex operator +(Complex right) const {
    return Complex(right.real + real, right.imag + imag);
	}

  void print() const{
    cout << real << ' ' << imag << '\n';
  }

  Complex add(Complex right) const{
    return Complex(right.real + real, right.imag + imag);
  }

  Complex operator -() const {
    return Complex(-real, -imag);
	}
};


int main() {
	const Complex a(1.0, 2.0); // create a complex number with real=1.0 imag=2.0
	const Complex b(0.5, 0.0); // real = 0.5, imag = 0.0
	const Complex c = a + b;   // overload operator + using the first syntax we discussed
	c.print(); // should print the following to cout: (1.5,2.0)
	// (member syntax).  Should look the same as method add where the name add
	// is replaced by operator +
	const Complex d = a.add(b); // this should be the same as the above except the name
	d.print();
	Complex e = -d;
	e.print();
}
