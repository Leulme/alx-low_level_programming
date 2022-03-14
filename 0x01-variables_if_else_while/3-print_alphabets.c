# include <stdio.h>
/**
 * main -  is the main function
 * Descitption: prints alphabets
 * Return: int value of 0
 */
int main(void)
{
int i = 97;
while (i < 123)
{
putchar(i);
i++;
if (i == 123)
{
i = 65;
}
if (i == 91)
{
break;
}
}
putchar(36);
putchar(10);
return (0);
}
