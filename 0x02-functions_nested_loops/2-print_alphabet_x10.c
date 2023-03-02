#include "main.h"

/** print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j, x;

	for (x = 0; x < 10; x++)
	{
	for (j ='a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	}
}	
