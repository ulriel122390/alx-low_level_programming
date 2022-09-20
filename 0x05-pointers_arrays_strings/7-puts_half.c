#include "main.h"

void puts_half(char *str){

	int i, n;
	char c;
	i = n = 0;
	c = *(str+i);
	while(c != '\0'){
	
		i++;
		c = *(str+i);
	}
	
	if((i%2) == 0)
		n = i/2;
	else 
		n = (i-1)/2;
	
	while(n < i){
	
		c = *(str+n);
		_putchar(c);
		n++;
	}
	_putchar('\n');
}
