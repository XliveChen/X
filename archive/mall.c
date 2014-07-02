#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int *a,n,i;
	n = atoi(argv[1]);
	a = (int *) malloc(n * sizeof(int));
	for (i = 0; i < (argc - 2); i++) 
	{
		*(a + i) = atoi(*(argv + 2 + i));
	}
	for (i = 0; i < (argc - 2); i++) 
	{
		printf("%d ",*(a + i));
	}
	printf("\n");
	return 0;
}
