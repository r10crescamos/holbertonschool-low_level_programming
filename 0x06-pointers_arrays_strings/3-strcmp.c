#include "main.h"

/**
 * _strcmp - Compare two string
 * @s1: String compare.
 * @s2: String compare.
 * Return: s1 s2 diference.
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (((s1[c] != '\0') && (s2[c] != '\0')) && (s1[c] == s2[c]))
		c++;

	return (s1[c] - s2[c]);
}
