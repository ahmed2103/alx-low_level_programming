/**
 * _strcmp - Compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: Negative if s1 is less than s2, positive if s1 is greater than s2,
 *         and 0 if s1 is equal to s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }

    return (int)(*s1) - (int)(*s2);
}
