#include "main.h"
/**
 * print_array - function that prints n elements of an arrays
 * @a: pointer
 * @n: Variable int
 */
void print_array(int *a, int n)
{
	int flag = 0;

	while (n > 0)
	{
		if (flag != 0)
			printf(", ");
		printf("%d", *a);
		flag = 1;
		n--;
		a++;
	}
	putchar('\n');

}
