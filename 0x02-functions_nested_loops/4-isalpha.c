#include "main.h"
/**
 * _isalpha - function here
 * Description: function to check if it is alpha or not
 * @c: parameter here
 * Return: 1 if it is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
