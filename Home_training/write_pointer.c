#include <unistd.h>

int main()
{
	int 	x = 10;
	void	*ptr = &x;

	write(1, ptr, sizeof(ptr));
	return 0;
}
