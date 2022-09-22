#include "main.h"

/**
 *  * print_triangle - prints triangle of size n with #
 *   * @size: size othe triangle
 *    * Return:returns void
 *     */
void print_triangle(int size)
{
	int n, n2;
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 1; n <= size; n++)
		{
			n2 = 1;
			while (n2 < size)
			{
				if (n2 <= (size - n))
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
				n2++;
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
