#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

size_t	time_in_milliseconds(size_t	seconds, size_t u_seconds)
{
	size_t	milliseconds;

	milliseconds = (seconds * 1000) + (u_seconds / 1000);
	return (milliseconds);
}

size_t	get_time_in_milliseconds(void)
{
	size_t			current_time;
	struct timeval	tv;

	
	if (gettimeofday(&tv, NULL) == -1){
		printf("couldn't get time of day in get_time_in_milliseconds()\n");
		return 0;
	}
	current_time = time_in_milliseconds(tv.tv_sec, tv.tv_usec);
	return (current_time);
}

int	sleep_milliseconds(size_t milliseconds)
{
	size_t			start;

	if (start = get_time_in_milliseconds()){
		while ((get_time_in_milliseconds() - start) < milliseconds){
			usleep(10);
		}
	return 0;
	}
	return 1;
}

int main()
{
	struct timeval	tv1;
	struct timeval	tv2;
	size_t			milliseconds_1;
	size_t			milliseconds_2;
	size_t			passed_u_seconds;
	size_t			passed_milliseconds;
	

	if (gettimeofday(&tv1, NULL) == -1){
		printf("couldn't get time of day 1\n");
		return 1;
	}
	printf("tv1.tv_sec  = %zu\n", tv1.tv_sec);
	printf("tv1.tv_usec = %zu\n", tv1.tv_usec);
	milliseconds_1 = time_in_milliseconds(tv1.tv_sec, tv1.tv_usec);
	printf("in milliseconds the time is %zu\n", milliseconds_1);
	printf("\n");

//	usleep(10000000);
//	if (sleep_milliseconds(10000)){
//		return 2;
//	}

	if (gettimeofday(&tv2, NULL) == -1){
		printf("couldn't get time of day 2\n");
		return 3;
	}
	printf("tv2.tv_sec  = %zu\n", tv2.tv_sec);
	printf("tv2.tv_usec = %zu\n", tv2.tv_usec);
	milliseconds_2 = time_in_milliseconds(tv2.tv_sec, tv2.tv_usec);
	printf("in milliseconds the time is %zu\n", milliseconds_2);
	printf("\n");

	passed_u_seconds = (tv2.tv_sec - tv1.tv_sec) * 1000000 + (tv2.tv_usec - tv1.tv_usec);
	printf("between the two gettimeofday %zu u_seconds passed\n", passed_u_seconds);
	passed_milliseconds = (milliseconds_2 - milliseconds_1);
	printf("calculating the same difference in milliseconds we get %zu\n", passed_milliseconds);

	return 0;
}
