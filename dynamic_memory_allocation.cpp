#include <iostream>
using namespace std;

// If the space is insufficient, allocation fails and returns a NULL pointer.
// malloc(), calloc(), realloc(), free()

// Calloc():  It initializes each block with a default value ‘0’.
// Malloc(): It returns the void pointer which can be casted into other type
// Realloc(): Dynamically change the memory allocation of the previous memory allocation
void dynamic_memory() {
	int* ptr;
	ptr = (int*) malloc(5 * sizeof(int));
	
	if(ptr == NULL) {
		cout << "Memory not allocated" <<endl;
		exit(0);
	} else {
		cout << " Memory Allocated" <<endl;

		// Get the lelements of the array
		for(int i=0; i<5; ++i) {
			ptr[i] = i + 1;
		}
		
		
		// print the elements of the array
		for(int i=0; i<5; ++i) {
			cout << ptr[i] << endl;
		}		
	}

}




// Void Pointer:  Generic pointer which can point to object of any data type || It cannot be dereferenced before casting
// Null Pointer: When the pointer points to NULL or 0

 
void void_pointer() {
	int value = 5;
	void* ptr = &value;
	cout << *static_cast<int*>(ptr) << endl;

	void* pointer1 = NULL // this is a void pointer which is a NULL pointer 	
}



int main() {
	//dynamic_memory();
	void_pointer();
}


