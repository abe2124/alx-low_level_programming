/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: pointer to beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && needle[j] != '\0')
		{
			j++;
			k++;

		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
