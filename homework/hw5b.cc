/*
Author: Justin Trugman
HW5b Shapes

I pledge my honor that I abided by the Stevens honor System
*/

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
private:
  int x,y;

public:
  Shape(int xcoord, int ycoord) : x(xcoord) , y(ycoord){}
};

class Rect: public Shape {
private:
  int width, height;

public:
  Rect(int x, int y, int w, int h) : Shape(x,y), width(w), height(h){}

  double area(){
    return width * height;
  }
};

class Circle: public Shape {
private:
  int radius;
public:
  Circle(int x, int y, int rad) : Shape(x,y), radius(rad){}

  double area(){
    double pi = 3.14159;
    return pi * pow(radius,2);
  }
};

class Line: public Shape {
private:
  int start, end;

public:
  Line(int x, int y, int Xstart, int Yend) : Shape(x,y), start(Xstart), end(Yend) {}

  double area() {
    return 0;
  }
};




int main() {
	Rect r1(100, 50, 20, 40);	// Rect(x,y, width, height)
	cout << r1.area() << '\n';
  Circle c1(400, 300, 50); // Circle(x,y,radius)
  cout << c1.area() << '\n'; // area should be pi * radius squared
  Line L1(0,0, 300, 400);
  cout << L1.area() << '\n'; // area should be 0
}
