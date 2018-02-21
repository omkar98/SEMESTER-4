#include<stdio.h>
#include<conio.h>

merge_sort(int arr[],int low, int high)
{
 int mid;
 mid=(low+high)/2;
 if(low<high)
 {
   merge_sort(arr, low, mid);
   merge_sort(arr, mid+1, high);
   //merge(low,mid,high);
 }
}
void main()
{
 int low=0,high=5;
 int arr[6]={6,2,5,3,4,1};
 clrscr();
 merge_sort(arr, low,high);
 getch();
}