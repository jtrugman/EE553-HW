/*
  Author: Justin Trugman
  Cite: Charles Bethin for helping understand the trig
  HW1B Convergence of N-Gons
  I pledge my honor that I abided by the Stevens Honor System


*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const double PI = 3.14159265358979;

  double r = 1;

  cout << "radius: " << r << " n: " << 1 << "\n";

  for (int n =3; n <= 1e6; n++) {
    r /= cos(PI / n);

    if (n == 1 || n == 10 || n == 100 || n == 1000 || n == 10000 || n == 100000 || n == 1000000) {
      cout << "radius: " << r << " for n: " << n << "\n";
    }
  }


}
