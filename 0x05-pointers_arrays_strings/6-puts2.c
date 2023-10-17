#include "main.h"
/**
 * puts2 - this is our magic tool. it shows every other character
 * @str: this is our long string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i = i + 2;
	}
	putchar('\n');
}
