#include "main.h"

/**
 * helper - Recursive square root approximation.
 * @i: Current integer to check as possible square root.
 * @n: Integer to find square root of.
 *
 * This function recursively approximates the square root of n by incrementing i.
 *
 * Return: -1 if i * i != n and i > n, else the square root approximation.
 */
int helper(int i, int n)
{
    int j;

    if (i * i != n)
    {
        if (i > n)
            return (-1); 
        
        j = helper(i + 1, n);
        return (j + 1); 
    }
    return (0); 
}

/**
 * _sqrt_recursion - Calculate integer square root.
 * @n: Integer to find square root of.
 *
 * This function calculates an approximation of the square root of n.
 *
 * Return: Integer square root of n, or -1 if n is not a perfect square.
 */
int _sqrt_recursion(int n)
{
    int i = 0;

    if (helper(i, n) == n && n != 1)
        return (-1); 
    
    return (helper(i, n)); 
}



