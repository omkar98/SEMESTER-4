#include<stdio.h>
#include<conio.h>
#define SIZE 4

int a[SIZE]={4,3,2,1};

display(int j)
{
 int i;
 for(i=j;i<SIZE;i++)
 {
  printf(" %d", a[i]);
 }
}

void main()
{
  int i,j,small,pstn,counter=1;
  clrscr();
  printf("\n#No.\t|Small\t|Array\t\t|\n");
  for(i=0;i<SIZE;i++)
  {
   small=a[i];
   printf("Pass No: %d", i+1);
   for(j=i;j<SIZE;j++)
   {
    printf("\n%3d\t|",counter++);
    if(a[j]<=small)
    {
      small=a[j];
      pstn=j;
    }
    printf("%3d\t|", small);
    //printf("\t");
    display(j);
    //if(j>0)
    //printf("\t\t|");
    //else
    printf("\t|");
    //printf("\t|");
   }
   a[pstn]=a[i];
   a[i]=small;
   printf("\nAfter Pass %d: ",i+1);
   display(0);
   printf("\n");
  }
  getch();
}