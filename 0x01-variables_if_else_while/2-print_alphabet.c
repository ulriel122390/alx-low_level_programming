#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- display the alphabet
 * Return 0 if no erroe
 */

int main(void)
{
	int alphabet;

	alphabet = 'a';
	while(alphabet <= 'z'){
	
		putchar(alphabet);
		alphabet++;
	
	}
	putchar('\n');
	return (0);
}
