#include <unistd.h>

int  xIsBuzzFizz(int x)
{
	if (x % 4 == 0 && x % 7 == 0)
	{
		write(1, "BuzzFizz\n", 9);
		return (1);
	}
	if (x % 4 == 0)
	{
		write(1, "Buzz\n", 5);
		return (1);
	}
	if (x % 7 == 0)
	{
		write(1, "Fizz\n", 5);
		return (1);
	}
	else
		return (0);
}

void writeN(int x)
{
	char	dec;
	char	unit;

	if (x < 10)
	{
		unit = x + 48;
		write(1, &unit, 1);
		write(1, "\n", 1);
	}
	else if (x > 10 && x < 100)
	{
		dec = x / 10 + 48;
		unit = x % 10 + 48;
		write(1,  &dec, 1);
		write(1,  &unit, 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "100\n", 4);
	}
}

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (xIsBuzzFizz(n))
			n++;
		else
		{
			writeN(n);
			n++;
		}
	}
	return (0);
}
