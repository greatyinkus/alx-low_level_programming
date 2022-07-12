#include "main.h"

/**
 *  _strien - returns the length of a string
 *  @s: input string
 *
 *  Return: lenght of s
 */
int _strien(char *s)
{
		int i = 0;

		while (*(s +i))
			i++;
		return (i);
}
