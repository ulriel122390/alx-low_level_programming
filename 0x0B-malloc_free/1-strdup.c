#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

char *_strdup(char *str){

	char *ptr;
	ptr = (char *)malloc(_strlen(str)+1);
	if(str == NULL)
		return(NULL);
	if(ptr == NULL)
		return(NULL);
	_strcpy(ptr, str);
	return(ptr);
}
