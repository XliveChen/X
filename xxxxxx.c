#include<stdio.h>
#include<stdlib.h>
struct person
{
 char first;
 char last;
 int salary;
 struct person *next;
};
int ptr,cccc,xx;

struct person *inputinfo(char fi, char la, int sa, struct person *nx)
{
 struct person *newperson;
 newperson = (struct person *) malloc(1 * sizeof(struct person));
 newperson->first = fi;
 newperson->last = la;
 newperson->salary = sa;
 newperson->next = nx;
 return newperson;
}

struct person *addinfo(struct node *employeedata, struct person *newperson)
{
 newperson->next = employeedata;
 employeedata = newperson;
 return employeedata;
}

void printinfo(struct person *ptr)
{
 while(ptr !=NULL)
 {
  printf("%c %c %d\n",ptr->first,ptr->last,ptr->salary);
  ptr = ptr->next;
 }
}

int main(int argc, const char *argv[])
{
 xx = 1;
 struct person headolist = NULL;
 while(xx > 0)
 {
  printf("press 1 for new data, 2 for printing current data \n");
  scanf("%u",cccc);
  if(cccc = 1)
  {
   printf("first name?\n");
   scanf("%c \n",newfirst);
   printf("last name?\n");
   scanf("%c \n",newlast);
   printf("salary?\n");
   scanf("%d \n",newsalary);
  }
  if(cccc = 2)
  {
   printinfo(firstdata);
  }
  else
  {
   printf("invalid input\n")
  }
  xx++;
 }
 return 0;
