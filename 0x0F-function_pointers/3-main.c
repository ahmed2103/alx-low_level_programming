#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - return result of desired calculation from command line options
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return0.
 */
int a, b, result;
	int (*op_func)(int, int);
	char *op;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	op = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		puts("Error");
		exit(100);
	}
	op_func = get_op_func(op);
	if (op_func == NULL)
	{
		puts("Error");
		exit(99);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
