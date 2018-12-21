/*
Author: Justin Trugman
HW2C Counting Primes
I pledge my Honor that I abided by the Stevens Honor System
*/
#include <iostream>

using namespace std;

bool isPrime(unsigned long long x) {
  for (int i = 2; i <= x/2; i++){
    if (x % i == 0){
      return false; // is not prime
    }
  }
  return true; // is prime
}

int countPrimes (unsigned long long a, unsigned long long b) {
  int primeCounter = 0;
  if (b % 2 == 0 ){
    primeCounter = -1;
  } else {
    primeCounter = 0;
  }
  for (unsigned long long i = a; i <= b; i++){
    if (isPrime(i) == true) {
      primeCounter++;
    } else {
      continue;
    }
  }
  cout << "The amount of primes is... " << primeCounter << '\n';
}


int main () {
  long long a = 0;
  long long b = 0;

  cout << "This program counts how many prime numbers are in the range between 2 inputs, a & b" << '\n';
  cout << "Please Enter A" << '\n';
  cin >> a ;
  cout << "Please Enter B" << '\n';
  cin >> b ;

  cout << "Numbers inputed are " << a << " & " << b << '\n';

  countPrimes(a,b);

}
