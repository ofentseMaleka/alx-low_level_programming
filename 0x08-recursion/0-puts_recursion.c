#include "main.h"
/**
 * _puts_recursion - function puts();
 *@s: firs input
 *return: return 0 for success
 */
int _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
return (0);
}
}
