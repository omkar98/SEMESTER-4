/*AIM: Call by Value, Call by Reference and Call by Address*/
/*Time: Thu 10 May 2018 06:17:25 AM IST */
#include<iostream>
using namespace std;

void CallByValue(int, int);
void CallByReference(int &, int &);
void CallByAddress(int *, int *);

int main ()
{
    int a=2, b=3;
    cout<<"Before: a="<<a<<" b="<<b<<endl;
    CallByValue(a,b); // Pass by Value
    cout<<"After Call By Value: a="<<a<<" b="<<b<<endl<<endl;
    
    cout<<"Before: a="<<a<<" b="<<b<<endl;
    CallByReference(a,b);// Pass by Reference
    cout<<"After Call By Reference: a="<<a<<" b="<<b<<endl<<endl;
    
    a=2;b=3; //We again reset values of a and b.
    cout<<"Before: a="<<a<<" b="<<b<<endl;
    CallByAddress(&a,&b); // Pass by Address
    cout<<"After Call By Address: a="<<a<<" b="<<b<<endl;
    return 0;
}

void CallByValue(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Inside CallByValue Function: x="<<x<<" y="<<y<<endl;
}

void CallByReference(int &x, int &y)
{
/*Call by Reference in C++, simply means that we refer a and b(actual arguments) as x and y. The memory and values of a and b are shared by x and y.*/
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Inside CallByReference Function: x="<<x<<" y="<<y<<endl;
}

void CallByAddress(int *x, int *y)
{
/*We know, addresses are stored by pointers. Hence, in the function prototype and definition, we use pointers.*/
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"Inside CallByAddress Function: *x="<<*x<<" *y="<<*y<<endl;
}

/*Output:
Before: a=2 b=3
Inside CallByValue Function: x=3 y=2
After Call By Value: a=2 b=3

Before: a=2 b=3
Inside CallByReference Function: x=3 y=2
After Call By Reference: a=3 b=2

Before: a=2 b=3
Inside CallByAddress Function: *x=3 *y=2
After Call By Address: a=3 b=2

Best Source: https://youtu.be/-NS3KfrSvU8
*/
