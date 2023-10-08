#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of length of s2 to be concatenated
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat_str;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (m = 0; s1[m] != '\0'; m++)
		s1_len++;
	for (m = 0; s2[m] != '\0'; m++)
		s2_len++;

	cat_str = malloc(sizeof(char) * ((s1_len + n) + 1));

	if (cat_str == NULL)
		return (NULL);
	if (n >= s2_len)
	{
		for (m = 0; s1[m] != '\0'; m++)
			cat_str[m] = s1[m];
		for (m = 0; s2[m] != '\0'; m++)
			cat_str[s2_len + m] = s2[m];
		cat_str[s2_len + m] = '\0';
	}
	else
	{
		for (m = 0; s1[m] != '\0'; m++)
			cat_str[m] = s1[m];
		for (m = 0; m < n; m++)
			cat_str[s1_len + m] = s2[m];
		cat_str[s1_len + m] = '\0';
	}
	return (cat_str);
}
