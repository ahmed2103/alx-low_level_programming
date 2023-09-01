#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 * Converts two command line arguments to integers and multiplies them.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
    int i, result = 1;

    if (argc != 3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            int num = atoi(argv[i]);
            result *= num;
        }
        printf("Result: %d\n", result);
    }
    return 0;
}

