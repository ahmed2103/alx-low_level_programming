/**
 * reverse_array - Reverses an array of integers
 *
 * @a: Array to reverse
 * @n: Size of the array
 */
void reverse_array(int *a, int n)
{
    int *start = a;
    int *end = a + n - 1;
    int temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

