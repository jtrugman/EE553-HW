/*
Author: Justin Trugman
HW4A Vec3d

I pledge my honor that I have abided by the Stevens Honor System
*/

#include <iostream>
#include <cmath>
using namespace std;

class Vec3d{
private:
  double x = 0, y = 0, z = 0;

public:
  Vec3d(double xInput, double yInput, double zInput) : x(xInput), y(yInput), z(zInput) {}

  Vec3d operator +(Vec3d right) const{
    return Vec3d(right.x + x, right.y + y, right.z + z);
  }

  Vec3d operator -(Vec3d right) const{
    return Vec3d(right.x - x, right.y - y, right.z - z);
  }

  Vec3d dot(Vec3d right) {
    return right.x * x + right.y * y + right.z * z
  }

  Vec3d mag() {
    return sqrt(magSq());
  }

  Vec3d magSq(){
    return pow(x,2) + pow(y,2) + pow(z,2);
  }

  Vec3d dist(Vec3d g){
    double dx, dy, dz;
    dx = x - g.x;
    dy = y - g.y;
    dz = z - g.z;

    return pow(dx,2) + pow(dy,2) + pow(dz,2);
  }

  ostream& operator <<(ostream& s, Vec3d xyz ) {
	s << xyz.x << ", " << xyz.y << ", " << xyz.z << '\n';
  return s;
}
};

double  dot(Vec3d a, Vec3d b) {
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

int main() {
	// use friend operators
	const Vec3d a(1.0,2.5,3.5); // double precision!
	const Vec3d b(2.0);         //(2,0,0)
	const Vec3d c(2.0,3.5);     //(2,3.5,0)
	const Vec3d e;              //(0,0,0)

	const Vec3d f = a + e;
	const Vec3d g = b - d; // d is not an object, pick a different one
	double x = dot(f, g); // regular function  f.x*g.x + f.y*g.y + f.z*g.z
	//	double y = Vec3d::dot(f,g); // static function
	double z = f.dot(g); // method
	const Vec3d h = -b;

	double dist = f.mag(); // square root of sum of square
	double dist2 = f.magSq(); // sum of square
	double dist3 = f.dist(g); // sqrt or sum of square of diff
	//dx = f.x-g.x  dy = f.y - g.y      dx*dx + dy*dy...
	cout << a << '\n';
	cout << b << '\n';
	cout << c << '\n';
	cout << e << '\n';
	cout << f << '\n';
	cout << g << '\n';
	cout << h << '\n';
	cout << dist << '\n';
	cout << dist2 << '\n';
	cout << dist2 << '\n';
}
