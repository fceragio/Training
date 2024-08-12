#include <stdio.h>

void	change_pointer(int	**pointer, int *new)
{
	*pointer = new;
}

int main()
{
	int	x = 5;
	int y = 0;

	int *s = &x;

	printf("%d\n", *s);
	change_pointer(&s, &y);
	printf("%d\n", *s);

	return 0;
}
