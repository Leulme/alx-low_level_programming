# include <stdio.h>
/**
 * main -  is the main function
 * Descitption: prints alphabets
 * Return: int value of 0
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i == 57)
{
continue;
}
putchar(44);
putchar(32);
}
putchar(10);
return (0);
}
