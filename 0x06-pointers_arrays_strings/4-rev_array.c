#include "main.h"
/**
 * reverse_array - a fuction that reverses content of array
 *
 * @a: array to reversed
 * @n: number of ele,ents in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, k, tmp;

	k = n - 1;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[k];
		a[k--] = tmp;
		i++;
	}
}
