#include <stdio.h>

/**
* main - Entry point of application.
* @argc: number of arguments including the program name
* @argv: arbitrary number of string arguments
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	if (argc && *argv)
		printf("%d\n", argc - 1);

	return (0);
}
