#include <stdio.h>
/**
 * main - function to print numbers
 * Return: 0 on suncess
 */
int main(void)
{
	int s;

	for (s = 0; s <= 9; s++)
	{
		putchar(s + '0');

		if (s < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
