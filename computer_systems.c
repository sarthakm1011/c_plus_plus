// Bit Manipulation
//========================

// avoids null pointer access (p && p*)

// Left shift 0's with right x << 3
// x << 8 mod 8

// right shift arithematic
// x >> 3 then shift to right and add Most Significant Bit to left.

// Encoding Integers
// -------------------
// B2U signed summation(xi * 2^i)

// B2T unsigned (-x) * 2^(w-1) + summation(xi * 2^i)
// MSB is the sign bit with a negative value if value is 1

// Mapping between unsigned and signed 
// The signed and unsigned wil 2^w where w will be the word size

// unsigned data type in c is exclusive to it
// -1 > 0U in unsigned data type
// Eg if w = word bit size = 5
// -1 = -1 + 2^w = -1 + 2^5 = 31U
// Hence 31U > 0U
// When comparing if either of the number is unsigned then convert both
// of the numbers to unsigned to compare the values of the unsigned.
// |Tmax| = |Tmin| - 1
// UMax = 2*TMax - 1

// unsigined number in a positive loop might lead to infinite loop
// return of sizeof(char) is an unsigned integer
// Eg for(i=n-1, i-sizepf(char>=0; i--){}

// sign extension, signed 1110 == 11110

// When calculating the 2's complement and it overflows then 

// While multiplication in binary of unsigned of word size w then I
// would require 2w values. But o prevent from running out of memory 
// we take only the mod by 16 and throw the higher order bits

// u << k    ==    u * 2^k
// Shift is faster than multiplying

// u >> k    ==   u / 2^k
// shift is faster than divide
// problem if number not divisible 

// 2's complement is add  negation of binary number + 1

// size_t i;
// unsigned i;
// for (i = count-2; i < count; i--)
// This is the right way to right the code
// size_t is defined as unisgned value with length of word_size 

