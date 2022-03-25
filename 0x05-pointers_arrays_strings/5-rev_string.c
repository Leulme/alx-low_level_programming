# include <stdio.h>
# include "main.h"
/**
 * rev_string - is a function
 * @s: is a variable
 * Description: reverse a string
 * Return: void
 */
void rev_string(char *s)
{
int count;
int i, j;
char reversedstr[500];

count = 0;
while (*s != '\0')
{
s++;
count++;
}
for (i = 0; i <= count; i++)
{
s--;
}

for (j = 0; j < count; j++)
{
reversedstr[j] = s[i];
printf("%c", reversedstr[j]);
}


}
