#include "main.h"
/**
 * print_most_numbers - function of the program
 * Description: to print the number 0 -9 without 2,4
 * Return: 0 on sucess
 */
void print_most_numbers(void)
{
	char mac;

	for (mac = '0'; mac <= '9'; mac++)
	{
		if (mac != '2' && mac != '4')
		{
			_putchar(mac);
		}
	}
	_putchar('\n');
}
