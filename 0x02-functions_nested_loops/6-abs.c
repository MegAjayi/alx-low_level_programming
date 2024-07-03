#include "main.h"
/**
 * _abs - function to check positive
 * Description: to check if is a positive
 * @n: paremeter to be considered
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;


		abs_val = n * -1;
		return (abs_val);
	}
	else
	{
		return (n);
	}
}
