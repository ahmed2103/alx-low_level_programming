/**
 * leet - Converts characters 
 * @s: String to convert 
 *
 * Return: Pointer to the new string
 */
char *leet(char *s)
{
    char leet_map[] = "a4A4e3E3o0O0t7T7l1L1";
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; leet_map[j] != '\0'; j += 2)
        {
            if (s[i] == leet_map[j])
            {
                s[i] = leet_map[j + 1];
                break;
            }
        }
    }
    return s;
}

