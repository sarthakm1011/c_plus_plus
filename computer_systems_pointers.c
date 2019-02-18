// Pointers Precedence
// ------------------
// () [] ->
// ! ~ ++ -- + - * & (type) sizeof
// * / %
// + - 
// << >>
// < > <= >=
// == !=
// &
// ^
// | 
// && 
// ||
// ?:
// = += -= *= /= %= &= ^= !=  

void pointers_declaration() {
	int *p; // p is pointer to int
	int *p[13]; // p is array[13] of pointer to int
	int *(p[13]); // p is array[13] of pointer to int (just explicit)
	int **p;// p is pointer to a pointer to int
	int (*p)[13]; // p is a pointer to array[13] of int
	int *f();// f is a function returning pointer to int 
	int (*f)(); // f is a pointer to function which returns int
	
	int (*(*f())[13])(); 
	// f is a function returning pointer to an array[13] of pointers to functions returning int

	int (*(*x[3])())[5]; 
	// x is array[3] of pointer to a function returning pointer to array[5] of ints

} 

// WRONG THINGS (**IMP**)
// ----------------------
// Pointers dereferencing

// Assumption that heap data is initialized to zero
// Example accesing memory using malloc 
// memory taken by int and int* are different in 64 bit machines (not in 32 bit machines)
// Hence initialise with a right size of object.
// Not checking the max string size of input. classic buffer overflow
// Misunderstanding pointer arithematic ( during pointer traversing pointer moves with the size of the type (not always by 1))

// overwriting memory (very bad)

int *BinHeapDelete(int **binheap, int *size) {
	int *packet;
	packet = binheap[0];
	binheap[0] = binheap[*size-1];
	*size--;
	Heapify(binheap, *size, 0);
	return (packet);
} 

// returning addresses of the local variables
// freeing block multiple times

// Memory Leak: Allocating a particular block and then returning



// SOLUTION (Dealing with memory bugs)
// -----------------------------------
// gdb (problems with complex data structure)
// consistency checker ( like free block should be in free list, free blocks should not be contigious, Runs silently prints only when error )
// valgrind


