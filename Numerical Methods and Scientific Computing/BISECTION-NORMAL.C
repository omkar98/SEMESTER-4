#include<stdio.h>
#include<conio.h>
#include<math.h>


float func(float);
float find_root(float,float,float,int);
int verify_roots(float,float);
float operation(int);

void main()
{
  int ch,k,iter,flag,check;
  float r1,r2,root,ae;
  clrscr();
  start:
  printf("\n======MENU====\n");
  printf("1) Enter the limits of the roots of given polynomial\n");
  printf("2) Let the program calculate the limits of the roots.\n");
  printf("Your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
       printf("\nEnter the Roots: ");
       scanf("%f %f", &r1, &r2);
       k=verify_roots(r1,r2);
       if(k==1)
       {
	  printf("\nEnter the allowed error and number of iterations: ");
	  scanf("%f %d",&ae, &iter);
	  root=find_root(r1,r2,ae,iter);
	  printf("\n the root is: %f",root);
       }
       else if (k==0)
       {
	  goto start;
       }
       break;
    case 2:
	r1=operation(flag);
	printf("\nEnter the allowed error and number of iterations: ");
	scanf("%f %d",&ae, &iter);
	root=find_root(r1,r1+0.5,ae,iter);
	printf("the root is: %f",root);
	break;
    default:
	printf("Please Enter a valid choice.\n");
	goto start;
  }
  getch();
}

float find_root(float r1,float r2, float ae, int n)
{
 int count=0;
 float k,avg_prev=0, avg=0, aer=0;
 if(n==0)
 {
   n=3;
   printf("\nBy default, 3 iterations will be executed.");
   /*Three iterations from 0 to 2*/
 }
 if(ae==0)
 {
  ae=0.01;
  printf("\nBy default, 0.01 is set as allowed error.");
 }
 printf("\n|  #No\t|   r1 \t|   r2 \t|   x \t|f(x)\t\t\t|  aer \t|   ae \t|\n");
 printf("|=======|=======|=======|=======|=======================|=======|=======|\n");
 do
 {
  printf("|%3d\t|", ++count);
  printf("%0.5f|%0.5f|", r1,r2);
  avg_prev=avg;
  avg=(r1+r2)/2;
  printf("%0.5f|",avg);
  k=func(avg);
  printf(" %0.6f", k);
  if(k>0)
   {
      printf("\t(+ive)  |");
      r2=avg;
   }
   else if(k<0)
   {
     printf("\t(-ive)  |");
     r1=avg;
   }
   --n;
   if(n==-1)
   {
    n=0;
   }
   aer=fabs(avg-avg_prev);
   printf("%0.5f|%0.5f|\n", aer,ae);
 }
 while(n!=0 || aer>ae);
 /*This while statement will keep
   iterating unless no. of iterations
   and allowed error both are satisfied*/
   printf("\nAfter completing %d iterations, ", count);
   return avg;
}

int verify_roots(float r1, float r2)
{
 float k,l;
 k=func(r1);
 printf("|\tf(%f)=%f\t|\n ",r1, k);
 l=func(r2);
 printf("|\tf(%f)=%f\t|\n ",r2, l);
 if((k*l)>=0)
 {
   printf("\nThe actual root of the polynomial do not lie between (%f, %f).", r1,r2);
   return 0;
 }
 else if((k*l)<0)
 {
   printf("\n The entered values have been tested. \nThe actual root lie between (%f, %f)",r1,r2);
   return 1;
 }
 return 0;
}


float func(float x)
{
 float value=0;
 value=2*x*x*x-10*x*x-1;
 //value=x*log10(x)-1.2;
 //value=sin(x)-(1/x);
 //value=cos(x)-x*exp(x);
 return value;
}

float operation(int flag)
{
 float k,l,i;
 if(flag==0)
 {
   i=-5;
 }
 else
   i=0;
 k=func(i);
 printf("|f(%f)=%f ",i, k);
 if(k>0 || k==0)
   printf(" (+ive) \t|\n");
 else if(k<0)
   printf(" (-ive) \t|\n");
 l=func(i+=0.5);
 printf("|f(%f)=%f ",i, l);
 if(l>0 || l==0)
   printf(" (+ive) \t|\n");
 else if(l<0)
   printf(" (-ive) \t|\n");
 while((k*l)>=0)
  {
   i=i+0.5;
   k=l;
   l=func(i);
   printf("|f(%f)=%f ",i, l);
   if(l>0 || l==0)
     printf(" (+ive) \t|\n");
   else if(l<0)
     printf(" (-ive) \t|\n");
  }
  printf("\nThe roots lie between ( %f , %f )", i-0.5,i);
 return (i-0.5);
}
