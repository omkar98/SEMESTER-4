/*Refer to page 239 for testing this program.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

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
void interpolation(float,int);
//float k(float p, int count);


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
  }
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
  temp1->next=temp;
  for(i=1;i<=terms;i++)
  {
    temp->arr[i-1]=(temp1->arr[i])-(temp1->arr[i-1]);
  }
}

void print_array(int terms)
{
 int i,j,k,temp,counter,x=0;
 float test;
 k=(terms*2)-2;
 printf("\n");
 printf(" x\t| y\t|");

 for(i=1;i<terms;i++)
 {
   printf(" $%dy\t|", i);
 }
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
    printf("\t");
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
      printf("\t");
      get_value(j+2,0);
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
    printf("\t");
    get_value(1,x);
 }
}

void get_value(int num,int ar)
{
 struct array *temp=start;
 while(temp->no!=num)
 {
   temp=temp->next;
 }
 if(num<2)
   printf("%3.3f", temp->arr[ar]);
 if(num>=2)
 {
   printf("%3.3f", temp->arr[temp->top]);
   (temp->top)++;
 }
}

void find_value(float unknown)
{
 struct array *temp=start;
 float h;
 int i=0,index=0;
 while(temp->arr[i]!=unknown)
 {
   printf("\nValue of i = %d",i);
   i++;
   printf("\nNOW i = %d", i);
   printf("\ntemp->arr[%d]=%f", i,temp->arr[i]);
 }
 printf("\nWe select %.3f as x0",temp->arr[i]);
 h = ((temp->arr[i+1])-(temp->arr[i]));
 temp=temp->next;
 printf(" and %.3f as y0", temp->arr[i]);
 printf("\n\th = %f", h);
 interpolation(h,i);
}

void interpolation(float h,int i)
{
  struct array *temp=start;
  int count=1;
  float sum=0,temp1;
  temp=temp->next;
  while(temp->next!=NULL)
  {
   temp=temp->next;
   if(count%2==0)
    {
     temp1=((temp->arr[i])/count);
     sum = (sum - temp1);
    }

   else
   {
     temp1=((temp->arr[i])/count);
     sum = (sum + temp1);
   }
   count++;
  }
  printf("\nSolution: %f", ((1/h)*sum));
}

void main()
{
 int terms,i;
 float unknown;
 clrscr();
 printf("\nEnter number of terms: ");
 scanf("%d", &terms);
 printf("\nEnter the terms of x: ");
 get_data(terms);
 printf("\nEnter the terms of y: ");
 get_data(terms);
 printf("\nEnter the value of x for which you want the value of y: ");
 scanf("%f", &unknown);
 for(i=1;i<terms;i++)
 {
   differ_values(terms-i);
 }
 printf("\nDifference Table : ");
 print_array(terms);
 find_value(unknown);
 getch();
}