/**
 * _strspn - a function that gets the
 * length of  a prefix substrings
 * @s: pointer to string input
 * @accept: substring prefix to look for
 * Return: the number
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
			j++
		}
		if (k == 1)
			break;
		i++;
	}
	return (i);
}
