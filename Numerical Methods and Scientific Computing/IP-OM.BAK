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
 float *arr,*tarr;
 struct array *next;
};
struct array *start=NULL;
int count_get_data=0;

void get_data(int);
void differ_values(int);
void print_array(struct array*);

void get_data(int terms)
{
  int i;
  struct array *temp1=start;
  struct array *temp=(struct array*)malloc(sizeof(struct array));
  temp->arr=(float*)malloc(sizeof(float)*terms);
  temp->tarr=(float*)malloc(sizeof(float)*(terms-1));
  temp->no=count_get_data;
  /*If only one node exists*/
 // printf("\nStart: %d | Temp: %d", start, temp);
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

  temp->next=NULL;

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
  else
  {
    //differ_values(terms);
  }

  if(count_get_data!=0)
  {
    for(i=1;i<terms;i++)
    {
      temp->tarr[i-1]=temp->arr[i]-temp->arr[i-1];
    }
    for(i=1;i<terms;i++)
    {
      printf("\ntarr[%d]=%f",i-1,temp->tarr[i-1]);
    }
  }

  ++count_get_data;
  print_array(temp);
}

/*differ_values(int terms)
{


} */
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
