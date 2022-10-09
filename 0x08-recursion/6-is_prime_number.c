#include "main.h"

int prime(int n, int d)
{
	if ((n / d) == 0)
	{
		return (0);
	}
	if (d == n)
	{
		return (1);
	}
	return (prime(n, d + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, 2));
}
