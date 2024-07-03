#include "main.h"
/**
 * _islower - function to check if it a lower letter or not
 * Description: function to check lower character
 * @c: peremeter to check
 * Return: 0 if its lower and 1 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
