#ifndef BIT_MAN_H
#define BIT_MAN_H

#include <stdio.h>

unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *, unsigned int);
unsigned int flip_bits(unsigned long int, unsigned long int);
int get_endianness(void);

#endif /* #ifndef BIT_MAN_H */
