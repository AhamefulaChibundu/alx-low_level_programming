#include <stdlib.h>

/**
 * str_concat - Entry point of function
 * Description: Concatenates two strings.
 * @s1: where s2 would be concatenated into
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat_str;
	int m, cat_m = 0, str_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] || s2[m]; m++)
		str_len++;

	cat_str = malloc(sizeof(char) * str_len);

	if (cat_str == NULL)
		return (NULL);

	for (m = 0; s1[m]; m++)
		cat_str[cat_m++] = s1[m];

	for (m = 0; s2[m]; m++)
		cat_str[cat_m++] = s2[m];

	return (cat_str);
}
