#include<stdio.h>
#include<conio.h>

int n=5;
int a[5]={32,35,34,33,36};

void bubble_sort(int a[], int n)
{
 int i,j,t,count=0,k,flag;
 for(j=0;j<n-1;j++)
 {
  flag=0;
  for(i=0;i<n-1;i++)
  {
   printf("Step %d:", ++count);
   if(a[i]>a[i+1])
   {
    flag=1;
    t=a[i+1];
    a[i+1]=a[i];
    a[i]=t;
   }
   for(k=0;k<n;k++)
   {
     printf("%d ",a[k]);
   }
   printf("\n");
   if(flag==0)
   {
    return;
   }

  }
 }
 printf("Final: ");
 for(i=0;i<n;i++)
 {
  printf("%d ", a[i]);
 }

}



void main()
{

 clrscr();
 bubble_sort(a,n);
 getch();
}