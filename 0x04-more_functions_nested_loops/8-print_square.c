#include "main.h"
 /**
 *  * print_square - prints square size with #
 *   * @size: the size of the square
 *    * Return:returns void
 *     */
void print_square(int size)
{
	int count1, count2;
	if (size <= 0)
		_putchar('\n');
	else
	{		
		for (count1 = 1; count1 <= size; count1++)
		{			
			for (count2 = 1; count2 <= size; count2++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
