#include <stdio.h>
/**
 * main - function to print hexadecimal number to base16
 * Return: 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
