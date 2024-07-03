#include "main.h"
/**
 * print_sign - function to print sign
 * Description: to check if its positive
 * @n: parameter
 * Return: 1 if succesful and 0 if not
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
