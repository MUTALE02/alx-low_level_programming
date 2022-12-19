#include "main.h"
#include <stdio.h>
/**
* _strcpy - function that copies string
* @dest: pointer to destination char
* @src: pointer to source char
* Return: char
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
