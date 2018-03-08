
#include<stdio.h>
#include<conio.h>
#include<math.h>

float derivative(float);
float func(float);
float find_root(float,float,float,int);
int verify_roots(float,float);
float operation();

void main()
{
  int ch,k,iter,flag,check;
  float r1,r2,root,ae;
  clrscr();
  start:
  printf("Finding positive root of x^4 - x = 10, using Newton Rapson Method\n");
  printf("\n======MENU====\n");
  printf("1) Enter the interval of the roots of given polynomial\n");
  printf("2) Let the program calculate the interval of the roots.\n");
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
	r1=operation();
	printf("\nEnter the allowed error and number of iterations: ");
	scanf("%f %d",&ae, &iter);
	root=find_root(r1,r1+0.5,ae,iter);
	printf("\n the root is: %f",root);
	break;
    default:
	printf("Please Enter a valid choice.\n");
	goto start;
  }
  getch();
}

float find_root(float r1,float r2, float ae, int n)
{
 int count=0,count1=0;
 float x0,avg_prev=0, prev_aer=0,avg=0, aer=0;
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
 if(fabs(func(r1)-0)<fabs(func(r2)-0))
  {
    avg=r1;
    printf("\nLet us take x0 = %f\n", r1);
  }
  else
  {
    avg=r2;
    printf("\nLet us take x0 = %f\n", r2);
  }
 printf("\n|  #No\t|\tx\t|\tf(x)\t\t|  aer \t\n");
 printf("|=======|===============|============================|=======|\n");
 do
 {
  printf("|%3d\t|", ++count);
  avg_prev=avg;
  avg=(avg_prev-(func(avg_prev)/derivative(avg_prev)));
  printf("x%d = %0.5f\t|",count,avg);
   aer=fabs(avg-avg_prev);
   printf("f(%f) = %f\t|", avg, func(avg));
   if(count!=1)
    printf("%0.5f|", aer);
   printf("\n");
 }
 while(aer>ae);
   printf("\nAfter completing %d iterations, ", count);
   return avg;
}

int verify_roots(float r1, float r2)
{
 float k,l;
 k=func(r1);
 printf("|\tf(%f)=%f\t|\n ",r1, k);
 l=func(r2);
 printf("|\tf(%f)=%f\t|\n ",r2, l);;
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
 value=x*x*x*x-x-10;
 //value=x*log10(x)-1.2;
 //value=sin(x)-(1/x);
 //value=cos(x)-x*exp(x);
 return value;
}

float derivative(float x)
{
 float value=0;
 value=4*x*x*x-1;
 return value;
}

float operation()
{
 float k,l,i;
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
