#include "main.h"
/**
 * binary_to_uint -  a function that converts a
 * binary number to an unsigned int
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int binary_base_two, length = 0;
	unsigned int cn_ui = 0;

	if (!b)
		return (0);
	while (b[length] != '\0')
	{
		length++;
	}

	for (length--, binary_base_two = 1; length >= 0;
			length--, binary_base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			cn_ui += binary_base_two;
		}
	}

	return (cn_ui);
}
