#include<stdio.h>
#include<conio.h>
#define SIZE 4

int A[SIZE]={4,3,2,1};

void insertion()
{
 int i, key,j,k;
 printf("\nUnsorted Array is: ");
 for(i=0;i<SIZE;i++)
 {
   printf(" %d ", A[i]);
 }
 printf("\n");
 //printf("#NO\t | Array\t ");
 for(i=1;i<SIZE;i++)
 {
   printf("\nWhen %d is key:\n ", A[i]);

   for(k=0;k<SIZE;k++)
   {
      printf(" %d ", A[k]);
   }
   printf("\n");

   key = A[i];
   j=i-1;
   while(j!=-1)
   {
     if(A[j]>key)
     {
       A[j+1]=A[j];
       A[j]=key;
       j--;
     }
     else
     {
       j--;
     }
   for(k=0;k<SIZE;k++)
   {
      printf(" %d ", A[k]);
   }
   printf("\n");
   }
 }
 printf("The obtained sorted Array is: \n");
   for(i=0;i<SIZE;i++)
   {
      printf(" %d ", A[i]);
   }
   printf("\n");
}

void main()
{
 clrscr();
 insertion();
 getch();
}