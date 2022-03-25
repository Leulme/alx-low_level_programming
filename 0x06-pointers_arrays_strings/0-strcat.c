# include <string.h>
# include "main.h"
/**
 * _strcat - is a function
 * @dest: is a variable
 * @src: is another variable
 * Description: it concatenate two strings
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{

	strcat(dest, src);
	return (dest);
}
