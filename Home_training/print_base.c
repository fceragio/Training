#include <unistd.h>
#include <stdio.h>

int	print_base(int num, int base)
{
	unsigned int new = (unsigned int)num;
	int			count;
	char		*simbols;

	count = 0;
	simbols = "0123456789abcdefghilmnopqrstuvz";
	if (base <= 1)
		return (-1);
	else if (new < base)
		return write(1, &simbols[new], 1);
	else
	{
		count = print_base(new / base, base);
		return (count + print_base(new % base, base));
	}
}


int main()
{
	int	x = 100;
	int	base;
	int	chars;

	base = 10;
	printf("%d in base %d is\n", x, base);
	chars = print_base(x, base);
	printf("\nThe chars printed are %d\n\n", chars);

	base = 2;
	printf("%d in base %d is\n", x, base);
	chars = print_base(x, base);
	printf("\nThe chars printed are %d\n\n", chars);

	base = 16;
	printf("%d in base %d is\n", x, base);
	chars = print_base(x, base);
	printf("\nThe chars printed are %d\n\n", chars);

	base = 8;
	printf("%d in base %d is\n", x, base);
	chars = print_base(x, base);
	printf("\nThe chars printed are %d\n\n", chars);

	return 0;
}
