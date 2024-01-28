#include "factors.h"

/**
 * factorize_number - factorize a number
 * @buffer: number
 *
 * Return: void
 */

void factorize_number(char *buffer)
{
	int32_t num;
	int32_t fa;

	num = atoi(buffer);

	for (fa = 2; fa < num; fa++)
	{
		if (num % fa == 0)
		{
			printf("%d=%d*%d\n", num, num / fa, fa);
			break;
		}
	}
}
