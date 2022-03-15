# include <stdio.h>
# include "main.h"
/**
 * print_to_98 - is a function
 * @n: is a input variable to the function
 * Description: calculate absolute value of a number
 * Return: void
 */
void print_to_98(int n)
{
if (n >= 98)
{
int i;
for (i = n; i > 97; i--)
{
if (i == 98)
{
printf("%d", i);
}
else
{
printf("%d, ", i);
}
}
printf("\n");
}
else
{
int j;
for (j = n; j < 99; j++)
{
if (j == 98)
{
printf("%d", j);
}
else
{
printf("%d, ", j);
}
}
printf("\n");
}
}
