/*
* File: 3-strspn.c
* Auth: For everyone trying to learn
*
*/
#include "main.h"
/**
* _strspn - Gets the length of pref substr
* @s: The string will searched
* @accept: The pref measured
* Return: Number of bytes in str which consists bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}
else if (accept[index + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
