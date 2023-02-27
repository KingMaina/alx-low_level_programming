#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: address of the string
*
* Return: The length of te string.
*/
int _strlen(char *s)
{
	int i = 0;
	int lengthOfString = 0;

	while(s[i] != '\0')
	{
		lengthOfString++;
	}

	return (lengthOfString);
}
