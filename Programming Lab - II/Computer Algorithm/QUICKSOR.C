#include"stdio.h"
#include"conio.h"
#define max 50
int temp,temp1,q,x,i,j,k;
void quick_sort(int a[],int p,int r)
{
printf("\n\tQUICK_SORT(A,%d,%d)",p,r);
if(p<r)
{
q=partition(a,p,r);
quick_sort(a,p,q-1);
quick_sort(a,q+1,r);
}
}

int partition(int a[],int p,int r)
{
x=a[r];
i=p-1;
for(j=p;j<=(r-1);j++)
{
if(a[j]<=x)
{
i=i+1;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp1=a[r];
a[r]=a[i+1];
a[i+1]=temp1;
printf("  Array elements are:");
for(j=p;j<=r;j++)
{
printf(" %d",a[j]);
}
return(i+1);
}

void main()
{
int n,a[max];
clrscr();
printf("\tEnter the size of array");
scanf("%d",&n);
printf("\n\tEnter the elements of array");
for(i=1;i<=n;i++)
scanf(" %d",&a[i]);
printf("\n\tUnsorted array:");
for(i=1;i<=n;i++)
printf(" %d",a[i]);
printf("\n\n\t***************QUICK_SORT STARTS***************");
quick_sort(a,1,n);
printf("\n\t***************QUICK_SORT ENDS*****************");
printf("\n\n\tSorted array:");
for(i=1;i<=n;i++)
printf(" %d",a[i]);
getch();
}

OUTPUT:
	Enter the elements of array 9 2 8 3 1 7 4 5

	Unsorted array: 9 2 8 3 1 7 4 5

	***************QUICK_SORT STARTS***************
	QUICK_SORT(A,1,8)  Array elements are: 2 3 1 4 5 7 9 8
	QUICK_SORT(A,1,4)  Array elements are: 2 3 1 4
	QUICK_SORT(A,1,3)  Array elements are: 1 3 2
	QUICK_SORT(A,1,0)
	QUICK_SORT(A,2,3)  Array elements are: 2 3
	QUICK_SORT(A,2,1)
	QUICK_SORT(A,3,3)
	QUICK_SORT(A,3,4)  Array elements are: 3 4
	QUICK_SORT(A,3,3)
	QUICK_SORT(A,5,4)
	QUICK_SORT(A,5,8)  Array elements are: 5 7 8 9
	QUICK_SORT(A,5,6)  Array elements are: 5 7
	QUICK_SORT(A,5,5)
	QUICK_SORT(A,7,6)
	QUICK_SORT(A,7,8)  Array elements are: 8 9
	QUICK_SORT(A,7,7)
	QUICK_SORT(A,9,8)
	***************QUICK_SORT ENDS*****************

	Sorted array: 1 2 3 4 5 7 8 9
