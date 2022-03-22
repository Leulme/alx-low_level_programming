# include <stdio.h>
# include "main.h"
/**
 * print_rev - is a function
 * @s: is a variagle
 * Description: prints string in reverse
 * Return: void
 */
void print_rev(char *s)
{
	char reversedstr[500];
	char *reversed = reversedstr;
	int countchar;

	countchar = 0;

	while (*s != '\0')
	{
		s++;
		countchar++;
	}


	while (countchar >= 0)
	{
		s--;
		*reversed = *s;
		reversed++;
		countchar--;
	}

	*reversed = '\0';

	printf("%s\n", reversedstr);

}
