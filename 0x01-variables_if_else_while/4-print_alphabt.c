#include <stdio.h>
/**
 * main - function to print all alphabet except e and q
 * Return: 0 on success
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s != 'e' && s != 'q')
		{
			putchar(s);
		}
	}
	putchar('\n');
	return (0);
}
