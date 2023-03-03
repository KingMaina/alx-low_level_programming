#include "main.h"

/**
* rot13 - encodes and/or decodes a string using the ROT13 cipher.
* @s: The string to encode and/or decode.
*
* Return: a pointer to the encoded/decoded string.
*/
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			s[i] += 13;
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] -= 13;
	}

	return (s);
}
