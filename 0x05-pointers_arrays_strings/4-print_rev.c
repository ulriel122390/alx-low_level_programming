#include "main.h"

void print_rev(char *s){

	int i, ;
	char c;
	i = 0;
	c = *(s+i);
	
	while(c != '\0'){
	
		i++;
		c = *(s+i);
	}
	j = i - 1;

	while(j >= 0){
	
		c = *(s+j);
		_putchar(c);
		j--;
	}
	_putchar('\n');
}
