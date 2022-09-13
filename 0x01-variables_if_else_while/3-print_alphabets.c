#include <stdio.h>
/**
 * main- where the programme run
 *
 * Return zero if no error 
 */

int main(void){

	int alphabet, ALPHABET;

	ALPHABET = 'A';
	alphabet = 'a';

	while(alphabet <= 'z'){
	
		putchar(alphabet);
		alphabet++;
	}
	while(ALPHABET <= 'Z'){
	
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0)
}
