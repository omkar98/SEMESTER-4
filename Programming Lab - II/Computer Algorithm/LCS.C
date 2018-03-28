#include<stdio.h>
#include<conio.h>
#include<string.h>
char first[20],second[20],lcs[20][20];
int c,d,i,j,temp[20][20],m,n;

//LCS FUNCTION
void lcs_algo(char first[],char second[])
{
c=strlen(first);
d=strlen(second);
for(i=0;i<=c;i++) //TO MAKE FIRST COLUMN OF TEMP[I][J] 0
{
temp[i][0]=0;
}
for(j=0;j<=d;j++)   //TO MAKE FIRST ROW OF TEMP[I][J] 0
{
temp[0][j]=0;
}
for(i=1;i<=c;i++)
{
 for(j=1;j<=d;j++)
 {
  if(first[i-1]==second[j-1])
  {
   temp[i][j]=temp[i-1][j-1]+1;
   lcs[i][j]='D';
  }
  else if(temp[i-1][j]>=temp[i][j-1])
  {
   temp[i][j]=temp[i-1][j];
   lcs[i][j]='U';
  }
  else
  {
   temp[i][j]=temp[i][j-1];
   lcs[i][j]='L';
  }
 }
}
for(i=0;i<=c;i++)   //PRINTS ELEMENTS OF TEMP[][]
{
 printf("\n\t");
 for(j=0;j<=d;j++)
 {
 printf("  %d[%c]",temp[i][j],lcs[i][j]);
 }
 printf("\n");
}
}

//FUNCTION TO PRINT LCS
void print_lcs(int i,int j)
{
if(i==0 || j==0)
{
return;
}
else if(lcs[i][j]=='D')
{
print_lcs(i-1,j-1);
printf("%c",first[i-1]);
}
else if(lcs[i][j]=='U')
{
print_lcs(i-1,j);
}
else
{
print_lcs(i,j-1);
}
}

//MAIN FUNCTION
void main()
{
clrscr();
printf("\tEnter the first string");
scanf("%s",&first);
printf("\tEnter the second string");
scanf("%s",&second);
lcs_algo(first,second);
printf("\n\tLONGEST COMMON SUBSEQUENCE IS:");
print_lcs(c,d);
getch();
}


********************OUTPUT************************

 



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                





                                                                                



