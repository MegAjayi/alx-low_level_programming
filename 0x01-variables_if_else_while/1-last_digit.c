#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to check the last digit ofa number
 * Return: 0 on sucess
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = (n % 10);

	if (ld > 5)
	{
		printf("Last digit of %d is %d is greater than 5\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d  is less than 6 and not 0\n", n, ld);
	}
	else
		printf("last digit of %d is %d  is 0\n", n, ld);
	return (0);
}
