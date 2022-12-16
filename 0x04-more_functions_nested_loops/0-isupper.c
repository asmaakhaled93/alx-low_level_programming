#include "main.h"
#include <stdio.h>

/**
 *_isupper - checks if the character is uppercase
 *@c:  is the int that will use for the argument of the function
 *Return: 1 if uppercase character 0 if not
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isuper = 0;
	for (; uppercase <= 'z'; uppercase++)
	{
	if (c == uppercase)
	{
	isupper = 1;
break;
	}
	}
	return (isuper);
}
