char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = _strlen(n1), len2 = _strlen(n2), i = 0, digit1, digit2, carry = 0;

    for (len1--, len2--, size_r--; len1 >= 0 || len2 >= 0 || carry; len1--, len2--, i++)
    {
        if (i >= size_r)
            return (0);
        
        digit1 = 0;
        digit2 = 0;
        
        if (len1 >= 0)
            digit1 = n1[len1] - '0';
        
        if (len2 >= 0)
            digit2 = n2[len2] - '0';
        
        digit1 = digit1 + digit2 + carry;
        carry = digit1 / 10;
        digit1 %= 10;
        r[i] = digit1 + '0';
    }
    
    r[i] = '\0';
    return (rev_string(r));
}
