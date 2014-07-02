#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int *a,n,i;
	printf("input? \n");
	scanf("%d",&n);
	a = (int *) malloc(n * sizeof(int));
	for (i = 0; i < n; i++) 
	{
		scanf("%d",(a + i));
	}
	for (i = 0; i < n; i++) 
	{
		printf("%d ",*(a + i));
	}
	printf("\n");
	return 0;
}
