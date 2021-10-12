#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count = count + 1;
		s++;
	}
	s--;
	while (count > 0)
	{
		_putchar(*s);
		s--;
		count = count - 1;
	}
	_putchar('\n');

}
