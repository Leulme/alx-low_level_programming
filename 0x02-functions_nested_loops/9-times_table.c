# include <stdio.h>
# include "main.h"
/**
 * times_table - function that prints lower case alphabets
 * Description: prints alphabets
 * Return: returns void
 */
void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if ((i * j < 10))
{
printf("%d,  ", i * j);
}
printf("%d, ", i * j);
}
printf("\n");
}
}
