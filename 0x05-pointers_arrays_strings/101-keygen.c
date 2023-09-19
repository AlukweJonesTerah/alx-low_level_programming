#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme.
 * Description: returns a andom number
 * Return: 0 when success
 */
int main(void)
{
	char password[84];
	int i = 0, j = 0, a, b;

	srand(time(NULL));
	while (j < 2772)
	{
		password[i] = 33 + rand() % 98;
		j += password[i++];
	}
	password[i] = '\0';
	if (j != 2772)
	{
		a = (j - 2772) / 2;
		b = (j - 2772) / 2;
		if ((j - 2772) % 2 != 0)
		a++;
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + a))
			{
				password[i] -= a;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + b))
			{
				password[i] -= b;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
