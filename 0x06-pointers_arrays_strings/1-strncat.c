#include "main.h"

/**
* _strncat - Concatenates two strings unsing at most
*		an inputted number of bytes from src.
* @dest: The string to be appended upon.
* @scr: The string to be appended to dest.
* @n: The number of bytes from src to be appended to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
