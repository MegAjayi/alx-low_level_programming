#include <stdio.h>
/**
 * main - print is name followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: array that contains the command line array
 *
 * Return: (0) when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
