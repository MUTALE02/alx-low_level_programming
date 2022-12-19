#include "main.h"
#include <stdio.h>
/**
* ptr = _strpy - (first, solve the problem. Then, write the code\n)
* Return value: the pointer to dest
*
*/

char *_strcpy(char *dest, char *src)
{
int count = 0, i;

	while (*src)
	{
	src++;
	count++;
}

	for (i = 0; i < count; i++)
	src--;
	for (i = 0; i < count; i++)
	{
	dest[i] = *src;
	src++;
	}
	dest[i] = *src;

	return (dest);
}
