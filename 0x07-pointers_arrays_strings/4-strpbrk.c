/**
 * _strpbrk - searches a string for any of aset of bytes
 * @s: string
 * @accept: string
 * Return: pointer to the byte or NuLL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
