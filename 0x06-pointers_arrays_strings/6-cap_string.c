# include "main.h"
/**
 * cap_string - is a function
 * @str: is a pointer variable
 * Description: capitalize lowercases
 * Return: pointer
 */
char *cap_string(char *str)
{
	int i, z;

	for (i = 0; str[i] != '\0'; i++)
	{
		z = (int)(str[i]);
		if (i == 0)
		{
			if (z >= 97 && z <= 122)
			{
				z = z - 32;
				str[i] = z;
			}
		}
		else
		{
			if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}') && (z >= 97 && z <= 122))
			{
				z = z - 32;
				str[i] = z;
			}
			else
			{
				continue;
			}
		}
	}
	return (str);
}
