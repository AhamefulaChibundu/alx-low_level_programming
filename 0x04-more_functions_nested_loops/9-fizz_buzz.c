#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: A program that prints from 1 to 100
 * prints Fizz if number is a multiple of 3
 * prints Buzz if number is a multiple of 5
 * prints FizzBuzz if number is a multiple of both 3 and 5
 *
 * Return: Always 0
 */

int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if ((numbers % 5 == 0) && (numbers % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (numbers % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (numbers % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", numbers);
		}
	}
	printf("\n");
	return (0);
}
