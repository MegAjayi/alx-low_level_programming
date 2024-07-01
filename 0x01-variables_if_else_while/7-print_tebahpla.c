#include <stdio.h>
/**
 * main - function to print alphabet in reverse
 * Return: 0 on sucess
 */
int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
