#include <unistd.h>  
#include "main.h"
/**
 * main - the main programs to print putchar
 *
 * Return zero if no errors
 */
int main(void)
{
	int i = 0;
	char M[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	while (i < 8)
	{
		_putchar(M[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
