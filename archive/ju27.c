#include <stdio.h>
#include <stdlib.h>
#include "ju27.h"

long double a;
long double b;
int action;

long double avg(long double a, long double b)
	{
		long double outcomeforavg = (a + b)/2;
        	printf("avg %Lf\n", outcomeforavg);
	}

long double divide(long double a, long double b)
	{
		long double outcomefordiv = a / b;
		printf("div %Lf\n", outcomefordiv);
	}

int main(int argc, const char *argv[])
{
	printf ("value of a? \n");
	scanf ("%Lf", &a);
	printf ("value of b? \n");
	scanf ("%Lf", &b);
	printf ("press 1 for avg, 2 for div. \n");
	scanf ("%i", &action);
	if (action == 1) avg(a,b);
	if (action == 2) divide(a,b);
	return 0;
}


