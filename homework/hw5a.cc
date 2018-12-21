/*
Author: Justin Trugman
HW5a Pointer Drill

I pledge my honor to abide by the Stevens honor system
*/

#include <iostream>
using namespace std;

// fill the array x with zeros (using pointer)
void fill(int x[], int size) {
  cout << '\n' << "Fill" << '\n';

#if 0
	x[i] = 0; // NO, use pointer!!! *p++ = 0
# endif

  int* p = x;
  for (int i = *p; i < size; i++){
    *p++ = 0;
  }
}


// add 1 to every element of x
void increment(int x[], int size) {
  cout << '\n' << "Increment" << '\n';
  int* p = x;
  for (int i = *p; i < size; i++){
    *p++ += 1;
  }
}

// double every element of x
void doubleMe(int x[], int size) {
  cout << '\n' << "Double" << '\n';
  int* p = x;
  for (int i = *p; i< size; i++){
    *p++ *= 2;
  }
}



// print out every element of x separated by spaces  then newline
void print(int x[], int size) {
  for (int i = 0; i < size; i++){
    cout << x[i] << '\t';
    i++;
  }
}


int main() {
	int x[10] = {1};
	const int size = sizeof(x)/sizeof(int);
	print(x, size);
	fill(x, size);
	print(x, size);
	increment(x, size);
	print(x, size);
	doubleMe(x, size);
	print(x, size);
}
