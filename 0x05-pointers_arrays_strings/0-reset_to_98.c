#include <stdio.h>

/**
 * reset_to_98 - Updates the value pointed to by n to 98.
 * @n: Pointer to an integer.
 *
 * Description: This function updates the value of the integer pointed to by n
 *              to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int num = 10;

	printf("Before reset: %d\n", num);
	reset_to_98(&num);
	printf("After reset: %d\n", num);

	return 0;
}
