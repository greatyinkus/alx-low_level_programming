<<<<<<< HEAD
lude <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  * main - Determine if a random number is positive, negative or zero.
 *   *
 *    * Return: 0 on success
 *     */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
					if (n < 0)
							{
										printf("%d is negative\n", n);
											}
						else if (n > 0)
								{
											printf("%d is positive\n", n);
												}
							else
									{
												printf("%d is zero\n", n);
													}
								return (0);

}
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)

{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}

>>>>>>> f3da599ab872c55dc56ac48d3c19f4cfc05db003
