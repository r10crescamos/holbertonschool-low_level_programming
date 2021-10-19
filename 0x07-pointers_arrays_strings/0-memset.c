#include "main.h"
/**
 *_memset - fill the first n
 * @s: Parameters
 * @b: Parameters
 * @n: Parameters
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
