/*AIM: Operator Overloading. Overloading of following operators:
a) Unary(++) Operator using Member Function
b) Unary(--) Operator using Friend Function
c) Binary(+) Operator using Member Function
d) Binary(-) Operator using Friend Function
*/
/*Time: Thu, May 17 2018 14:37:55*/
#include<iostream>
using namespace std;

class Overload{
    private:
        int a;
        int b;
    public:
        Overload(int x=0, int y=0)
        {
            a=x;
            b=y;
        }
        
        Overload operator++();
        friend Overload operator--(Overload);
        Overload operator+(Overload);
        friend Overload operator-(Overload,Overload);
        void display(void);
};

Overload Overload::operator++()
{
    Overload temp;
    temp.a = ++a;//a++ will not work.
    /*If we use a++, then the value of a will first be assigned to temp.a, then the value of a will be incremented.*/
    temp.b = ++b;
    return (temp);
}

Overload operator--(Overload a4)
{
    Overload temp;
    temp.a = --a4.a;
    temp.b = --a4.b;
    return (temp);
}


Overload Overload::operator+(Overload a2)
{
    Overload temp;
    temp.a = a + a2.a;
    temp.b = b + a2.b;
    return (temp);
}
Overload operator-(Overload a1,Overload a2)
{
    Overload temp;
    temp.a = a1.a - a2.a;
    temp.b = a1.b - a2.b;
    return (temp);
}
void Overload::display(void)
{
    cout<<" a = "<<a<<" b = "<<b<<endl;
}

int main ()
{
    Overload a1(1,2),a2(8,9),a3,a4;
    cout<<"In Object a1: ";
    a1.display();
    cout<<"In Object a2: ";
    a2.display();
    /*Remember: We we write a1++, the compiler shows Postfix-error. Hence ensure to mention proper notations, here in this case its ++a1.
    The Operator function defination for a1++ is quite different. (Check online)*/
    a3=++a1; //a1.operator++();
    cout<<"a3=++a1 : ";
    a3.display();
    cout<<"We have changed the value of a1, using member function. Hence, these values will remain in a1."<<endl;
    
    cout<<"\nIn Object a1: ";
    a1.display();
    cout<<"In Object a2: ";
    a2.display();
    a4=--a2; //operator--(a2);
    cout<<"a4=--a2 : ";
    a4.display();
    cout<<"We have changed the value of a2, using friend function. Hence, the value of a2 will only remain within this scope and will not appear the same again."<<endl;
    
    cout<<"\nIn Object a1: ";
    a1.display();
    cout<<"In Object a2: ";
    a2.display();
    a3=a1+a2;  //a1.operator+(a2);
    cout<<"a3=a1+a2: ";
    a3.display();
    
    cout<<"\nIn Object a1: ";
    a1.display();
    cout<<"In Object a2: ";
    a2.display();
    a4=a1-a2;//operator-(a1,a2);
    cout<<"a4=a1-a2: ";
    a4.display();
        
    return 0;
}

/*
OUTPUT
In Object a1:  a = 1 b = 2
In Object a2:  a = 8 b = 9
a3=++a1 :  a = 2 b = 3
We have changed the value of a1, using member function. Hence, these values will remain in a1.

In Object a1:  a = 2 b = 3
In Object a2:  a = 8 b = 9
a4=--a2 :  a = 7 b = 8
We have changed the value of a2, using friend function. Hence, the value of a2 will only remain within this scope and will not appear the same again.

In Object a1:  a = 2 b = 3
In Object a2:  a = 8 b = 9
a3=a1+a2:  a = 10 b = 12

In Object a1:  a = 2 b = 3
In Object a2:  a = 8 b = 9
a4=a1-a2:  a = -6 b = -6

*/

/*
Interview Questions:
1) These operators cannot be overloaded
. (dot) 
   :: 
   ?: 
   sizeof
   
2) Assignment Operator: Compiler automatically creates a default assignment operator with every class. The default assignment operator does assign all members of right side to the left side and works fine most of the cases (this behavior is same as copy constructor). See this for more details.
*/
