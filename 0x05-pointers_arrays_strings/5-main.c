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

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	rev_string(str);

	return (0);
}
