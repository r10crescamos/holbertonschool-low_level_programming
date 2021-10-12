#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer
 */
void puts_half(char *str)
{
	int n;
	int large = 0;
	char *ptr = str;
	int count = 0;

	while (*str != '\0')
	{
		large = large + 1;
		str++;
	}
	if (large % 2 != 0)
		n = (large - 1) / 2;
	else
		n = large / 2;

	while (*ptr != '\0')
	{
		if (count >= n && n % 2 != 0)
			_putchar (*ptr);
		else if (count > n)
			_putchar(*ptr);
		count++;
		ptr++;
	}
	_putchar('\n');
}
