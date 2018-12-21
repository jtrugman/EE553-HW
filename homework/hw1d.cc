/*
  Author: Justin Trugman
  HW1D Sum Reciprocals
  I pledge my honor that I abided by the Stevens Honor System

*/

#include <iostream>
using namespace std;

int main() {
  float floatSum1 = 0;
  float floatSum2 = 0;
  float floatTotalSum = 0;

  double doubleSum1 = 0;
  double doubleSum2 = 0;
  double doubleTotalSum = 0;

  cout << "Floats" << '\n';

  // Calculate Sum 1
  for(float i = 1; i <= 100; i++) {
		floatSum1 += 1/i;
	}

  cout << "Sum 1: " << floatSum1 << '\n';

  // Calculate Sum 2
  for(float i=100; i>=1; i--) {
    floatSum2 += 1/i;
  }

  cout << "Sum 2: " << floatSum2 << '\n';

  floatTotalSum = floatSum1 - floatSum2;

  cout << "Sum1 - Sum2 = " << floatTotalSum << '\n';

  cout << "--------------------------------------------" << '\n';

  cout << "Doubles" << '\n';

  // Calculate Sum 1
  for(double i = 1; i <= 100; i++) {
		doubleSum1 += 1/i;
	}

  cout << "Sum 1: " << doubleSum1 << '\n';

  // Calculate Sum 2
  for(double i=100; i>=1; i--) {
    doubleSum2 += 1/i;
  }

  cout << "Sum 2: " << doubleSum2 << '\n';

  doubleTotalSum = doubleSum1 - doubleSum2;

  cout << "Sum1 - Sum2 = " << doubleTotalSum << '\n';

}
