#include "main.h"


/**
 * _sqrt_recusion - returns the natural square root of a number.
 * @n: number in question.
 * Return: the natural square of n.
 */

int find_sq(int n, int st, int end)
{
	int mid;

	if (st > end)
		return (-1);
	mid = (st + end) / 2;
	if (mid * mid == n)
		return mid;
	else if (mid * mid < n)
		return find_sq(n, mid + 1, end);
	else
		return find_sq(n, st, mid - 1);
}

int _sqrt_recursion(int n)
{
	return find_sq(n, 0, n);
}
