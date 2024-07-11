#include "main.h"


/**
 * find_sqrt - finds the sqrt within a specified range.
 * @n1: number in question.
 * @st: start of range.
 * @end: end of range.
 * Return: the natural square of n.
 *
 */


int find_sqrt(int n1, int st, int end)
{
	int mid;

	if (st > end)
		return (-1);
	mid = (st + end) / 2;
	if (mid * mid == n1)
		return (mid);
	else if (mid * mid < n1)
		return (find_sqrt(n1, mid + 1, end));
	else
		return (find_sqrt(n1, st, mid - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * _find_sqrt - finds the sqrt within a specified range.
 * @n: number in question.
 * Return: the natural square of n.
 *
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0, n));
}
