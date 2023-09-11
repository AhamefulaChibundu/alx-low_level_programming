#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int nums = 0;

	char hex_nums;

	while (nums <= 15)
	{
		if (nums <= 9)
		{
			hex_nums = nums + '0';
		}
		else
		{
			hex_nums = nums - 10 + 'a';
		}
		putchar(hex_nums);
		nums++;
	}
	putchar('\n');
	return (0);
}
