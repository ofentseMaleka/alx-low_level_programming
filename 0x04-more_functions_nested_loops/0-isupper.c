#include "main.h"

/**
 * _isupper - checks for lowercase charectors
 * @c:the charector to be checked
 * return: 1 for uppercase charector or 0 for anything else
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
