#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, b;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		b = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				b = 0;
				break;
			}
		}
		if (b == 1)
			break;
	}
	return (i);
}
