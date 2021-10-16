#include "main.h"

/**
* reverse_array - Reverses of integers.
* @a: integers to be reversed array
* @n: elements of array
*/

void reverse_array(int *a, int n)
{
int i;
int tmp;
for (i = 0; i < n--; i++)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
}
}
