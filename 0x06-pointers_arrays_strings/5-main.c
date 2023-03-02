#include <stdio.h>
#include "main.h"

/**
* main - entry point of application
*
* Return: Always 0
*/
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	char *ptr1 = s1;
	char *ptr2 = s2;

	ptr1 = string_toupper(s1);
	ptr2 = string_toupper(s2);
	printf("%s", s1);
	printf("%s\n", ptr1);
	printf("%s", s2);
	printf("%s\n", ptr2);

	return (0);
}
