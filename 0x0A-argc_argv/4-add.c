#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of application.
* @argc: number of arguments including the program name
* @argv: arbitrary number of string arguments
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (**(argv + i) >= '0' && **(argv + i) <= '9')
				sum += atoi(argv[i]);
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
