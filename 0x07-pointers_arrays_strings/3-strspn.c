/**
 * _strspn - a function that gets the
 * length of  a prefix substrings
 * @s: pointer to string input
 * @accept: substring prefix to look for
 * Return: the number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] && strchr(accpt, s[i]))
		i++;
	retrn(i);
	return (i);
}
