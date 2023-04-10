#include "main.h"

/**
* main - Entry of application
* @ac: number of arguments including main function
* @av: array of pointers to string arguments
*
* Return: Always 0 if success, otherwise error
*/
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);

	return (0);
}
