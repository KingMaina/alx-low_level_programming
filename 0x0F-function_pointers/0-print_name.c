#include "function_pointers.h"
/**
* print_name - Prints a name
* @name: Name of a person
* @f: Callback function
*
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
