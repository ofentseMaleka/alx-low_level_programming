#include "main.h"

/**
 * print sign - print the sign of a number
 * @n: the number to be checked
 * return: 1 positive numbers, -1 negative numbers or zero for els
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}

}
