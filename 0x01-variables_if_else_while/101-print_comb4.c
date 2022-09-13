#include <stdio.h>
/**
 * main- where the code run
 *
 * Return zero if no errors
 */

int main(void){

	int i, j, k;
	i = '0';
	j = '0';
	k = '0';

	while(i<='7'){
	
		while(j<='8'){
		
			while(k<='9'){
			
				if(i<j && j<k){
				
					putchar(i);
					putchar(j);
					putchar(k);
					if(!(i=='7' && j=='8' && k=='9')){
					
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
	putchar('\n');
	return (0);
}
