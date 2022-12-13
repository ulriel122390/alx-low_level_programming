#include"main.h"

int _strlen(char *s){

	int i;
	char c;
	i = 0;
	c = *(s+i);

	while(c != '\0'){
	
		i++;
		c = *(s+i);
	}
	return (i);
}
