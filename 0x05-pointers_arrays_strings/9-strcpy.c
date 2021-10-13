#include "main.h"
/**
 * _strcpy - function that copies the trings pointed to by src
 * @dest: pointer
 * @src: string pointer
 * Return: copy of string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
