/*
Author: Justin Trugman
HW3C Robot Location Estimator
I pledge my Honor that I abided by the Stevens Honor System
*/

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

void polar2Rect(double theta, double r, double &x, double &y){

  x += r*sin(theta);
  y += r*cos(theta);

  cout << "x " << x << '\t' << "y " << y << '\n';
}



int main() {
  ifstream f("hw3c.dat");

  double r,theta;

  double x = 0;
  double y = 0;

  while(!f.eof()){
    // theta and r may need to be switched
    f >> theta >> r;
    cout << "Input" << '\t' << theta << ' ' << r << '\t';
    if (theta == -1 && r == -1) {
      cout << "Program Terminated" << '\n';
      break;
    } else {
      theta = theta * (3.14159265359/180); // Convert to Radians
      cout << "degrees to radians " << theta << '\t' ;
      polar2Rect(theta, r, x, y);
    }
  }
}
