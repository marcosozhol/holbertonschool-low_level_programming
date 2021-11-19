#ifndef BIT_MANIPULATION
#define BIT_MANIPULATION
#include <unistd.h>
int _putchar (char);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
