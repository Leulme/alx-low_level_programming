# include "main.h"
/**
 * leet - is a function
 * @str: is a pointer variable
 * Description: replace some letters
 * with numbers
 * Return: pointer
 */
char *leet(char *str)
{
	int i, z;
	int replace[128];

	replace[65] = 4;
	replace[69] = 3;
	replace[79] = 0;
	replace[84] = 7;
	replace[76] = 1;
	replace[97] = 4;
	replace[101] = 3;
	replace[111] = 0;
	replace[116] = 7;
	replace[108] = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
	z = (int)(str[i]);
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'o' || str[i] == 'T'
		|| str[i] == 'L' || str[i] == 'a' || str[i] == 'e' || str[i] == 'o'
		|| str[i] == 't' || str[i] == 'l')
		{
			str[i] = replace[z] + '0';
		}
		else
		{
			continue;
		}
	}
	return (str);

}
