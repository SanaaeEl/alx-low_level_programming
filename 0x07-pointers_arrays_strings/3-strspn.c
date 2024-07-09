#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to scan.
 * @accept: string to check from.
 * Return: returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, tmp, occur = 0;

	while (s[i] != '\0')
	{
		j = 0;
		tmp = occur;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				occur++;
				break;
			}
			/**
			 * printf("nb of occurances (s[%u] & accept[%u] : %u\n", i, j, occur);
			 */
			j++;
		}
		if (accept[j] == '\0' && tmp == occur)
		{
			/**
			 * printf("END OF SECOND LOOP\N");
			 */
			break;
		}
		i++;
	}
	return (occur);
}
