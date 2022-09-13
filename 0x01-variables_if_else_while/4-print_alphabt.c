#include <stdio.h>
/**
 * main- where the code run
 *
 * Return zero if no error
 */

int main(void){

	int alphabet;
	
	alphabet = 'a';
	while(alphabet <= 'z'){
	
		if(alphabet == 'e'){
		}
		else
			if(alphabet == 'q'){
			}
			else
				putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
