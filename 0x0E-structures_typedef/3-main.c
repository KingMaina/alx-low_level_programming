#include <stdio.h>
#include "dog.h"

/**
* main - run the application
*
* Return: Always 0, otherwise error
*/
int main(void)
{
	dog_t my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Andrew";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	return (0);
}
