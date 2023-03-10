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
	int cents = 0, cash;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cash = atoi(argv[1]);

	if (cash < 0)
		printf("%d\n", 0);
	else
	{
		while (cash)
		{
			if (cash - 25 >= 0)
				cash -= 25;
			else if (cash - 10 >= 0)
				cash -= 10;
			else if (cash - 5 >= 0)
				cash -= 5;
			else if (cash - 2 >= 0)
				cash -= 2;
			else if (cash - 1 >= 0)
				cash -= 1;
			cents++;
		}
	}
	printf("%d\n", cents);
	
	return (0);
}
