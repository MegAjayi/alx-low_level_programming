#include "main.h"
/**
 * print_alphabet_x10 - to print alphabet 10x
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	char ay;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ay = 'a'; ay <= 'z'; ay++)
		{
			_putchar(ay);
		}
		_putchar('\n');
	}
}
