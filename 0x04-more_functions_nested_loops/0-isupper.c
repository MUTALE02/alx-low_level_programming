#include <stdio.h>

/**
 * _isupper - checks whether a character is uppercase or lowercase
 * @c: char to be checked
 * Return: 0 or 1
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')

return (1);

else

return (0);
}
