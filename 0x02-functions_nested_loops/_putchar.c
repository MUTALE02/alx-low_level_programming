#include "main.h"
#include <unistd.h>
/**
* _putchar - prints the character  to stdout
* @c: The character to print
*
* Return: On true 1.
*On error, -1 is Returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
