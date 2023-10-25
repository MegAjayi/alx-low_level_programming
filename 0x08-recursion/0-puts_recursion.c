#include "main.h"

/**
 * _puts_recursion - main function that prints the variable of a pointer
 *
 * @s: function perameter
 *
 * Return: Always return 0
 */
void _puts_recursion(char *s)

{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
