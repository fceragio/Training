#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int main()
{
	char x = 'g';
	char copy = 0;
	char i = 0;

	while (i < CHAR_BIT)
	{
		if (x & (0b10000000 >> i))
			copy  |= (0b10000000 >> i);
		printf("i = %d\ncopy = %d\n", i, copy);
		i++;
	}
	printf ("x = %d\n", x);
	return 0;
}
