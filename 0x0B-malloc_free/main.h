#ifndef __MALLOC_FREE__
#define __MALLOC_FREE__

#include <stdio.h>
#include <stdlib.h>

#define SIZE_NULL_BYTE 1

int _putchar(char c);
char *create_array(unsigned int size, char *c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
void simple_print_buffer(char *buffer, unsigned int size);

#endif /* #ifndef__MALLOC_FREE__*/_
