#include "main.h"

void puts2(char *str){

	int i;
	char c;
	i = 0;
	c = *(str+i);

	while(c != '\0'){
	
		_putchar(c);
		i += 2;
		c = *(str+i);
	}
	_putchar('\n');
}
