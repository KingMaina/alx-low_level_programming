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
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
