#include <stdlib.h>

/**
 * _strdup - Entry point of function
 * Description: Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *pt_str;
	int m, str_len = 0;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		str_len++;

	pt_str = malloc((sizeof(char) * str_len) + 1);

	if (pt_str == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)
		pt_str[m] = str[m];

	pt_str[str_len] = '\0';

	return (pt_str);
}
