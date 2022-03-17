# include "main.h"
/**
 * print_triangle - is a function
 * @size: is a variable that is
 * input for the function
 * Description: Prints triagle shape
 * based on the size give
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < (size - (i + 1)); k++)
			{
				_putchar(32);
			}
			for (j = 0; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
