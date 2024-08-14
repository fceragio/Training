#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#define QUANTITY 100

int main()
{
	int num = (rand() % INT_MAX);
	int not_to_duplicate[QUANTITY] = {num};
	int	i = 1;
	int j = 0;
	while(i < QUANTITY)
	{
		if (rand() % 2)
			num = (rand() % INT_MAX);
		else
			num = -(rand() % INT_MAX);
		while (j < QUANTITY && not_to_duplicate[j] != num)
			j++;
		if (j == QUANTITY)
		{
			not_to_duplicate[i] = num;
			j = 0;
			i++;
		}
		else
			j = 0;
	}
	for(int k = 0; k < QUANTITY; k++)
		printf(" %d", not_to_duplicate[k]);
	printf("\n");

	return 0;
}
