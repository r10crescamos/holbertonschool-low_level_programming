#include "main.h"
/**
 * _puts - function that print a strings followed by a new line, to stdout
 * @str: pointer to string
 */
void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');


}
