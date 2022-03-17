# include "main.h"
/**
 * print_square - is a function
 * @size: is a variable
 * Description: draw square based on size
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		return;
	}
}
