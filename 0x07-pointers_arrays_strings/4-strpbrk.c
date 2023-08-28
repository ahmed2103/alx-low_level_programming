#include "main.h"
char *_strpbrk(char *s, char *accept)
{
    int i, n;
    int accept_chars[256] = {0};

    for (n = 0; accept[n] != '\0'; n++) {
        accept_chars[(unsigned char)accept[n]] = 1;
    }

    for (i = 0; s[i] != '\0'; i++) {
        if (accept_chars[(unsigned char)s[i]]) {
            return (s + i);
        }
    }

    return NULL;
}
