#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;
    /*
     * Modify a[2] indirectly using pointer p
     * Keep in mind:
     * - Avoid undefined behavior
     * - Use this single line only
     */
  *(p + 5) = 98;
    printf("a[2] = %d\n", a[2]);
    return 0;
}

