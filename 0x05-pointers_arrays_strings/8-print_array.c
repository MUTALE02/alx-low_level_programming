#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an arrayof integers.
* @a: array to be printed
* @n: number of elements in an array
*/
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)

	{
	printf("%d", a[count]);
	if (count != (n - 1))
	printf(", ");
	count++;
	}
	printf('\n');
}
