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
 int top;
};
struct array *start=NULL;
int count=0;

void get_data(int);
void differ_values(int);
void print_array(int);
void get_value(int,int);

struct array* create_array(int terms)
{
 struct array *temp=(struct array*)malloc(sizeof(struct array));
   temp->no=count;
   temp->arr=(float*)malloc(sizeof(float)*terms);
   temp->next=NULL;
   temp->top=0;
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
 int i,j,k,temp,counter,x=0;
 float test;
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
    //printf("x\ty");
    get_value(0,x);
    get_value(1,x);
    x++;
    for(j=0;j<counter;j++)
    {
      if(j%2==0)
      {
	printf("\t");
      }
      if(j%2==1)
      {
	printf("\t");
	get_value(j+2,0);
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
      get_value(j+2,0);
      printf("\t");
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
    get_value(0,x);
    get_value(1,x);
 }
}

void get_value(int num,int ar)
{
 /* Num is the 'temp->no' that is required.
    ar is the index of array that is required.
 */
 struct array *temp=start;
 while(temp->no!=num)
 {
   temp=temp->next;
 }
 if(num<2)
   printf("%.3f\t", temp->arr[ar]);
 if(num>=2)
 {
   printf("%.3f", temp->arr[temp->top]);
   (temp->top)++;
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