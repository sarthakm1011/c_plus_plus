#include <iostream>
#include <ctime>

using namespace std;

void references() {
	int i = 10;
	int& r = i;

	return;

}

void BasicPointers() {
	int *ip;
	int var = 30;

	ip = &var;

	cout << "var: " << var << endl;
	cout << "ip: " << ip << endl;
	cout << "value of ip variable: " << *ip << endl;

	return;
}



void NullPointer() {
	int *i = NULL;
	// By default Null Pointer is constant with a value 0
	// 0 memeory is not accesible as it is reserved for the OS, hence null pointer points to nothing
	return;
}



void OperationsPointer() {
	// ++, --, -, +
	// assuming 'ptr' points to 1000
	// 'ptr++' will points to 1001
	int var[3] = {10,100,1000};
	int *ptr;
	ptr = var;

	// for (int i=0; i<3; i++) {
	// 	cout << "address of var[" << i << "]: " << ptr << endl;
	// 	cout << "value of var[" << i << "]: " << *ptr << endl;
	// 	ptr++;
	// 	// as integer values they take 4 bits to store
	// 	// 0x7ffee6ad0984
	// 	// 0x7ffee6ad0980
	// }

	while (ptr <= &var[2]) {
		cout << "Hello Bitch" << endl;
		ptr++;
	}
	return;

}


void ArrayPointers() {
	
	// Way 1 
	int var[3] = {10, 100, 1000};
	cout << *(var + 2) <<endl;

	for (int i = 0; i < 3; i++) {
      *var = i;    // This is a correct syntax
      //var++;       // This is incorrect.
   }

   
   // Way 2
   int *ptr[3];
   for (int i=0; i<3; i++) {
   		ptr[i] = &var[i];
   		cout << ptr[i] << endl;
   }


   // Way 3
   const char *names[3] = {"Randi", "Super Randi", "Tot Randi"};
   for (int i=0; i<3; i++) {
   		cout << (names + i) << endl;
   }

}



void PointersPointer() {
	int var;
	int *ptr;
	int **pptr;

	var = 30;
	ptr = &var;
	pptr = &ptr;

}


void getSeconds(long *par) {
	*par = time( NULL );
	cout << *par << endl;
	cout << par << endl;
	return;
}

// getting return as a pointer 
int * getRandom() {
	static int r[2];
	for (int i=0; i<2; i++) {
		r[i] = rand();
		cout << r[i] << endl;
	}
	return r;
}


// Memory Management of Pointers
void memoryTest() {
	
	// 'new int' allocates a new memory in the heap memory
	// 'int* p' creates a pointer variable 'p' in the stack memory and stores the address of new memory allocated in the heap
	int* p = new int; 

	// stores the value '5' in the heap memory where p points to
	*p = 5;

	// deletes just the memory pointed by pointer 'p' and allocated in the heap 
	// does not delete the pointer itself (pointer keeps dangling now)
	delete p;

	// To avoid keeping the pointer dangling 
	p = NULL; // or p = 0 
	// Define by  Null pointer not NULL like above, it's better that way

	// pointer 'p' points to the new memory location
	p = new int(10);

	// When reference to the new location is done garbage is created in the heap memory. 
	// Memory that is there inside the heap memory but not being used is Garbage

	/*** GARBAGE CREATION AVOIDING ***/
	// delete p is very important to avoid garbage creation
	// as the program runs the stack memory and heap memory is created 
	// When the program ends stack memory also ends but heap memory is still allocated unless deleted.

}




// A pointer is a variable whose value is address of another variable
// data type of the variable or constant that the pointer points to.

// (a) We define a pointer variable. 
// (b) Assign the address of a variable to a pointer.
// (c) Finally access the value at the address available in the pointer variable
int main() {

	// OperationsPointer();
	// ArrayPointers();

	//long sec;
	//getSeconds(&sec);

	//int *p;
	//p = getRandom();

	return 0;
}



// A reference variable is an alias, another name of existing variable

// Difference between reference and pointers:
// 1) Cannot have NULL refereences
// 2) Once initialized to an object, cannot be changed to refer to another object
// 3) References initialized when created whereas pointer can be initialised anytime







