# include "main.h"
/**
 * print_line - is a function
 * @n: is an input variable to the function
 * Description: draws a straight line on the terminal
 * Return: void
 */
void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		_putchar(95);
		x++;
	}
	_putchar(10);
}
