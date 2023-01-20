BrightDaniel
/
alx-low_level_programming
Public
Code
Issues
2
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x10-variadic_functions/0-sum_them_all.c
@BrightDaniel
BrightDaniel Task Variadic functions
 1 contributor
26 lines (19 sloc)  357 Bytes
#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

