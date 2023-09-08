#include "main.h"

/**
* main - Entry of application
*
* Return: Always 0 if success, otherwise error
*/
int main(void)
{
	int n = get_endianness();

	if (n != 0)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");

	return (0);
}
