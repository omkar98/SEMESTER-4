#include<stdio.h>
#include<conio.h>
#include<math.h>
struct node
{
 int coeff;
 int expo;
 struct node *next;
};
struct node *p=NULL;

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
   /*printf("\n|\tf(%d)=%f",i, k);
   if(k>0 || k==0)
     printf(" (+ive)\t|");
   else if(k<0)
     printf(" (-ive)\t|"); */
 while((k*l)>=0)
  {
   i=i+0.5;
   k=l;
   l=func(i+0.5);
  /* printf("\n|\tf(%d)=%f", i+1,l);
   if(l>0 || l==0)
     printf(" (+ive)\t|");
   else if(l<0)
     printf(" (-ive)\t|"); */
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
  clrscr();
  initialize();
  printf("Initializated the polynomial successfully!");
  operation();
  printf("\nRoots found successfully!");
  roots();
  getch();

}