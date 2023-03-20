#include <stdio.h>
#include "dog.h"

/**
* main - run the application
*
* Return: Always 0, otherwise error
*/
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Andrew";
	print_dog(&my_dog);

	return (0);
}
