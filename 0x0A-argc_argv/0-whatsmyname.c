#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
    // Suppress unused parameter warning
    (void)argc;

    // Print the program's name (first argument)
    printf("%s\n", argv[0]);

    return 0;
}

