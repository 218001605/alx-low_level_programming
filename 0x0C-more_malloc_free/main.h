#ifndef MAIN_H
#define MAIN_H

#include <std.h>
#include <stdlib.h>
#include <limits.h>

int_putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int memb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsignedmint old_size, unsigned int new_size);

#endif
