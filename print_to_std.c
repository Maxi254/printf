#include "main.h"
/**
 * writer - write to a char
 * @character: char to O.
 * Return: sucess
 */

int writer(char character)
{
	return (write(1, &character, 1));
}
