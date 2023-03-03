#include <stdio.h>
#include "main.h"

/**
* main - entry point of application
*
* Return: Always 0
*/
int main(void)
{
	char str[] = "Expect the best. (Prepare for th3 w0rst). \"Capitalize\" on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = rot13(str);
	printf("%s", ptr);
	printf("--------------------------------------------------\n");
	printf("%s", str);
	printf("--------------------------------------------------\n");
	ptr = rot13(str);
	printf("%s", ptr);
	printf("--------------------------------------------------\n");
	printf("%s", str);
	printf("--------------------------------------------------\n");
	ptr = rot13(str);
	printf("%s", ptr);
	printf("--------------------------------------------------\n");
	printf("%s", str);

	return (0);
}
