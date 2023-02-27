#include <stdio.h>
#include "main.h"

/**
* main - entry point of application.
*
* Return: Always 0
*/
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("String length = %d\n", len);

	return (0);
}
