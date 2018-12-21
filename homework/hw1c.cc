/*
  Author: Justin Trugman
  HW1C Sum the numbers from 1 to 100
  I pledge my honor that I abided by the Stevens Honor System
*/

#include <iostream>
using namespace std;

int main () {

  // Count to 100 with loop
  int sum = 0;

	for(int i = 1; i <= 100; i++) {
		sum += i;
	}
	cout << sum << '\n';


  // Gauss Formula
  int n = 100;
  int x = 0;
  int y = 0;
  int ans = 0;

  x = n + 1;
  y = x * n;
  ans = y / 2;
  cout << ans << '\n';
}
