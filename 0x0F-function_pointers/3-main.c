#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

int main(int argc, char *argv[]){

	int a, b, Res;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		Res = (*get_op_func(argv[2]))(a, b);

		printf("%d\n", Res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
