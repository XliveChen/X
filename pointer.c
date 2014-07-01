#include <stdio.h>
#include <time.h>
int arr[50],i,randomnum;
int *pointer = arr;
int main(int argc, const char *argv[])
{
	srand(time(NULL));
	for (i = 0; i < 50; i++)
	{
		randomnum = rand();
		if(randomnum%2 > 0) *(pointer + i) = 2;
		if(randomnum%2 == 0) *(pointer + i) = 0;
	}
	for (i = 0; i < 50; i++) 
	{
		printf("%d",*(pointer + i));
	}
	return 0;
}
