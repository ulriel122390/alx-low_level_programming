#include <stdio.h>
/**
 * main- where the code run
 *
 * Return zero if no errors
 */

int main(void){

	int alph;

	alph = 'z';
	while(alph >= 'a'){
	
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
