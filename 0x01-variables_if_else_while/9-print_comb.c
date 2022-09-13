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
		if(num != '9'){
			
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
