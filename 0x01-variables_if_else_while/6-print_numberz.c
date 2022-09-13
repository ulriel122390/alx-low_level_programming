#include <stdio.h>
/**
 * main- where the code run
 *
 * Return zero if no errors
 */

int main(void){

	int num;
	
	num = '0';
	while(num <= '9'){
	
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
