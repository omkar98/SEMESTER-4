/*Sorting elements using Bubble Sort Method.*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,temp,k,n=6;
 int a[6]={10,9,8,7,6,5};
 clrscr();

 /*printf("Enter the number of elements: ");
 scanf("%d", &n);
 printf("\nEnter Elements: ");
 for(i=0;i<n;i++)
 {
  scanf("%d", &a[i]);
 } */

 for(i=0;i<n-1;i++)
 {
   printf("After pass %d: \n", i+1);
   for(j=0;j<n-i-1;j++)
   {
     if(a[j]>a[j+1])
      {
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
      }
      for(k=0;k<n;k++)
      {
	printf("%d ", a[k]);
      }
      printf("\n");
   }
 }

 printf("\nEnd Result: ");
 for(i=0;i<n;i++)
 {
   printf("%d ", a[i]);
 }
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
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                







                                                                                








