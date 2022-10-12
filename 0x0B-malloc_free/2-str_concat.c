#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = (char *)malloc(_strlen(s1) + _strlen(s2) + 1);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (k = 0; k < _strlen(s1); k++)
		*(ptr+k) = *(s1+k);

	for (l = 0; l <= _strlen(s2); l++, k++)
	{
		*(ptr+k) = *(s2+l);
	}
	return (ptr);
}
