#include<stdio.h>
#include<conio.h>
#define SIZE 7


int a[SIZE]={0,1,2,3,4,5,6};
int b[SIZE];

void merge(int low, int mid, int high)
{
  int L,R,i,j=0,k=0,l=0,m=0;
  for(L=low,R=mid+1,i=low;L<=mid && R<=high;i++)
  {
   if(a[L]<=a[R])
     {
       b[i]=a[L];
       L++;
     }
   else
    {
      b[i]=a[R];
      R++;
    }
  }
  while(L<=mid)
  {
   b[i]=a[L];
   L++;
   i++;
  }
  while(R<=high)
  {
   b[i]=a[R];
   i++;
   R++;
  }
  for(i=low;i<=high;i++)
  {
    a[i]=b[i];
  }
}

display(int l, int h)
{
  int i;
  for(i=l;i<=h;i++)
  {
    printf("%d ", a[i]);
  }
}

void mergesort(int low, int high)
{
 int mid,k;
 if(low<high)
 {
  k=mid;
  mid=(low+high)/2;
  printf("%3d\t|%3d\t|%3d\t|", low,mid,high);
  display(low,high);
  printf("\n");
  mergesort(low,mid);
  mergesort(mid+1, high);
  merge(low,mid,high);
  printf("Merging terms in sorted order: ");
  display(low,high);
  printf("\n");

 }
 else
 {
  printf("%3d\t|%3d\t|%3d\t|", low,low,high);
  display(low,high);
  printf("\n");
  return;
 }
}




void main()
{
 int i=0;
 clrscr();
 printf("\nGiven unsorted array: ");
 for(i=0;i<SIZE;i++)
 {
  printf("%d ",a[i]);
 }
 printf("\n");
 printf("Low\t|Mid\t|High\t|Array\t\n");
 mergesort(0,SIZE-1);
 printf("\nObtained sorted array: ");
 for(i=0;i<SIZE;i++)
 {
  printf("%d ",a[i]);
 }
 getch();
}

