#include "main.h"

#define SIZE_ONE_BYTE 1

/**
 * _strlen - Gets the length of a string
 * @s: string
 *
 * Return: The length of a string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
* argstostr - concatenates all the arguments of a program
* @ac: Number of arguments to the program
* @av: NULL terminated list of the program's arguments
*
* Return: Void.
*/
char *argstostr(int ac, char **av)
{
	char *newString = NULL, *arg;
	size_t totalLength = 0, argLength = 0, index;
	int i;

	if (ac <= 0 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		argLength = _strlen(av[i]);
		totalLength += argLength + SIZE_ONE_BYTE;
	}
	newString = malloc(sizeof(*newString) * totalLength + SIZE_ONE_BYTE);
	if (!newString)
		return (NULL);
	index = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			newString[index++] = *arg;
			arg++;
		}
		newString[index++]  = '\n';
	}

	newString[totalLength] = '\0';
	return (newString);
}
