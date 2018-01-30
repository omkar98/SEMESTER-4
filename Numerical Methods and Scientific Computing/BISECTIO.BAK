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
 printf("\n|\t f(%0.2f)=%f ",i, value);
   if(value>0 || value==0)
     printf(" (+ive) \t|");
   else if(value<0)
     printf(" (-ive) \t|");
 return value;
}

void operation()
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
  int ch,k;
  float r1,r2;
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
       printff("\nEnter the Roots: ");
       scanf("%f %f", &r1, &r2);
       k=verify_roots(r1,r2);
       if(k==1)
	  find_root(r1,r2);
       else if (k==0)
	  goto start:
       break;
    case 2:
       operation();
       //roots();
       break;
    default:
	printf("Please Enter a valid choice.\n");
	goto start;
	break;
  }
  getch();

}