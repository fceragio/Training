#include <stdio.h>
#include <stdlib.h>

void	buble_sort(int *array, int size);
void	swap(int *x, int *y);

int	main(void)
{
	int i;
	int x = 12;
	int myArray[12] = {90, 284, 55, 234324, 1, 34, 234, 3299, 414, 111, 3,45676443};

	printf("Prima: ");
	for (i = 0; i < x; i++)
		printf("%d ", myArray[i]);
	printf("\n\nDopo: ");
	buble_sort(myArray, x)
	for (i = 0; i < x; i++)
		printf("%d "orderedArray[i]);
	printf("\n");
	return (0);
}

void	swap(int *x, int *y)
{
	int	stock;

	stock =  *x;
	*x = *y;
	*y = stock;
}

void	buble_sort(int	*array, int size)
{
	int i;
	int j;
	int sorts;

	sorts = size - 1;
	i = 0;
	j = 1;
	while (sorts)
	{
		while (j < size)
		{
			if (*array[i] > *array[j])
				*swap(array[i], *array[j]);
			j++;
		}
		i++;
		sorts--;
	}
}

