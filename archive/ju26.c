#include <stdio.h>
#include <stdlib.h>
int a = 0;
int xx;
int main()
{
	while(a < 100)
	{	
		signed int y = rand();
		printf ("random number %d \n", y);
	        a = a + 1;
	}
	printf ("enter a random number ");
	scanf ("%d", &xx);
	printf ("random interger %d \n" , xx);
	return 0;
}
