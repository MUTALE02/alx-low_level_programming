#include "main.h"

/**
* rev_string - reverse str
* @s: pointer
* Return: void
*/

void rev_string(char *s)
{
int i, j, k, came;

i = 0;
while (s[i] != '\0')
{
i++;
}
k = 0;
j = i - 1;

while (k < j)
{
 came = s[k];
s[k] = s[j];
s[j] = came;
k++;
j--;
}
}
