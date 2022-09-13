#include <stdio.h>
/**
 * main- where the code run
 *
 * Return zero if no errors
 */

int main(void){

	int i, j;
	i='0';
	j='0';

	while(i <= '9'){
	
		while(j <= '9'){
		
			if(!(i>j || i==j)){
			
				putchar(i);
				putchar(j);
				if(i=='8' && j=='9')
					putchar('\n');
				else{
				
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
