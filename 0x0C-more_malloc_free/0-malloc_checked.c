#include <stdlib>
#include "main.h"
/**
 **malloc_checked-memory using malocc
 *@b: number of bytes to alocate
 *
 *return:  pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
