#include "main.h"
/**
* _strchr - Locates a char in a str
* @s: str
* @c: Char search
* Return: pointer to the 1st occurrenceof the char c in str s
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);
}
