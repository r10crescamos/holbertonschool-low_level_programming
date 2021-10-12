#include "main.h"
/**
 * swap_int - swap_integers
 * @a: pointer to integers a
 * @b: pointer to integers b
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
