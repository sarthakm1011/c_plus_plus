#include <iostream>
using namespace std;

//  1D Array
// ----------
// A = {5,8,9,6,10};
// addresses = {100,102,104,106,108}
// *p = A
// p->100 || &p->500 || p[2]->9 || 2[p]->9 || p+2->104 || *(p+2)->9


// 2D array matrix of pointers
void array_matrix_pointers() {
	int **p; // double pointer reference
	p = new int* [3]; // array of integer pointers 
	
	// accesing the element at specific ith and jth  position 
	// *(*(p+i)+j)	
	// **p is essentially *(*(p+0)+0) 
	
	// cout << *(*(p+0)+0) << endl;
}


int main() {
	array_matrix_pointers();
}
