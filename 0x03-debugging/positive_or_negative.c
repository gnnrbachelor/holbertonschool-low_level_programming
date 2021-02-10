#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *  * main - Entry point
 *   * @void: no parameter
 *    *
 *     * Description: Prints whether number is positive, negative, or 0.
 *      * Return:  0
 *       */

int positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else
		printf("%i is negative\n", i);
	return (0);
}

