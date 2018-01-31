#include<stdio.h>
#include<conio.h>
#include<math.h>


float func(float);

struct node
{
 int coeff;
 int expo;
 struct node *next;
};
struct node *p=NULL;

float find_root(float r1,float r2, float ae, int n)
{
 float k,avg_prev=0, avg=0, aer=0;
 int count=0;
// printf("ITERATION NO: %3d", ++count);
 if(n==0)
 {
   n=3;
   printf("\nBy default, 3 iterations will be executed.");
   /*3 iterations from 0 to 2*/
 }
 if(ae==0)
 {
  ae=0.01;
  printf("\nBy default, 0.01 is set as allowed error.");
 }
 do
 {
  printf("\nITERATION NO: %2d", ++count);
  avg_prev=avg;
  avg=(r1+r2)/2;
  k=func(avg);
  if(k>0)
   {
    // find_root(avg,r2);
      r2=avg;
   }
   else if(k<0)
   {
     // find_root(r1,avg);
     r1=avg;
   }
   printf("\nThe root now lies between (%f,%f)", r1,r2);
   --n;
   if(n==0)
   {
    n=1;
   }
   aer=fabs(avg-avg_prev);
   printf("\nCurrent Error(aer): %f - %f = %f", avg, avg_prev, aer);
   if(aer>ae)
   {
    printf("\n%f(Current Error) > %f(Allowed Error)\n", aer, ae);
   }
   else if(aer<ae)
   {
    printf("\n%f(Current Error) < %f(Allowed Error)\n", aer, ae);
   }
 }
 while(n!=1 || aer>ae);
 /*This while statement will keep
   iterating unless no. of iterations
   and allowed error both are not satisfied*/
   printf("\nAfter completing %d iterations, ", count);
   return avg;
}

/*
float find_root(float r1,float r2,int n)
{
 int i;
 float avg,k;
 for(i=0;i<n;i++)
 {
   printf("\nITERATION %2d", i+1);
   avg=(r1+r2)/2;
   printf("\n(%f+%f)/2=%f", r1,r2,avg);
   k=func(avg);

   if(k>0)
   {
    // find_root(avg,r2);
      r2=avg;
   }
   else if(k<0)
   {
     // find_root(r1,avg);
     r1=avg;
   }
  /* else if(k==0)
   {
     printf("\nNOT SURE OF THE ROOTS, because f(%f)=%f.", avg,k);
     break;
   }*/
  // printf("\nThe root now lies between (%f, %f)", r1,r2);
/* }
 return avg;
}
*/
int verify_roots(float r1, float r2)
{
 float k,l;
 k=func(r1);
 l=func(r2);
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


float func(float i)
{
 struct node *temp2=p;
 float value=0,value1=0;
 while(temp2!=NULL)
 {
  value1=pow(i,temp2->expo);
  value=value+(temp2->coeff)*value1;
  /*if(temp2->next==NULL)
     printf("%dx^%d +", temp2->coeff,temp2->expo);
  else
     printf("%dx^%d = ", temp2->coeff,temp2->expo);
  printf("%f\n",value); */
  temp2=temp2->next;
 }
 printf("\n|\t f(%f)=%f ",i, value);
   if(value>0 || value==0)
     printf(" (+ive) \t|");
   else if(value<0)
     printf(" (-ive) \t|");
 return value;
}

float operation()
{
float k,l;
float i=0;
k=func(i);
l=func(i+0.5);

 while((k*l)>=0)
  {
   i=i+0.5;
   k=l;
   l=func(i+0.5);
  }
  printf("\nThe roots lie between ( %f , %f )", i,i+0.5);
 return i;
}


void initialize()
{
 int c,e;
 struct node *temp2;
 printf("Enter the expression: ");
 scanf("%dx^%d",&c,&e);
 while(c!=0 || e!=0)
 {
   struct node* temp=(struct node*)malloc(sizeof(struct node));
   temp->coeff=c;
   temp->expo=e;
   temp->next=NULL;

   if(p==NULL)
   {
     p=temp;
   }
   else
   {
     struct node *temp1=p;
     while(temp1->next!=NULL)
     {
      temp1=temp1->next;
     }
     temp1->next=temp;
   }
   scanf("%dx^%d",&c,&e);
 }
}

void main()
{
  int ch,k,iter;
  float r1,r2,root,ae;
  clrscr();
  initialize();
  printf("Initializated the polynomial successfully!");
  start:
  printf("\n======MENU====\n");
  printf("1) Enter the limits of the roots of given polynomial\n");
  printf("2) Let the program calculate the limits of the roots.\n");
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