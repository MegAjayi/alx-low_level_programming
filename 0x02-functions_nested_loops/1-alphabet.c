#include "main.h"
/**
 * print_alphabet - funtion to print alphabet
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char ayo;

	for (ayo = 'a'; ayo <= 'z'; ayo++)
	{
		_putchar(ayo);
	}
	_putchar('\n');
}
