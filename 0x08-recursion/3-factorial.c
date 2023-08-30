#include "main.h"

/**
 * factorial - Calculate the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Description: Calculates the factorial of a non-negative integer n.
 *
 * Return: The factorial of n. If n is negative, returns -1.
 */
int factorial(int n)
{
    if (n == 0)           
        return (1);
    else if (n < 0)      
        return (-1);
    else
        return (n * factorial(n - 1)); 
}



