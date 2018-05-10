/*AIM: Function Prototype*/
/*Time: Thu 10 May 2018 05:23:17 AM IST */
#include<iostream>
using namespace std;

/*
Purpose: 
1) It tells the return type of the data that the function will return.
2) It tells the number of arguments passed to the function.
3) It tells the data types of the each of the passed arguments.
4) Also it tells the order in which the arguments are passed to the function.

Therefore essentially, function prototype specifies the input/output interlace to the function i.e. what to give to the function and what to expect from the function.

Prototype of a function is also called signature of the function.
In practice, compilers throw the warning saying that the return type is assumed as int.
*/

float add(float, float); // Function Pototype

int main ()
{
   float a,b,c;
   cout<<"Enter a and b: "<<endl;
   cin>>a>>b;
   c=add(a,b); // Function Call: passing actual arguments
   cout<<"Sum = "<<c;
    return 0;
}

float add(float num1, float num2) // Function definition: passing formal arguments
{
    return (num1+num2);
}

/* OUTPUT
Enter a and b: 
2.5 3.55
Sum = 6.05
*/
