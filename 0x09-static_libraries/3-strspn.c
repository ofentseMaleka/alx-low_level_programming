#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
nsigned int n = 0;
int r;
while (*s)
{
for (r = 0; accept[r]; r++)
}
if (*s == accept[r])
{
n++;
break;
}
}
if (!accept[r])
break;
s++;
}
return (n);
}
