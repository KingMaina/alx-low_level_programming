#include <stdio.h>
#include "main.h"

/**
* main - entry point of application
*
* Return: Always 0
*/
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = leet(str);

	printf("%s\n", ptr);
	printf("%s\n", str);

	return (0);
}
