/*
Author: Justin Trugman
Hw3B - Class Person

I pledge my honor that I abided by the Stevens Honor System
*/

#include <ostream>
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
  string first, last;
  static int count;
public:
  Person(const string& fname, const string& lname) : first(fname), last(lname){
    count++;
  }

  ~Person(){
    count--;
  }

  static int getCount() {
    return count;
  }

  friend ostream& operator <<(ostream& s, const Person& p){
    return s << "firstname=" << p.first << ' ' << "lastname=" << p.last << '\n';
  }
};

int Person::count = 0;


int main() {
	Person a("Dov", "Kruger");
	Person b("Min", "Song");
	cout << a << '\n';
	cout << b << '\n';
	cout << Person::getCount() << '\n';
}
