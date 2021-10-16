#include "main.h"

/**
 * _strcat - Append two strings.
 * @dest: String destination.
 * @src: String input.
 * Return: Destination.
 */
char *_strcat(char *dest, char *src)

{
	char *ptr1 = dest;
	while (*ptr1 != '\0')
		ptr1++;

	while (*src != '\0')
	{
		*ptr1 = *src;
		ptr1++;
		src++;
	}
	*ptr1 = '\0';
	return (dest);
}
