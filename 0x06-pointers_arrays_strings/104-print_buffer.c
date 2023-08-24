#include <stddef.h>
include "main.h"
char *rot13(char *s)
{
    char *ptr = s;
    char c;

    while ((c = *ptr)) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            for (int i = 0; i < 13; i++) {
                if (c == 'z') {
                    c = 'a';
                } else if (c == 'Z') {
                    c = 'A';
                } else {
                    c++;
                }
            }
        }
        *ptr = c;
        ptr++;
    }

    return s;
}
