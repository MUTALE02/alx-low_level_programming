#include <unistd.h>

/**
* _putchar - outputs char c to stdout
* @c: The char to outputs
* 
* Return: 1
* On error, -1 is returned & errno is set appropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
