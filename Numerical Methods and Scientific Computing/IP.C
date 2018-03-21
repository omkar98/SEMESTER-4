/*The problem is only with the count_get_data variable. Fix it appropriately.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

static void force_fpf()
{
 float x, *y;
 y=&x;
 x=*y;
}

struct array
{
 int no;
 float *arr;
 struct array *next;
};
struct array *start=NULL;
int count_get_data=0;


void get_data(int);
void differ_values(int);
void print_array(struct array*);




struct array* create_array(int terms)
{
 struct array *temp=(struct array*)malloc(sizeof(struct array));
 if(count_get_data<2)
 {
   temp->no=count_get_data;
   temp->arr=(float*)malloc(sizeof(float)*terms);
   temp->next=NULL;
 }
 else
 {
   temp->no=count_get_data;
   temp->arr=(float*)malloc(sizeof(float)*terms-count_get_data+1);
   temp->next=NULL;
 }
   return temp;
}

void get_data(int terms)
{
 int i;
 struct array *temp1=start;
 struct array *temp=create_array(terms);
 /*If only one node exists:*/
 if(count_get_data==0)
  {
   start=temp;
  }
  /*If more than one node exists*/
  else
  {
    while(temp1->next!=NULL)
    {
     temp1=temp1->next;
    }
   // printf(" | Temp1 = %d", temp1);
    temp1->next=temp;
    //printf(" | Temp1->next = %d\n", temp1->next);
  }
  if(count_get_data==0 || count_get_data==1)
  {
    for(i=0; i<terms;i++)
    {
      scanf("%f", &temp->arr[i]);
    }
    for(i=0; i<terms;i++)
    {
      printf("\n%d = %.3f",&temp->arr[i], temp->arr[i]);
    }
  }

  count_get_data++;
  print_array(temp);

  for(i=0;i<terms-1;i++)
  {
    if(temp->no>0)
    {
      differ_values(terms);
    }
  }
  //  count_get_data++;
}


void differ_values(int terms)
{
  int i;
  struct array *temp=create_array(terms);
  struct array *temp1=start;

  while(temp1->next!=NULL)
    {
     temp1=temp1->next;
    }
   // printf(" | Temp1 = %d", temp1);
    temp1->next=temp;

  for(i=0;i<terms-((temp1->no)-1);i++)
  {
   temp->arr[i]=(temp1->arr[i+1])-(temp1->arr[i]);
  }

  for(i=0;i<(terms-temp1->no);i++)
  {
   printf("\n%.3f", temp->arr[i]);
  }
  print_array(temp);
}

void print_array(struct array *temp)
{
 printf("\nArray Number: %d", temp->no);
}

void main()
{
 int terms;
 clrscr();
 printf("\nEnter number of terms: ");
 scanf("%d", &terms);
 printf("\nEnter the terms of x: ");
 get_data(terms);
 printf("\nEnter the terms of y: ");
 get_data(terms);
 getch();
}