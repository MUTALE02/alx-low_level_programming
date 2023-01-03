#include "main.h"
/**
* _strstr - Locates a sub str
* @haystack: String search
* @needle: substring located
* Return: Pointer resets location of substr
*	If not located - NULL
*/
char *_strstr(char *haystack, char *needle)
{
int index;

if (needle == 0)
return (haystack);
while (*haystack)
{
index = 0;
if (haystack[index] == needle[index])
do {
if (needle[index + 1] == '\0')
return (haystack);
index++;
}
while (haystack[index] == needle[index])
{
haystack++;
}
return ('\0')
}
