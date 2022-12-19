#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an arrayof integers.
* @a: pointer.
* @n: num of elements in an array.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i != n - 1)
	{
	printf(",");
	printf(" ");
	}
	printf("\n");
}
}
