/*
Author: Justin Trugman
HW2A Windchill
I pledge my honor that I abided by the Stevens Honor System
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int v = 0; // Wind Speed
  int t = 0; // Temperature
  int windChill; // Temperature with Wind Chill

  cout << '\t';

  for (int i = 40; i >= -45; i-=5 ){
    cout << i << '\t';
  }
  cout << '\n' ;

  for (v = 5; v <= 60; v+=5){
    cout << v << '\t';

    for (t = 40; t >= -45; t-=5){
      windChill = 35.74 + 0.6215*t - 35.75*pow(v,0.16) + 0.4275*t*pow(v, 0.16);
      cout << windChill << '\t';
    }
    cout << '\n' ;
  }
}
