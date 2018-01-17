#include<stdio.h>
#include<conio.h>

int n=5;
int a[5]={33,35,34,36,32};

void bubble_sort(int a[], int n)
{
 int i,j,t,flag,count=0;
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
   if(flag==0)
    {
      printf("Rounds: ");
      break;
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