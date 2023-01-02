/**
 * _strch - a function that locates a character in a string
 *
 * @s: pointer to a string array input
 * @c: character to locate from input array
 *
 * Return: first occurence of character or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to '\0' of the
	 * string s
	 */
	if (*s == c)
		return (s);
	/* return null if not found */
	return ('\0');
}

