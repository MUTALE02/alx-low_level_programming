#include "main.h"
/**
* _strpbrk - Searches in a string for a set of bytes
* @s: The string is searched
* @accept: The set of bytes
*
* Return: a set of bytes
*	If no march - NULL
*/
char *_strpbrk(char *s, char *accept)

{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
