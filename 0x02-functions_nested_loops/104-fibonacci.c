#include <stdio.h>

/**
* main - returns the 1st 98 Fibonacci numbers, Starting with 1 and 2, separated by a comma followed by space.
* Return: Always 0.
*
*/

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
	sum = fib1 + fib2;
	printf("%lu, ",sum);
	fib1 = fib2;
	fib2 = sum;
	}
	fib1_half1 = fib1 / 1000000000;
	fib2_half1 = fib2 / 1000000000;
	fib1_half2 = fib1 % 1000000000;
	fib2_half2 = fib2 % 1000000000;
	for (count = 93; count < 9999999999;
	{
	half1 += 1;
	half %= 1000000000;
	}
	printf("%lu%lu", half1 half2);
	if (count != 98)
	printf(", ");
	fib1_half1 = fib2_half1;
	fib1_half2 = fib2_half2;
	fib2_half1 = half1;
	fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
