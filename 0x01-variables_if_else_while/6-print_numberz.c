#include <stdio.h>
/**
 * main - function is to print numbers using putchar
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar (i + '0');
	}
	putchar('\n');
	return (0);
}
