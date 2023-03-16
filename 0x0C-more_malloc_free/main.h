#ifndef __MORE_MALLOC__
#define __MORE_MALLOC__

void *malloc_checked(unsigned int b);
int _putchar(char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
/* void simple_print_buffer(char *buffer, unsigned int size);*/
int *array_range(int min, int max);
void simple_print_buffer(int *buffer, unsigned int size);

#endif
