#include <iostream>
using namespace std;

// Virtual Memory is layer of indirection

// Program Address = RAM Address without virtual memory
// if PA(32 bit space) maps directly to RAM (30 bit space) then program crashes as RAM gets over.

// Virtual memory provides indirection by adding a map between the physical and program address
// Virtual memory MAP adds the oldest memory to the disk(paging) and map the new incoming physiscal address to the freed space.

// Virtual Memory MAP allows us to split the program memory while saving in the physical memory, 
// which will allow filling of holes in the memory.

// Each program has their own mapping.
// Example if 2 different programs tries to access the same physical memory then the map won't allow it as each map defines differnt actual memory mapping to different locations.
// Hence 2 different programs cannot access each other.(data security & reliability) 




// ld R4, 1024(RO) access RO+1024=102
// processor loads the intruction
// virtual address in the above instruction is 1024
// Let's say 1024 address is mapped to 2 at physical address
// The instruction will get the data for R4 from 2 at Physical Adress.

// If the data is in the disk then :- 
// 1) load the data in the memory
// 2) update the translation map
// 3) get the data from physical address(RAM)


// *****IMPORTANT******
// We have word aligned memory so we need to address every word 2^30 words in MAP for 30 bit 4GB  RAM
// Hence we divide virtual memory MAP into chunks(pages)
// Example each chunk or row added in map has 4Kbytes of data || 4KBytes = 1024 words || 1 word approx 4Bytes || 32 bit System 
// Nowadays if chunks or pages are equal to 2MBytes of data   || 2MBytes = 524,288 words || 64 bit System

// Now virtual address page maps to physical address page

// Physical address mapped to which virtual address could be found by adding the offset value in virtual address from the 
// starting point and adding that offset to the starting of the physical address mapping

// ****** ADDRESS TRANSLATION ******
// What if we have 32 bit virtual addresses and 256GB RAM with 4KB pages?
// log(4KB) = 12 bits for thr offset
// New architecture is we send the some bits which are page offset directly from program address to physical address.
// Rest bits go the same way through the map. The virtual page number translates to physical page number via map. 
// if we have 64 KBytes pages instead of 4KBytes pages then we use log(64KB) = 16 bits for the offset 


// 2GB = 2^31-1 physical addresses
// You need log2(n) bits to address n bytes
// 8 bits can address 256 bytes
// 20 bits address 1 Megabyte
// 30 bits address 1 Gigabyte
// 32 bits address 4 Gigabyte

// Each progr am has it's own virtual spacee




// *** PAGE FAULTS ***

// If page table entry points to the disk then we know page is on the disk
// Hardware CPU cause page fault exception if page in disk
// Get the data from the disk. If data is changed when loaded from the disk then write it again to disk
// Page faults take forever to run

// execution time: check_if_on_disk ~ 1cycle || page_fault_exception ~ 100 cycles || OS page fault handler ~ 10,000 cycles
// disk_operations ~ 40 Million Cycles

// Solid State Drives are trying to replace that
// iOS kills your program if it takes too much memory
// OS X 10.9: OS compresses your program then pages if it has to.




// *** MEMORY PROTECTION ***

// * Program Address Space in Linux *
// Each program has 32 bit address space
// Linux decides how that space has to be used
// random offset enhances security frim the attacks

//  ****************************
// 	Kernel Space
// ---------------------------random offset
// ****************************
// 	    Stack
// ***************************
// 	  Libraries
// ----------------------------random offset
// ****************************
// 	    Heap
// ----------------------------random offset
// ****************************
//          Data
// ****************************
// 	    Text
// ***************************

// For sharing the data the virtual addresses mapping of 2 different programs are shared in the actual physical memory




// *** MAKING VIRTUAL MEMORY FASTER ***

// Using the Page Table Cache(PTB) : Translational Lookaside Buffer
// Translation Lookaside Buffer adds another layer 
// Seperate TLB for instructiona nd the data
// 64 entries, 4 way (4KB pages) || 32 bit system
// 32 entries, 4 way (2MB pages) || 64 bit system
// Add the Page Table in the RAM with around 1 Million entries
// create a larger TLB as well, if not smaller then the above TLB
// idea: Keep doing this recursiverly 


// VA 0x003 ---> Look in TLB (Page Table Cache) ---> if not in TLB {Load Page Table in RAM} ---> if 0x0003 { move 3 steps in Page Table (PA) }

// kick from the TLB least used memory





