#include <stdio.h>
#include "main.h"

/**
 * main - Enty point of application.
 *
 * Description: Runs a program to print the sum of two integers.
 * Return: 0 (Success)
 */
int main(void)
{
	int r;

	r = add(50, 75);
	printf("%d\n", r);

	return (0);
}
