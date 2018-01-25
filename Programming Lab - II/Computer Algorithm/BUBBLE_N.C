/*Sorting elements using Bubble Sort Method.*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,temp,k,n=6;
 int a[6]={5,6,7,8,9,10};
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
Worst Case: When the elements are in decending order:
 1) array initialized as:  a[6]={10,9,8,7,6,5};
After pass 1:
9 10 8 7 6 5
9 8 10 7 6 5
9 8 7 10 6 5
9 8 7 6 10 5
9 8 7 6 5 10
After pass 2:
8 9 7 6 5 10
8 7 9 6 5 10
8 7 6 9 5 10
8 7 6 5 9 10
After pass 3:
7 8 6 5 9 10
7 6 8 5 9 10
7 6 5 8 9 10
After pass 4:
6 7 5 8 9 10
6 5 7 8 9 10
After pass 5:
5 6 7 8 9 10

End Result: 5 6 7 8 9 10

2) Average Case: When few of the elements are sorted.
  array initialized as:  a[6]={5,8,9,7,6,10};
After pass 1:
5 8 9 7 6 10                                                                    
5 8 9 7 6 10                                                                    
5 8 7 9 6 10                                                                    
5 8 7 6 9 10                                                                    
5 8 7 6 9 10                                                                    
After pass 2:                                                                   
5 8 7 6 9 10                                                                    
5 7 8 6 9 10                                                                    
5 7 6 8 9 10                                                                    
5 7 6 8 9 10                                                                    
After pass 3:
5 7 6 8 9 10
5 6 7 8 9 10
5 6 7 8 9 10
After pass 4:
5 6 7 8 9 10
5 6 7 8 9 10
After pass 5:
5 6 7 8 9 10

End Result: 5 6 7 8 9 10

3) BEST CASE: When all the elements are already sorted:
  array initialized as:  a[6]={5,6,7,8,9,10};
After pass 1:
5 6 7 8 9 10                                                                    
5 6 7 8 9 10                                                                    
5 6 7 8 9 10                                                                    
5 6 7 8 9 10                                                                    
5 6 7 8 9 10                                                                    
After pass 2:                                                                   
5 6 7 8 9 10                                                                    
5 6 7 8 9 10                                                                    
5 6 7 8 9 10                                                                    
5 6 7 8 9 10                                                                    
After pass 3:
5 6 7 8 9 10
5 6 7 8 9 10
5 6 7 8 9 10
After pass 4:
5 6 7 8 9 10
5 6 7 8 9 10
After pass 5:
5 6 7 8 9 10

End Result: 5 6 7 8 9 10

		    */























