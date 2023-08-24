/**
 * reverse_array - Reverses an array of integers
 *
 * @a: Array to reverse
 * @n: Size of the array
 */
void reverse_array(int *a, int n)
{
    int i;
    int j;

    for (i = 0; i < n / 2; i++)
    {
        j = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = j;
    }




