#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _isdigit - checks for a digit
* @c: integer
*
* Return: 1 if true, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
* main - Entry point of application.
* @argc: number of arguments including the program name
* @argv: arbitrary number of string arguments
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i, j, isDigit, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				isDigit = _isdigit(argv[i][j]);
				if (isDigit == 0)
					break;
			}
			if (isDigit)
				sum += (atoi(argv[i]));
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
