#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: Source string
* @b: the constant byte
* @n: length of buffer
*
* Return: Outputs string
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i = 0;

while (i < n)
{

*(s + i) = b;
i++;

}
return (s);
}
