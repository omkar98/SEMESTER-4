#include<stdio.h>
#include<conio.h>

int n=5;
int a[5]={32,33,34,35,36};

void bubble_sort(int a[], int n)
{
 int i,j,t,count=1,k;
 for(j=0;j<n-1;j++)
 {
  for(i=0;i<n-1; i++)
  {
   if(a[i]>a[i+1])
   {
    t=a[i+1];
    a[i+1]=a[i];
    a[i]=t;
   }
   printf("Step %d:", count);
   count++;


    for(k=0;k<n;k++)
     {
       printf("%d ",a[k]);
     }
    printf("\n");

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

/*OUTPUT
Worst Case: 36,35,34,33,32
Step 1:35 36 34 33 32
Step 2:35 34 36 33 32
Step 3:35 34 33 36 32
Step 4:35 34 33 32 36
Step 5:34 35 33 32 36
Step 6:34 33 35 32 36
Step 7:34 33 32 35 36
Step 8:34 33 32 35 36
Step 9:33 34 32 35 36
Step 10:33 32 34 35 36
Step 11:33 32 34 35 36
Step 12:33 32 34 35 36
Step 13:32 33 34 35 36
Step 14:32 33 34 35 36
Step 15:32 33 34 35 36
Step 16:32 33 34 35 36
Final: 32 33 34 35 36


Average Case: 32,35,34,33,36
Step 1:32 35 34 33 36
Step 2:32 34 35 33 36
Step 3:32 34 33 35 36
Step 4:32 34 33 35 36
Step 5:32 34 33 35 36
Step 6:32 33 34 35 36
Step 7:32 33 34 35 36
Step 8:32 33 34 35 36
Step 9:32 33 34 35 36
Step 10:32 33 34 35 36
Step 11:32 33 34 35 36
Step 12:32 33 34 35 36
Step 13:32 33 34 35 36
Step 14:32 33 34 35 36
Step 15:32 33 34 35 36
Step 16:32 33 34 35 36
Final: 32 33 34 35 36

Best Case: 32,33,34,35,36
Step 1:32 33 34 35 36
Step 2:32 33 34 35 36                                                           
Step 3:32 33 34 35 36                                                           
Step 4:32 33 34 35 36                                                           
Step 5:32 33 34 35 36                                                           
Step 6:32 33 34 35 36                                                           
Step 7:32 33 34 35 36                                                           
Step 8:32 33 34 35 36                                                           
Step 9:32 33 34 35 36                                                           
Step 10:32 33 34 35 36                                                          
Step 11:32 33 34 35 36                                                          
Step 12:32 33 34 35 36                                                          
Step 13:32 33 34 35 36                                                          
Step 14:32 33 34 35 36
Step 15:32 33 34 35 36
Step 16:32 33 34 35 36
Final: 32 33 34 35 36
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                







                                                                                








