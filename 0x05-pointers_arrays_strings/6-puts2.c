#include "main.h"
/**
 * puts2 - function that prints every other characteters
 * @str: pointer to
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
