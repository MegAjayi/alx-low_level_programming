#include <stdio.h>
/**
 * main - function to print alphabet in capital and small
 * Return: 0  on success
 */
int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
	putchar(m);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
	putchar(m);
	}
	putchar('\n');
	return (0);
}
