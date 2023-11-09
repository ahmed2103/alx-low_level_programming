#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Takes a command line argument.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 on success, 1 otherwise.
 */

int main(int argc, char *argv[]) {
    size_t i, j;
    int rnd = 0;
    char *h, *uname, pw[7], max_char;

    h = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

    if (argc != 2)
        exit(1);

    uname = argv[1];

    j = (strlen(uname) ^ 0x3b) & 0x3f;
    pw[0] = h[j];

    for (j = i = 0; uname[i]; i++)
        j += uname[i];
    pw[1] = h[(j ^ 0x4f) & 0x3f];

    for (j = 1, i = 0; uname[i]; i++)
        j *= uname[i];
    pw[2] = h[(j ^ 0x55) & 0x3f];

    for (max_char = uname[0], i = 0; i < strlen(uname); i++)
        if (uname[i] > max_char)
            max_char = uname[i];

    srand(max_char ^ 0xe);
    j = rand();
    pw[3] = h[j & 0x3f];

    for (j = i = 0; uname[i]; i++)
        j += (uname[i] * uname[i]);
    pw[4] = h[(j ^ 0xef) & 0x3f];

    for (max_char = uname[0]; max_char > 0; max_char--)
        rnd = rand();
    pw[5] = h[(rnd ^ 0xe5) & 0x3f];

    pw[6] = '\0';
    printf("%s", pw);

    return 0;
}
