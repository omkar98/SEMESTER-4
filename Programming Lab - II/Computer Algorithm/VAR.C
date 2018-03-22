#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//The maximum length of a variable in C language is 31 characters
char string[31];

void check();


void main()
{
  int i=0;
  clrscr();
  printf("\nEnter a string: ");
  gets(string);
  //scanf("%s", &string);
  printf("\nYou entered: %s", string);
  check();
  getch();
}

void check()
{
  int k,i;
  char keyword[32][10]={"auto","double","int","struct","break","else","long","switch","case","enum","register","typedef","char","extern","return","union","const","float","short","unsigned","continue","for","signed","void","default","goto","sizeof","voltile","do","if","static","while"} ;

   k=strlen(string);

  for(i=0;i<=32;i++)
  {
   if(strcmp(string,keyword[i])==0)
    {
       printf("\nYou have entered a keyword.");
       return;
    }
   }
  printf("\nThe entered keyword is not a keyword");
  for(i=0;i<k;i++)
  {
    if(isdigit(string[i]) && i==0)
    {
     printf("\nThe first letter of the string is a number.");
     break;
    }
    if(isspace(string[i]))
    {
     printf("\nThere is a space.");
     break;
    }
    if(ispunct(string[i]) && string[i]!='_')
    {
     printf("\nThere is a special symbol used %c.", string[i]);
     break;
    }
  }
}
