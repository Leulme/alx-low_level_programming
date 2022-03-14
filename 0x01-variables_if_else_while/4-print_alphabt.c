# include <stdio.h>
/**
 * main -  is the main function
 * Descitption: prints alphabets
 * Return: int value of 0
 */
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if (i == 101 || i == 113)
{
continue;
}
putchar(i);
}
putchar(10);
return (0); }
