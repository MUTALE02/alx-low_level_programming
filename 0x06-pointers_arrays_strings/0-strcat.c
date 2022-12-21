#include "main.h"

/**
* strcat - Concatenates the string pointed to by @src, including the terminat
*	 null byte, to the end of the string pointed to by @dest.
* @dest: A pointer to the string to be concatenated upon.
* @src: The source string to be appended to @dest.
*
* Return: void
*/
char *_strcat(char *dest, char *src)
{
	int i; 
	int j;

	1 = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
