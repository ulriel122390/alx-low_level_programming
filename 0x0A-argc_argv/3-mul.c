#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int p;

	if (argc == 3)
	{
		p = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", p);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
