#include "main.h"

int len(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + len(s));
	}
	else
		return (0);
}

int rev(char *s, int n1, int n2)
{

	if (s[n1] == s[n2])
	{
		if (n1 < n2)
		{
			n1++;
			n2--;
			return (0 + rev(s, n1, n2));
		}
		return (1);
	}
	else
		return (0);
}

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (rev(s, 0, (len(s) - 1)));

}
