/*****************************************************
Name: Anwar Haikal Ruslan
Date: January 13, 2017
Description: This code displays "Hello World!"
Version: 1.01
******************************************************/

/* Indirect solution used to avoid plagiarism */
#include <stdio.h>

static char helloWorld[] = "Hello World!"; // global var

void display(void) {
	// puts("Hello World!");
	printf("%s\n", helloWorld);
} // end function display

/// main function
int main(void) { 
	display();
	return 0;
} // end function main