/*
  Author: Justin Trugman
  HWA 3n+1 Conjecture
  I pledge my honor that I abided by the Stevens Honor System
*/

#include <iostream>
using namespace std;

int main (){
  int n = 0;

  cout << "Enter a Number" << '\n';
  cin >> n;
  cout << n << '\n';

  cout << "Beginning Calculation" << '\n';
  while (n != 1) {
    if (n % 2 == 0) {
      n = n/2;
      cout << n << '\n';
    } else {
      n = n * 3 + 1;
      cout << n << '\n';
    }
  }

}
