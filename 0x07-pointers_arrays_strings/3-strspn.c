#include "main.h"
/**
 * _strspn - prints the consecutive char of s1 that are in s2
 * main - check the code
 * @accept: searching
 * @s: source
 * Return: n str
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (j = 0; *(s + j); j++;
{
for (i = 0; *(accept + i); i++)
}
if (*(s + j) == *(accept + i))
break;
{
if (*(accept + i) == '\0')
break;
}
return (j);
}
