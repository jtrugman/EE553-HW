/*
Author: Justin Trugman
HW1f Mystery Sum

I pledge my honor that I abided by the Stevens Honor System

*/


#include <iostream>
#include <cmath>
using namespace std;

int main () {

  float s1 = 0;
  float s2 = 0;
  int n = 100000;


// forward
  for (float i = 1; i <= n; i++){
    s1 += 1.0/(pow(i,2));
    cout << "Forward: " << s1 << '\t';
  }

  cout << "Forward sqrt: " << sqrt(6 * s1) << '\n';

  cout << "---------------------------------" << '\n';

// backwards

  for (float i = n; i >= 1; i--){
    s2 += 1.0/(pow(i,2));
    cout << "Backwards: "<< s2 << '\t';
  }

  cout << "Backwards sqrt: " << sqrt(6 * s2) << '\n';


}
