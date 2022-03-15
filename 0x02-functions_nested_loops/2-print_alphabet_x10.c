# include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10x
 * Description: printing alphabets 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
int j;
for (j = 97; j < 123; j++)
{
_putchar(j);
}
_putchar(10);
i++;
}
}

