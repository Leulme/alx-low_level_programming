# include "main.h"
/**
 * print_diagonal - is a function
 * @n: is an input variable to the function
 * Description: Draws diagonal line
 * Retur: void
 */
void print_diagonal(int n)
{
	int x;
	int i;

	x = 0;
	if (n > 0)
	{
	while (x < n)
	{
		for (i = 0; i <= x; i++)
		{
			if (i == x)
			{
				_putchar(92);
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar(10);

		x++;
	}
	}
	else
	{
		_putchar(10);
	}
}
