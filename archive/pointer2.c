#include <stdio.h>
int bbb[5][5],j,i;
int *arr = bbb;
int main(int argc, const char *argv[])
{
	for (i = 0; i < 25; i = i + 5) 
	{
		for (j = 0; j < 5; j++)
		{
			*(arr + j + i) = j + i;
		}
	}
	for (i = 0; i < 25; i = i + 5) 
	{
		for (j = 1; j < 5; j++) 
		{
			*(arr + i) = *(arr + i) + *(arr + j + i);
		}
	}
	for (i = 0; i < 25; i = i + 5)
	{
		printf("%d",*(arr + i));
		printf("\n");
	}
	return 0;
}
