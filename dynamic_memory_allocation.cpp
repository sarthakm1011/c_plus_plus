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

	void* pointer1 = NULL; // this is a void pointer which is a NULL pointer 	
}



void dynamic_allocation() {
	void *p  = malloc(4);
	cout << p << endl;
	
//	void *p2 = malloc(10*sizeof(int));
//	cout << p2 << endl;
	
//	int* p2 = (int*)malloc(10*sizeof(int));
	// it's important to typecast to derference the pointer and use it's valu

//	*p = 2 // can only be done after dereferencing
	// *p = p[0]


	
	// calloc initialise the memory with 0 whereas calloc has garbage values
	
	// malloc is used when the size of the arrayis to be created at runtime which is not allowed. 
	
	// Even after freeing the memory we can access the memory if we know the address to the memory but we should not change anything at that location because it's like shooting in the dark as we don't know what information is kept at those chunks of memory now because we have freed the memory

	int n;
	scanf("%d", &n);
	
	int* a = (int*)malloc(10*sizeof(int));
	cout << a << endl;

	int* b = (int*)realloc(a, 2*n*sizeof(int));
	cout << b << endl;
	
	
}



int main() {
	//dynamic_memory();
	//void_pointer();
	dynamic_allocation();
}


