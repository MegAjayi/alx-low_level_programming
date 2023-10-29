#include "main.h"

/**
* print_alphabet - function to print
*
* Return: always return 0 on sucesses
*/

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar (n);
	}
	_putchar ('\n');
}
