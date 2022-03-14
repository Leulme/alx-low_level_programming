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
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar(10);
return (0);
}
