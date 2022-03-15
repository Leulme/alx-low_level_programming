# include <stdio.h>
# include "main.h"
/**
 * jack_bauer - function that prints lower case alphabets
 * Description: prints alphabets
 * Return: returns void
 */
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 5; j++)
{
for (k = 0; k < 6; k++)
{
for (l = 0; l < 10; l++)
{
printf("%d%d:%d%d\n", i, j, k, l);
}
}
}
}
}
