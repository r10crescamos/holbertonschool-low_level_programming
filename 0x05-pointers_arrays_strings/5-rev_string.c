#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: pointer
 */
void rev_string(char *s)
{
	char *ptr1 = NULL;
	char *ptr2 = NULL;
	char tmp;
	int count = 0;
	int i = 0;

	ptr1 = s;
	ptr2 = s;

	while (*ptr1 != '\0')
	{
		count = count + 1;
		ptr1++;

	}
	ptr1--;
	while (i < count / 2)
	{
		tmp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = tmp;
		i++;
		ptr1--;
		ptr2++;
	}
}
