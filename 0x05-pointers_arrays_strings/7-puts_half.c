#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;

	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length + 1) / 2;

	while (str[start_index] != '\0')
	{
		putchar(str[start_index]);
		start_index++;
	}

	putchar('\n');
}
