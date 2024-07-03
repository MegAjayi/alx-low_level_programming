#include "main.h"
/**
 * print_last_digit - function of the programme
 * Description: to print last digit of a number
 * @n: parameter of the programe
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digits;

	last_digits = n % 10;

	if (last_digits < 0)
	{
		last_digits = last_digits * -1;
		_putchar(last_digits + '0');
		return (last_digits);
	}
	else
	{
		_putchar(last_digits + '0');
		return (last_digits);
	}
}
