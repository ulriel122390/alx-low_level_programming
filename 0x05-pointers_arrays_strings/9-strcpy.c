#include "main.h"

char *_strcpy(char *dest, char *src){

	int i, j;
	char c;
	i = 0;
	c = *(src+i);

	while(c != '\0'){
	
		i++;
		c = *(src+i);
	}

	for(j=0; j<=i; j++){
	
		*(dest+j) = *(src+j);
	}

	return(dest);
}
