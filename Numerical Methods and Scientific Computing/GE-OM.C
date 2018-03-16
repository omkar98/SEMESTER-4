#include<stdio.h>
#include<conio.h>
#define SIZE 20

float mat[3][4]={ 1, 4, -1, -5, 1, 1, -6, -12, 3, -1, -1, 4 };;
int rows, colms;

void print_mat();

void initialize_mat()
{
 int i,j;
 for(i=0;i<rows;i++)
 {
  for(j=0;j<colms;j++)
  {
    mat[i][j]=0;
  }
 }
 printf("\nInitialized the matrix to 0:\n\n ");
 print_mat();
}

/*void create_mat()
{
 rows=unknown;
 colms=unknown+1;
 mat=(int**)malloc(sizeof(int)*(rows*colms));
 initialize_mat();
} */

void enter_values()
{
  int i,j,*k;
  printf("Enter the equations: ");
  /*for(i=0;i<rows;i++)
  {
   for(j=0;j<colms;j++)
   {
    //scanf("%f",&mat[i][j]);
    //printf("mat[%d][%d]=%0.3f\n", i,j,mat[i][j]);
   }
  } */
//  mat[3][4]={ 1, 4, -1, -5, 1, 1, -6, -12, 3, -1, -1, 4 };
}

void print_mat()
{
 int i,j,k,l=65,count=1;
 for(i=0;i<rows;i++)
 {
   for(j=0;j<colms;j++)
   {
     k=((count)%(colms));
     if(k==1)
      {
	printf("|");
      }
     printf("\t%3.3f\t",mat[i][j]);

    if(k==0 || k==colms-1)
     {
      printf(" | ");
     }
     if(k==rows)
     {
	printf(" [ %c ] = | ", l);
	l++;
     }
     count++;
   }
   printf("\n");
 }
}

void operation(int unknown)
{
  int i,j,k;
  float p;
  for(k=0;k<unknown-1;k++)
  {
    for(i=k+1;i<rows;i++)
    {
     printf("\nOperation: R%d - (%.3f/%.3f)R%d", i+1,mat[i][k],mat[k][k],k+1);
     p=(mat[i][k]/mat[k][k]);
     for(j=k;j<colms;j++)
     {
      mat[i][j]=mat[i][j]-p*mat[k][j];
     }
     printf("\n");
     print_mat();
    }
  }
}

back_substitution()
{
  float a;
 for()
}

void main()
{
 int unknown;
 clrscr();
 printf("\nEnter no. of unknowns: ");
 scanf("%d", &unknown);
 rows=unknown;
 colms=unknown+1;
 print_mat();
 //initialize_mat();
 //enter_values();
// print_mat();
 operation(unknown);
 getch();
}