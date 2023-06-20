#include "main.h"
/**
 * _islower - checks for lower case characters
 * Return: 1 if its lower else resturn 0.
 * @c : its the character to be checked.
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);


}
