# include <string.h>
# include "main.h"
/**
 * _strncpy - is a function
 * @dest: is a variable
 * @src: is another variable of type pointer
 * @n: is an integer variable
 * Description: copies string
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
