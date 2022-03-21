# include "main.h"
/**
 * swap_int - is a function
 * @a: is a variable
 * @b: is another variable that is
 * input to the swap_int function
 * Description: swaps the value pointed
 * by a with b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
