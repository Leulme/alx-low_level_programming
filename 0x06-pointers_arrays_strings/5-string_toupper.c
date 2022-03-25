# include <string.h>
# include "main.h"
/**
 * string_toupper - is a function
 * @str: is a pointer variable
 * Description: changes lowercase
 * to uppercase
 * Return: pointer
 */
char *string_toupper(char *str)
{
	int i, z;

	for (i = 0; (str[i] != '\0'); i++)
	{
		z = (int)((str[i]));
		if (z >= 97 && z <= 122)
		{
			z = z - 32;
			str[i] = z;
		}
	}
	return (str);
}
