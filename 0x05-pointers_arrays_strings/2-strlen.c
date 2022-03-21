# include <stdio.h>
# include <stdlib.h>
# include "main.h"
/**
 * _strlen - is a function
 * @s: is a variable
 * Description: returns the len of a string
 * Return: integer value
 */

int _strlen(char *s)
{
    int x;

    x = sizeof(*s) / 8 + 16;
	return (x);
}
