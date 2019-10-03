/**
 *string_toupper - Lowercase change
 *@s: string
 *Return: Lowercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += -32;
	i++;
	}
	s[i] = '\0';
	return (s);
}
