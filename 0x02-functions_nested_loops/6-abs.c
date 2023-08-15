#include "main.h"

/**
 * _abs - integer
 * @c: the number will result
 * return: the right number or zero
 */

int _abs(int c)

{
if (c < 0)
{
int abs_val;
abs_val = c + -1;
return (abs_val);
}
return (c);
}
