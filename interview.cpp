#include <iostream>
using namespace std;

// processor distance 

// oscillator: clock cycle
// only works when clock is up
// frequency of clock GHZ
// onchip memory is very fast

// Moore's law: number of transistor doubles on system
// End of moore's law because can't increase the freq (Too much heat)


// Moore's law over on 2007
// Number of cores means, number of parallel preocesses can be done at a given time
// clock frequeny = 1 / clock_time
// every instruction has their own clock time


// Processor ALU
// operations only happen in ALU which is in processor
// Main memory limited space

// Virtual memory is abstraction of the main memory // read it more

// stack is very small and heap is very large


// CACHE
//-------


// 64 bit system 
// boolean = 1 bit
// int = 4 Byte
// double = 8 Byte


// *(a+1) if this is an int then moves 4 bytes forward
// *(a+1) if this is an  double then moves 8 bytes

// Memory Heirarchy

// Hexadecimal means 4 bits (16 point respresentation)
// 64 bits 
// 2 to the power 64 address space

// dereference: means 
void testMalloc() {
	int a = 10
	int* p = &a 

	// evey function has it's own stack
	// Dynamic allocation in heap
	malloc(int[] a)
	// returns always pointer of starting index
	// This pointer address is stored on the stack
	// tune the minimum size of starting space
	// 'free()'' is used on resources allocated by malloc()

}


void pointersArithematic() {
	int p = new int;
	int* ptr = p;

	// arr[0] = 11
	// arr[1] = 20
	// *p = 11

	cout << p << endl;

	cout << ++*p << endl; // *p = 11,  maybe then ++(*p) = 12 ??

	cout << *p++ << endl; // *(p++) = 20

	cout << *++p << endl; // *(++p) = 20



	int arr[6] = {10,4,56,12,1,30};
	int *p1 = arr[0]; // same as *p1=arr
	int *p2 = arr[3];
	// Assuming each int of 4 bytes
	// Address of arr assume = {100,104,108,112,116,120}
	// ++p1 = 104
	// p1 = p1 + 1 = 104
	// l = p2 - p1 // does not make any sense
	// (l / 4) = 3 is the difference in number of elements between these pointers



}



struct test 
{ 
  char *str; 
};


// Points to the same reference for the memory allocation 
void shallowCopy() {
    struct test st1, st2; 
    st1.str = (char *)malloc(sizeof(char) * 20); 
  
    strcpy(st1.str, "GeeksforGeeks"); 
  
    st2 = st1; 
    st1.str[0] = 'X'; 
    st1.str[1] = 'Y'; 
  
    /* Since copy was shallow, both strings are same */
    printf("st1's str = %s\n", st1.str);  
    printf("st2's str = %s\n", st2.str); 
  
    return; 

}

// Creates a new reference and memory allocation
void deepCopy() {
	struct test st1, st2; 
	st1.str = (char *)malloc(sizeof(char) * 20); 
	  
	strcpy(st1.str, "GeeksforGeeks"); 
	  
	st2 = st1; 
	  
	// We add extra statements to do deep copy 
	st2.str = (char *)malloc(sizeof(char) * 20); 
	strcpy(st2.str, st1.str); 
	  
	st1.str[0] = 'X'; 
	st1.str[1] = 'Y'; 
	  
	/* Since copy was deep, both strings are different */
	printf("st1's str = %s\n", st1.str);  
	printf("st2's str = %s\n", st2.str); 
	  
	return; 

}

// Dynamic Binding: Function call is decided at runtime
// Friend Class: To access the private memeber of the other class
// vtable is a table of function pointers. It is maintained per class.
// vptr is a pointer to vtable. It is maintained per object


int main() {

}


// QUESTIONS
//===============
// 0) Difference between function and operator overloading?
// 1) What is the difference between including the header file with-in angular braces < > and double quotes ” “?
// 2) What is the difference between near, far and huge pointers?
// 3) Difference between ++*p, *p++ and *++p



