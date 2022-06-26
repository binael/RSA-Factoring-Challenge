#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* rsa_prime - prints the prime numbers on the screen
* @number: char number to check
*
* Return:  0 (success), 1 (failure)
*/

int rsa_prime(char *number)
{
	unsigned long long num, i;

	if (strlen(number) > 20)
		return (1);

	num = atoll(number);
	i = 3;

	if (num < 4)
	{
		printf("%llu=%llu*%d\n", num, num, 1);
		return (0);
	}

	if (num % 2 == 0)
	{
		printf("%llu=%llu*%d\n", num, (num / 2), 2);
		return (0);
	}


	while ((i * i) <= num)
	{
		if (num % i == 0)
		{
			printf("%llu=%llu*%llu\n", num, (num / i), i);
			return (0);
		}
		i += 2;
	}

	return (0);
}
