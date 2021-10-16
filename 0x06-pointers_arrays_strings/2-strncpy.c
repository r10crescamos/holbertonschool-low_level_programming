#include "main.h"

/**
* _strncpy - Copy string, n bytes of src to the dest string
* @src: string copied
* @dest: string copy
* @n: number of bytes to copy.
* Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
