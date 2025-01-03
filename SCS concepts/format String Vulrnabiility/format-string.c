
#include <stdio.h>

void fmstr() {
	char input[100];	// to store the user input
	int var=0x11223344;   // a very secret and sensitive data !!!

	printf("Target address: 0x%.8x\n", (unsigned int) &var) ;
	printf("Data at target address: 0x%x\n", var) ;
	printf("Please enter a string: ");

	fgets(input, sizeof(input), stdin) ;  // read a user input (without buffer overflow)

	printf(input) ; // format-string vulnerable statement 
			// (may allow an attacker to access data on the stack !)

	printf("Data at target address: 0x.%x\n", var) ;
}

void main(){

	fmstr();
}

