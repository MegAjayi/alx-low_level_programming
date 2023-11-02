#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked  - allocated memory using malloc
 * @b: size of the memory
 * Return: pointer to new memory allocated
 */
void *malloc_checked(unsigned int b)
{
	char *opt;

	opt = malloc(b);

	if (opt == NULL)
	exit(98);
	else
		return (opt);
}
