// allocator keeps track how big the heap is.
// Heap is always increasing.
// 
// Requests: r1 r2 r3 r4 r5 r6...rk...rn
// Hk: heap size
// Pk: adequate payloads after k+1 requests
// 
// Peak memory utilization
// i <= k
// Pk = (max P(i)) / Hk
// Hk is bases on efficieny of our memory allocator in heap (heap size)

// Explicit free list in memory as doubly linked list 
// Physical address are stored randomly (not in same order of dloubly linked list)
// What happens if we delete(free) in between block of memory? Code it up in the allocator!!

// ** Allocator can do predictions based on previous pattern of requests. **

// How much allocation should be done if request for a smaller memory size? Doubly linked list defines  a minimum 
// block size that would be given to a block. Eg 1 byte to header, 1 to footer, 1 to next, 1 to prev & 0 to payload size
// Hence a minimum of 4 will be made atleast


// Where in the free list do you put newly freed block? 1) LIFO  2)Address Policy:  addr(prev)<addr(curr)<addr(next)

// Designing a malloc
// Premature Optimization (NOT GOOD)
// 2 free blocks cannot be adjacent

// Freeing Memory with LIFO policy
// -------------------------------
// Case 1:
// insert the freed block at the root of the list

// Case 2:
// - splice out predecessor block if that free otherwise succesor if that free
// - coalesce both memory blocks
// - insert new block to the list 


// Write function insert block in free list? (implicit list)
// Write function remove block in free list? (implicit list)

// Segreated List (Seglist Allocators)
// ----------------------------------
// Each size class has it's own free list
// larger size class are power of 2
// Search aggregated class for block size m > n
// Best Type of allocators why? 1) High Throughput, 2) Better Memory Utilization, 3) Get Best fit for free as we have size classes


// Garbage
// -------
// void foo() {
// 	int* p = malloc(128);
//	return; // Garbage created
// }

// How to find the garbage memory?
// We find blocks of memory where there are no pointers which means that memory cannot be accessed.
// Pointers cannot be hidden
// We have to find the size and the starting point of the memory.

// visualise the memory as graph 
// Each node is a block of memory
// root nodes are variables in the stack memory / registers / golden variables which points inside the Heap
// 

// *****IMP****
// Use malloc/free package
// use a flag mark bit to check if run out of space
// Mark: Mark all the reachable blocks and mark them
// Sweep: Do a continous pass on the entire heep and free the non-marked parts of the heap

// IMPLEMENTATION
// new(n) : returns pointer to new blocks
// read(b,i) : read location i of block into register
// write(b,i,v) : write v into location i of block b
// Each block has header word b[-1] 
// is_ptr(p) : Gets whether it is a pointer or not
// length(b) : length of that block
// get_roots() : get all of the roots

void ptr mark(ptr p) {
	if (!is_ptr(p)) return;
	if (markBitSet(p)) return;
	setMarkBit(p);
	for (int i=0; i<length(p); i++) {
		mark(p[i]) = True;
	}
}

void ptr sweep(ptr p, ptr end) {
	while(p < end) {
		if markBitSet(p) { clearMarkBit(p); }
		else if (allocatedBitSet(p)) { free(p); }
		p += length(p);
	}
}

// is_ptr(p) : Can also point in middle of the block in C, Now what??
// Solution: Use a balanced binary tree to keep track of all allocated blocks
// balanced tree pointer can be stored in the header as 'left' & 'right'
 
