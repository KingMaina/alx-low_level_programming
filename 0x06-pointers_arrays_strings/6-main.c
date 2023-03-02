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

	ptr = cap_string(str);

	printf("%s\n", cap_string(ptr));
	printf("%s\n", cap_string(str));

	return (0);
}
