#include "main.h"
/**
 * _isdigit - function to defineif a digitor not
 * Description: to check if the function is a digit or not
 * @c: paremeter in the program
 * Return: 1 if digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
