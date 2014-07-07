#include<stdio.h>
#include<stdlib.h>
struct person
{
 char *first;
 char *last;
 int *salary;
 struct person *next;
};

struct person *inputinfo()
{
 struct person *newperson = NULL;
 newperson = (struct person *) malloc(1 * sizeof(struct person));
 printf("first name? \n");
 scanf("%c",&fi);
 newperson->first = fi;
 printf("last name? \n");
 scanf("%c",&la);
 newperson->last = la;
 printf("salary? \n");
 scanf("%d",&sa);
 newperson->salary = sa;
 newperson->next = NULL;
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
 int xx = 1;
 struct person *head = NULL;
 while(xx>0)
 {
  printf("1 4 input, 2 4 output, 3 4 free memory\n");
  scanf("%d",&act);
  if(act == 1) addinfo(head,inputinfo);
  if(act == 2) printinfo;
  if(act == 3) fremeomory;
 }
 return 0;
}
