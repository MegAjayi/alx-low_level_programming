#include "main.h"
/**
 * _isupper - function to check if upper or not
 * Description: to check if it is upper or not
 * @c: paremeter in the program
 * Return: 1 if it is upper 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
