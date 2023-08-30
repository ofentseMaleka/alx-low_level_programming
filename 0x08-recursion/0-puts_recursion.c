#include "main.h"
/**
 * _puts_recursion - function that fills memory with a constant byte
 *@s: first value
 *
 */
void _puts_recursion(char *s)
{
if (*s == '\0') {
_putchar('\n'); // Assuming _putchar is defined in main.h
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
