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
int count=0;

void get_data(int);
void differ_values(int);
void print_array(int);

struct array* create_array(int terms)
{
 struct array *temp=(struct array*)malloc(sizeof(struct array));
   temp->no=count;
   temp->arr=(float*)malloc(sizeof(float)*terms);
   temp->next=NULL;
   count++;
 return temp;
}

void get_data(int terms)
{
 int i;
 struct array *temp1=start;
 struct array *temp=create_array(terms);
 /*If only one node exists:*/
 if(temp->no==0)
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
    temp1->next=temp;
  }

  if((temp->no)<2)
  {
    for(i=0;i<terms;i++)
    {
      scanf("%f", &temp->arr[i]);
    }
    for(i=0;i<terms;i++)
    {
      printf("\n%d = %.3f",&temp->arr[i], temp->arr[i]);
    }
  }
 printf("\nArray Number: %d", (temp->no)+1);

}


void differ_values(int terms)
{
  int i;
  struct array *temp=create_array(terms);
  struct array *temp1=start;

  printf("\nArray Number: %d", (temp->no)+1);
  while(temp1->next!=NULL)
  {
    temp1=temp1->next;
  }
  temp1->next=temp;
  for(i=1;i<=terms;i++)
  {
    temp->arr[i-1]=(temp1->arr[i])-(temp1->arr[i-1]);
  }
  for(i=0;i<terms;i++)
  {
    printf("\n%.3f", temp->arr[i]);
  }
}

void print_array(int terms)
{
 int i,j,k,temp,counter;
 k=(terms*2)-2;
 printf("\n");
 for(i=0;i<k;i++)
 {
  counter=i;
  if(counter>k/2)
  {
    temp=counter%(k/2);
    counter=(k/2)-temp;
  }
  if(counter%2==0)
  {
    printf("x\ty");
    for(j=0;j<counter;j++)
    {
      if(j%2==0)
      {
	printf("\t");
      }
      if(j%2==1)
      {
	printf("\t^y");
      }
    }
    printf("\n");
  }

  if(counter%2==1)
  {
   printf("\t");
  for(j=0;j<counter;j++)
  {
    if(j%2==0)
    {
      printf("\t^y");
    }
    if(j%2==1)
    {
      printf("\t");
    }
  }
  printf("\n");
 }
 }
 if(i==k)
 {
    printf("x\ty");
 }
}

void main()
{
 int terms,i;
 clrscr();
 printf("\nEnter number of terms: ");
 scanf("%d", &terms);
 printf("\nEnter the terms of x: ");
 get_data(terms);
 printf("\nEnter the terms of y: ");
 get_data(terms);
 for(i=1;i<terms;i++)
 {
   differ_values(terms-i);
 }
 print_array(terms);
 getch();
}