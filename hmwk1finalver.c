#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int inputval,i,numobits,outputval,numoloop;
int binainput[64];
int main(int argc, const char *argv[])
{
 printf("value? \n");
 scanf("%u",&inputval);
 i = 0;
 while(inputval>0)
 {
  binainput[i] = inputval % 2;
  inputval = (inputval - binainput[i]) / 2;
  i++;
 }
 outputval = 0;
 for (numoloop = 0; numoloop < i + 1; numoloop++) 
 {
  outputval = outputval + (binainput[numoloop] * pow(2,i - numoloop - 1));
 }
 printf("result %u \n",outputval);
 return 0;
}
