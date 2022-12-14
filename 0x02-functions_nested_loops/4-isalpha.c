#include "main.h"

/**
* _isalpha - check for char alphabet
* @c: the char to br checked
* Return: 1 if char is lower or upper case letter, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
