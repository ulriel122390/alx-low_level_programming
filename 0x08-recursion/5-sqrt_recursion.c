#include "main.h"

int sqt(int n, int d)
{
	if (d % (n / d) == 0)
	{
		if (d * (n / d) == n)
		{
			return (d);
		}
		else
			return (-1);
	}
	return (0 + sqt(n, d + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqt(n, 2));
}
