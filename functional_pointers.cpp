#include <iostream>
using namespace std;

int* Add(int* a, int* b) {
	int c = (*a) + (*b);
	return &c;
}

// There will be a warning as th values are stored in stack after the exectuion
// the program Add it can happen that a new function overrides the function 
// in the stack. 

// It's not good to return the address of local variable to the stack because 
// it could be overrriden 


int* add_modified(int* a, int* b) {
	int *c = (int*)malloc(sizeof(int));
	*c = (*a) + (*b);
	return c;
}




// function call in machine language is to jump to first instruction in function
// function pointers stores the entry point of functions in the memory
// functions in memory is just a set of instructions taking contigious memory

int ad(int a, int b) {
	return a + b;
}






int main() {
	int a = 5;
	int b = 12;
//	int *c = Add(&a, &b);
	int* c = add_modified(&a,&b);
	cout << *c << endl;
	
	// Functional Pointers
	int d;
	int (*p)(int,int);
	p = &ad; // or simply 'ad'
	d = (*p)(2,3);
		

}




