#include "main.h"

/**
 * _strlen - outputs the length of a string
 * @s: char to check
 *Return: 0
 *
 */

int _strlen(char *s)
{
	int a = 0; /* start the count from gensis */

	for (; *s++;)
	a++;

	return (a);
}
