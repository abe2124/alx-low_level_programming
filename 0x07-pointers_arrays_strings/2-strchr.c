/**
 * _strchr - function to locate in astring
 *
 * @s: pointer to our string
 * @c: char to locate from input array
 * Return: null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return ('\0');
}
