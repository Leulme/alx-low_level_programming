# include <string.h>
# include "main.h"
/**
 * _strncat - is a function
 * @dest: is a pointer variable
 * @src: is a a pointer variable
 * @n: is an integer varibale
 * Description: concatenates two strings
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);

}
