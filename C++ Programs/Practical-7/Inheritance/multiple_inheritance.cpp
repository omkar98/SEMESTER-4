/*AIM: Simple Multiple Inheritance and understanding the Smbiguity Error*/
/*Time: Fri 18 May 2018 05:03:58 PM IST */
#include<iostream>
using namespace std;
/*Multiple Base classes inherit a single derived class*/
class A
{
    public:
        void display()
        {
            cout<<"I am from Base Class A"<<endl;
        }
};
class B
{
    public:
        void display()
        {
            cout<<"I am from Base Class B"<<endl;
        }
};
class AB: public A, public B
{
    public:
        void display()
        {
            cout<<"I am from Base Class AB"<<endl;
        }
        /*By default, the display function from the derived class is selected. In order to select the display() of other class, we use the membership label.*/
};

int main ()
{
    AB obj;
    obj.display();
    obj.A::display();
    obj.B::display();
    return 0;
}
/*
OUTPUT
I am from Base Class AB
I am from Base Class A
I am from Base Class B
*/
