#include "main.h"

/**
 * print_most_numbers - a function that prints numbers from 0-9
 *
 * Return: 0
 */

void print_most_numbers(void)
{

char c;

for (c = '0'; c <= '9'; c++)
{
if (c == '2' || c == '4')
continue;
else
_putchar(c);
}
_putchar('\n');
}
