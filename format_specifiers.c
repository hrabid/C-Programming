#include <stdio.h> 
#include <stdint.h> 
#include <stdbool.h>

int main() {
	printf("\n");
	printf("Memory Allocation for Data Types in C:\n\n");
	
	// Character type
	printf("★★ Character Types:\n") ;
	printf("char: %zu byte\n", sizeof(char)); 
	printf("signed char: %zu byte\n", sizeof(signed char)); 
	printf("unsigned char: %zu byte\n", sizeof(unsigned char));
	printf("\n\n");


	// Integer types
	printf("★★ Integer Types: \n");
	printf("short: %zu bytes\n", sizeof(short)); 
	printf("unsigned short: %zu bytes\n", sizeof(unsigned short));     
	printf("int: %zu bytes\n", sizeof(int)); 
	printf("unsigned int: %zu bytes\n", sizeof(unsigned int));    
	printf("long: %zu bytes\n", sizeof(long)); 
	printf("unsigned long: %zu bytes\n", sizeof(unsigned long)); 
	printf("long long: %zu bytes\n", sizeof(long long)); 
	printf("unsigned long long: %zu bytes\n", sizeof(unsigned long long));
	printf("\n\n");



	// Floating-point types
	printf("★★ Floating Point Types:\n");
    	printf("float: %zu bytes\n", sizeof(float)); 
	printf("double: %zu bytes\n", sizeof(double));
	printf("long double: %zu bytes\n", sizeof(long double));
	printf("\n\n");



    	// Boolean type
	printf("★★ Boolean Types: \n");
    	printf("_Bool: %zu byte\n", sizeof(_Bool));
	printf("\n\n");
    
	// Fixed-width integer types   
	// (from stdint.h)
	printf("★★ Fixed-width integer Types:\n");
	printf("int8_t: %zu byte\n", sizeof(int8_t)); 
	printf("uint8_t: %zu byte\n", sizeof(uint8_t)); 
	printf("int16_t: %zu bytes\n", sizeof(int16_t)); 
	printf("uint16_t: %zu bytes\n", sizeof(uint16_t)); 
	printf("int32_t: %zu bytes\n", sizeof(int32_t)); 
	printf("uint32_t: %zu bytes\n", sizeof(uint32_t)); 
	printf("int64_t: %zu bytes\n", sizeof(int64_t)); 
	printf("uint64_t: %zu bytes\n", sizeof(uint64_t));
	printf("\n\n");


    
	// Pointer type
	printf("★★ Pointer Type: \n");
	printf("void*: %zu bytes (generic pointer)\n", sizeof(void*)); 
	printf("int*: %zu bytes (pointer to int)\n", sizeof(int*)); 
	printf("char*: %zu bytes (pointer to char)\n", sizeof(char*)); 
	printf("float*: %zu bytes (pointer to float)\n", sizeof(float*));
	printf("\n\n");

    
	// Size type and pointers
	printf("★★ Size type & pointers: \n");
	printf("size_t: %zu bytes\n", sizeof(size_t)); 
	printf("ptrdiff_t: %zu bytes\n", sizeof(ptrdiff_t)); 
	printf("\n\n");



	return 0;
}
