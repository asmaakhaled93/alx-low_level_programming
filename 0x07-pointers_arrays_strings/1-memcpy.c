#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return:dest.
 */


	char *_memcpy(char *dest, char *src, unsigned int n)

{ 
	unsigned int  i;

	i = 0;
	while (i < n)

	{

		*(dest + i) = *(src + i);
		i++;

	}
	 
	return (dest);
}
