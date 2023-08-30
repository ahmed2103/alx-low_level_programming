#include "main.h"

/**
 * helper - Helper function to check if n is divisible by any integer.
 * @i: Current integer divisor to check.
 * @n: Integer to test for primality.
 * Return: 0 if n is divisible by i (and not equal to i), else 1.
 */
int helper(int i, int n)
{
    if (n % i == 0 && n != i)
        return (0); /* n is divisible by i */
    
    if (n % i != 0 && i < n)
        return (helper(i + 1, n)); /* Recursive call to check next divisor */
    
    return (1); /* n is prime */
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: Integer to determine primality for.
 * Return: 0 if n is not prime, else 1.
 */
int is_prime_number(int n)
{
    int i = 2;

    if (n < 2)
        return (0); /* Numbers less than 2 are not prime */
    
    return (helper(i, n));
}

