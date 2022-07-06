#include <stdio.h>

<<<<<<< HEAD


/**
 *
 * * main - causes an infinite loop
 *
 * * Return: 0
 *
 * */



int main(void)

{

	        int i;



		        printf("Infinite loop incoming :(\n");



			        i = 0;



				        while (i < 10)

						        {

								                putchar(i);

										        }



					        printf("Infinite loop avoided! \\o/\n");



						        return (0);
=======
/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;

/*
*while (i < 10)
*{
* putchar(i);
*}
*/

printf("Infinite loop avoided! \\o/\n");
return (0);
>>>>>>> 5f89b1ba266dea9fc690cb05c136577935ab9fec

}
