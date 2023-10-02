#include "main.h"

/**
 * *_strcpy - Entry point
 *
 * Description: Copies the string pointed to by scr
 * including the terminating null byte (\0)
 *
 * @src: Source where the data is to be copied from
 * @dest: Destination of the copied data
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}
	dest[s] = '\0';
	return (dest);
}
