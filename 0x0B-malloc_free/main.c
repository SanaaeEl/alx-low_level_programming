#include "main.h"



/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */


/**
 *  * print_tab - Prints an array of string
 *   * @tab: The array to print
 *    *
 *     * Return: nothing
 *      */
void print_tab(char **tab)
{
	    int i;

	        for (i = 0; tab[i] != NULL; ++i)
			    {
				            printf("%s\n", tab[i]);
					        }
}




int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
