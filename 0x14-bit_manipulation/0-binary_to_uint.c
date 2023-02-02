#include "main.h"

/**
 * power - a function that return a power of a number
 *
 * @a: an integer Base
 * @b: an integer exponent
 *
 * Return: the a ^ b
 *
 */
int power(int a, int b)
{
	if (b == 0)
		return (1);
	else
		return (power(a, b - 1) * a);
}

/**
 * binary_to_uint - convert binary ot decimal
 *
 * @b: a string that contain binary number
 *
 * Return: a number,
 * 0 if b is null
 * 0 if b contain any lettre that is not 0 or 1
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i, j, k;
	int count = 0;

	/* print thr count of the string b */
	for (j = 0; b[j] != '\0'; j++)
		count++;
	/* printf("count = %d\n", count); */
	for (i = count - 1, k = 0; i >= 0; i--, k++)
	{
		/* printf("d[%d] = %d\n", i, b[i]); */
		if (!b[i] || (b[i] != 48 && b[i] != 49))
			return (0);
		else if (b[i] == 49)
			/* printf("%s = %d\n", b, b[i]);*/
			decimal += power(2, k);
	}
	return (decimal);
}
