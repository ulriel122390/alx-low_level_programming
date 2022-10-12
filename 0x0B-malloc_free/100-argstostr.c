#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (k = j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}

	ptr = (char *)malloc(k + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = j = l = 0; l < k; j++, l++)
	{
		if (av[i][j] == '\0')
		{
			ptr[l] = '\n';
			i++;
			l++;
			j = 0;
		}
		if (l < (k - 1))
			ptr[l] = av[i][j];
	}
	ptr[l] = '\0';
	return (ptr);
}
