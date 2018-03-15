#include<stdio.h>
#include<conio.h>

int temp[30][30]; // to store 1's and 0's
char first_seq[30];
char second_seq[30];
char lcs[30][30];//to store 'u','h','d';
int s1,s2;

void lcs_function();
void print_lcs();

void main()
{
  int n1,n2;
  clrscr();
  printf("\nThe first string:");
  scanf("%s", &first_seq);
  printf("\nThe second string: ");
  scanf("%s", &second_seq);
  s1=strlen(first_seq);
  s2=strlen(second_seq);
  lcs_function();
  getch();
}

void lcs_function()
{
 int i,j;
 for(i=0;i<s1+1;i++)
 {
  for(j=0;j<s2+1;j++)
  {
    temp[i][j]=0;
    lcs[i][j]='0';
  }
 }
 for(i=0;i<s1+1;i++)
 {
  for(j=0;j<s2+1;j++)
  {
    //printf(" %d ", temp[i][j]);
    if(first_seq[i]==second_seq[j])
    {
     temp[i+1][j+1]=temp[i][j]+1;
     lcs[i+1][j+1]='d';
    }
    else if(first_seq[i]!=second_seq[j])
    {
      if (temp[i+1][j]>temp[i][j+1])
      {
	lcs[i+1][j+1]='<';
	temp[i+1][j+1]=temp[i+1][j];
      }
      if(temp[i+1][j]<=temp[i][j+1])
      {
	lcs[i+1][j+1]='^';
	temp[i+1][j+1]=temp[i][j+1];
      }
    }
  }
 }
 print_lcs();
}

void print_lcs()
{
 int i,j,k;
 for(i=0;i<s1+1;i++)
 {
  //printf(" %c ", first_seq[i]);
  for(j=0;j<s2+1;j++)
  {
    //if(i=0)
      //printf(" %c ", second_seq[j]);
    printf(" %d ", temp[i][j]);
  }
  printf("\n");
 }

 printf("\n");

  for(i=0;i<s1+1;i++)
  {
   for(j=0;j<s2+1;j++)
   {
    printf(" %c ", lcs[i][j]);
   }
   printf("\n");
  }

}
