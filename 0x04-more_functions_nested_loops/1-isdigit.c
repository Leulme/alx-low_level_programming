# include "main.h"
/**
 * _isdigit - is a funciton
 * @c: is a variable input
 * Description: checks if c is a digit
 * Return: integer value of 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
