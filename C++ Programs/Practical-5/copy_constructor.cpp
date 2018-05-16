/*AIM: Copy Constructor*/
/*Time: Wed 16 May 2018 03:36:14 PM IST */

/*The compiler, by default, provides a copy constructor. But this copy constructor only does shallow copy of contents. For deep copies, we need user-defined consructors.*/
#include<iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point(int x1, int y1)
        {
            x=x1;
            y=y1;
        }
        Point (const Point &); // Copy constructor can also be defined outside the class.
        void display(void)
        {
            cout<<"x = "<<x<<"y = "<<y<<endl;
        }
};
/*Here p1 is referenced to the old object created, i.e 'p'*/
/*Reason for 'const': We should use const in C++ wherever possible so that objects are not accidentally modified. 
Source:https://www.geeksforgeeks.org/copy-constructor-argument-const/*/
Point::Point(const Point &p1)
{
    x=p1.x;
    y=p1.y;
}


int main ()
{
    Point p(20,30);//Normal Parameterized constructor
    Point q=p; // Actually works this way--> q(p);
    /*
    Point p, q;
    Point r = p;  // ----> This is copy constructor.
    q = p;          // -----> This is assignment operator calling.
Reason: Copy constructor is called when a new object is created from an existing object, as a copy of the existing object. Assignment operator is called when an already initialized object is assigned a new value from another existing object.*/

    p.display();
    q.display();
    return 0;
}

/*
OUTPUT:
x = 20y = 30
x = 20y = 30
*/

/*Interview Question: Can we make a copy constructor Private?
Yes, a copy constructor can be made private. When we make a copy constructor private in a class, objects of that class become non-copyable. This is particularly useful when our class has pointers or dynamically allocated resources.*/
