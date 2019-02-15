// This program is implementation of the the 64 bit general purpose dynamic storage allocator.

// An explicit list of free blocks (free list) is implemented where the free block has next and previous pointer, after the header.

// Structure of a free block (size not equal to sixteen)
// Header | prev_pointer | next_pointer | free_space | footer

// Structure of allocated blocks
// Header | payload

// The newly freed blocks are placed in the explicit list using the first in firs// first out  policy, To implement this, one pointer points to the head of the 
// list, and another pointer points to the end of the list 

// Minimum block size = 16 bytes
// Search policy used: First Fit (first free block greater than requested size)

// For reduction of fragmentation, the footers of allocated blocks are removed

// A seperate list of free blocks of requested size less than equal to sixteenr
// (rounded to 16) is maintained to handle small sized blocks. Out of the 16
// bytes, 8 bytes are allocated for the header, 8 bytes for the next pointer. As
// there is no space in the previous pointer, we can only traverse this list in
// one direction.

#include <stdio.h> // All c inbuilt functions
#include <string.h> 
#include <stdlib.h> // functions for memory allocation and process control
#include <stdbool.h> 
#include <stddef.h> // defines variable types and macros
#include <assert.h> // verifies assumptions in the program

#include "mm.h"
#include "memlib.h"


// Creating alias for the drivers
#ifdef DRIVER 

#define malloc mm_malloc
#define free mm_free
#define realloc mm_realloc
#define calloc mm_calloc
#define memset mem_memset
#define memcpy mem_memcpy
#endif











