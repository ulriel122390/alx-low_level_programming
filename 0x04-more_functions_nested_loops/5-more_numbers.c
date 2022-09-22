#include "main.h"

/**
 *  * more_numbers - print numbers from 0-14
 *    * Return:returns void
 *    */
void more_numbers(void)
{
	int n, n1;
	for (n1 = 1; n1 <= 10; n1++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
