/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
    int start = 0;
    int end = n - 1;
    int temp;

    while (start < end)
    {
        // Swap the elements at start and end indices
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        // Move the indices towards each other
        start++;
        end--;
    }
}

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    int size = sizeof(a) / sizeof(int);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");

    reverse_array(a, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}






