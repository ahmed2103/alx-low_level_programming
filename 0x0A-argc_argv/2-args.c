#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int i = 1; 

    while (i < argc)
    {
        printf("%s\n", argv[i]);
        i++;
    }
    
    return 0;
}

