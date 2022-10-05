#include "main.h"

void _puts(char *str){

	int i;
	char c;
	i = 0;
	c = *(str+i);

	while(c != '\0'){
	
		i++;
		_putchar(c);
		c = *(str+i);
	}
	_putchar('\n');
}
