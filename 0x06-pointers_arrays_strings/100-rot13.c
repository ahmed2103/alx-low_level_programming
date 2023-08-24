/**
 * rot13 - Encrypts a string using the ROT13 cipher
 * @s: String to encrypt
 *
 * Return: Pointer to the encrypted string
 */
char *rot13(char *s)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alpha[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; alphabet[j] != '\0'; j++)
		{
		if (s[i] == alphabet[j])
			{
			s[i] = rot13_alpha[j];
			break;
			}
		}
	}
	return (s);
}
