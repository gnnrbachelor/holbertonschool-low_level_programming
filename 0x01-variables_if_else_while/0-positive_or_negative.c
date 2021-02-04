#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * @void: no parameter
 *
 * Description: Prints whether number is positive negative or 0.
 * Return:  0
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive");
	else if (n == 0)
		printf("%i is zero");
	else
		printf("%i is negative");
	return (0);
}
