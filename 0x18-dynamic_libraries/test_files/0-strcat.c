#include "main.h"

/**
 * *_strcat - Entry point of function
 *
 * Description: Concatenates two strings overwriting the null byte
 *
 * @src: string to be appended
 * @dest: where the string is being appended to
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_length = 0;
	int m;

	for (m = 0; dest[m] != '\0'; m++)
	{
		dest_length++;
	}
	for (m = 0; src[m] != '\0'; m++)
	{
		src_length++;
	}
	for (m = 0; m <= src_length; m++)
	{
		dest[dest_length + m] = src[m];
	}
	return (dest);
}
