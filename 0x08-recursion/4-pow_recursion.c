#include "main.h"

/**
 * _pow_recursion - Calculates the power of an integer.
 * @x: The base.
 * @y: The exponent.
 *
 * Description: Calculates the value of x raised to the power of y.
 *
 * Return: The result of x raised to the power of y. If y is negative, returns -1.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1); 
    if (y == 0)
        return (1);   // Any number raised to the power of 0 is 1
    else
        return (x * _pow_recursion(x, y - 1));  
}



