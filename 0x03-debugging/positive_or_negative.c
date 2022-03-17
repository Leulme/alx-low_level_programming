# include "main.h"
/**
 * positive_or_negative - is the main function
 * @n: value
 * Description: positive or negative
 * Return: returns int value of 0
 */

void positive_or_negative(int n)
{
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
else
{
	printf("%d is zero\n", n);
}
}
