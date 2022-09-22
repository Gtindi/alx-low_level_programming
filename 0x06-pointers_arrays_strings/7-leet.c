/**
 * leet -  encodes a string into 1337.
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */
char *leet(char *str)
{
	int i = 0;
	char c;
	char *leetUpper = "AEOTL\0";
	char *leetLower = "aeotl\0";
	int leetDigits[] = {4, 3, 0, 7, 1};
	int j;

	while (str[i] != '\0')
	{
		c = str[i];
		j = 0;
		while (leetUpper[j] != '\0')
		{
			if (leetLower[j] == c || leetUpper[j] == c)
			{
				str[i] = leetDigits[j] + '0';
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
