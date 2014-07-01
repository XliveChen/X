#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define NUMOSTUDENTS 16
int buffernumber,i,randomstu;
int students[NUMOSTUDENTS];
int main(int argc, const char *argv[])
{
  srand (time(NULL));
  for (i = 0; i < NUMOSTUDENTS; i++)
  {students[i] = i;}
  for (i = NUMOSTUDENTS; i >0; i--)
  { 
	 randomstu = rand()%i;
	 buffernumber = students[randomstu];
	 students[randomstu] = students[i];
	 students[i] = buffernumber;
  }
  for (i = 0; i < NUMOSTUDENTS; i++) 
  {
   printf ("%d\n", students[i]);
  }
  return(0);
}
