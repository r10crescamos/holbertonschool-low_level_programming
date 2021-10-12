#include "main.h"
/**
 * _strlen - funtions that return the length a string
 * @s: pointer to String
 * Return: return count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count = count + 1;
		s++;
	}
	return (count);

}
