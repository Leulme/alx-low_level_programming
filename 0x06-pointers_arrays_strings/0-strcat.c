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
	size_t des_len;
	size_t i;

	des_len = strlen(dest);
	for (i = 0; *src != '\0'; i++)
	{
		dest[des_len + i] = src[i];
	}

	return (dest);
}
