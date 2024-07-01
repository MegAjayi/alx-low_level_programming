#include <stdio.h>
/**
 * main - function to print small letter a to z
 * Return: 0 on sucess
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
