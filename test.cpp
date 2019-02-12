#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

float mean(float a, float b) {
	return (a+b) / 2;
}


void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}

// main() is where program execution begins.
int main() {

	//for (int a=10; a<13; a = a + 1) {
	//	cout << "Hello World" << endl; // prints Hello World
	//}

	if(true) {
		cout << "Dafuq" << endl;
	}


	double balance[5] = {1.2, 3.4, 4, 5.0, 3.9}; // initialise the array
	
	int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11}; // initialise the 2d array

	double *p;
	p = balance;
	cout << *(balance + 2) << endl;

	cout << rand() <<endl;


    return 0;
}



// Case Sensitive
// Bool, char, void, int, float, double, void
// signed, unsigned, short, long
// sizeof()
// enum color {red, green, blue}

// auto, register, static, extern, mutable
// default: auto
// In C++, when static is used on a class data member, it causes only one copy of that member to be shared by all objects of its class.
// The register storage class is used to define local variables that should be stored in a register instead of RAM
// The extern modifier is most commonly used when there are two or more files sharing the same global variables
// &&  ||  !

// strcat(): Concatenate Strings
// strlen(s1); // length of the string
// memcpy(): memory copy location


// C++ does not allow to pass an entire array as an argument to a function. However, You can pass a pointer to an array by specifying the array's name without an index.
// void myFunction(int *param),  void myFunction(int param[]) {

// dynamic memory allocation, cannot be performed without them. 
