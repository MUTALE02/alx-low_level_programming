#include "main.h"
/**
* malloc_checked - array to print a string
* @b: num of mem
* Return: void
*/

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
