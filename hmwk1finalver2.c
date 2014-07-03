#include<stdio.h>
#include<stdlib.h>
int binainput[64],inputval,i,numobits,outputval,numoloop;
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
 for (numoloop = 0; numoloop < i; numoloop++) 
 {
  outputval = outputval + (binainput[numoloop] << (i - numoloop - 1));
 }
 printf("result %u \n",outputval);
 return 0;
}
