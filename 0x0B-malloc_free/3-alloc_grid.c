#include <stdlib.h>

/**
 * alloc_grid - A 2 dimentional array
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **twoD_arr;
	int m, n;

	if (height <= 0 || width <= 0)
		return (NULL);

	twoD_arr = malloc(sizeof(int *) * height);

	if (twoD_arr == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		twoD_arr[m] = malloc(sizeof(int) * width);

		if (twoD_arr[m] == NULL)
		{
			free(twoD_arr);
			for (n = 0; n <= height; n++)
				free(twoD_arr[n]);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			twoD_arr[m][n] = 0;
	}
	return (twoD_arr);
}
