/*
Author: Justin Trugman
HW2B Is Prime
I pledge my honor that I abided by the Stevens Honor System
*/

#include <iostream>

using namespace std;

bool isPrime(unsigned long long x){
  for (int i = 2; i <= x/2; i++){
    if (x % i == 0){
      return false; // prints a 0 aka is NOT prime
    }
  }
  return true; // prints a 1 aka is prime


}

int main() {
  cout << "Prints 0 if number is NOT Prime & Prints 1 if Prime" << '\n';
  cout << isPrime(30) << '\n';
}
