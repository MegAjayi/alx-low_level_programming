#include "main.h"
/**
 * more_numbers - main function
 * Description: thisfunction to print alphabet from 0-14*10
 * Return: void on success
 */
void more_numbers(void)
{
	int i;
	int c;
	int b;
	int d;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{

			b = c / 10;
			d = c % 10;

			if (c >= 10)

				_putchar(b + '0');
			_putchar(d + '0');
		}
		_putchar('\n');
	}
}
