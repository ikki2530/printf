#include "holberton.h"
/**
 * rev_string -  reverse a string
 * @s: string to reverse
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j, itr;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;
	if (i % 2 == 0)
		itr = i / 2;
	else
		itr = (i / 2) + 1;
	for (j = 0; j < itr; j++)
	{
		temp = s[i - j];
		s[i - j] = s[j];
		s[j] = temp;
	}
}
